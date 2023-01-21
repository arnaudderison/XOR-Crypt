#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "../include/xorcrypt.h"

int main(int argc, char *argv[]){
    if(argc == 1 || argc == 2){
        help();
    }else if (argc == 5){
        paramsTest(argv[1], argv[2], argv[3], argv[4]);
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
        puts("Il faut crypter le fichier");

    else if (strcmp(arg, "-d") == 0)
        puts("IL faut décrypter le fichier");

    else
        help();
    
}