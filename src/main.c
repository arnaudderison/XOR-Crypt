#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "../include/xorcrypt.h"

FILE *PATH;
FILE *DEST;

int main(int argc, char *argv[]){
    if(argc == 1 || argc == 2){
        help();
    }else if (argc == 5){
        paramsTest(argv[1], argv[3], argv[2], argv[4]);
    }  
    return 0;
}   

void help(void){
    puts("\n<=============================XorCrypt=============================>\n");
    puts("Encrypt file: \t xorcrypt -c [Filename] [Key] [Destination] ");
    puts("Decrypt file: \t xorcrypt -d [Filename] [Key] [Destination]");
    puts("\nExample: \t xorcrypt -c text.txt key text2.txt\n");
    puts("<===================================================================>\n");
    system("pause");
}

void paramsTest(char *arg, char *key, char path[255], char dest[255]){
    if(strcmp(arg, "-c") == 0)
        crypt(arg, key, path, dest);

    else if (strcmp(arg, "-d") == 0)
        crypt(arg, key, path, dest);

    else
        help();   
}

int crypt(char *arg, char *key, char path[255], char dest[255]){
    int c, i, countKey = 0;

    if(key != NULL && path != NULL && dest != NULL){
        printf("%s\n", path);
        if(PATH = fopen(path, "rb")){ //open file in binairy read mode
            DEST = fopen(dest, "wb");

            while((c=fgetc(PATH)) != EOF){

                if(strcmp(arg, "-c") == 0){
                    c = ~c;
                    c ^= key[countKey];
                }else{
                    c ^= key[countKey];
                    c = ~c;
                }
                
                fprintf(DEST, "%c", c);

                if(countKey != strlen(key))
                    countKey += 1;
                else
                    countKey = 0;
            }
            fclose(PATH);
            fclose(DEST);
            puts("Finish");

            return 1;
        }else{
            puts("Impossible to open the source file");
            return 0;
        }
    }else{
        puts("Invalid parameter");
        help();
        return 0;
    }
}

