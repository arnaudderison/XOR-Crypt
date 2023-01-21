#include <stdio.h>
#include <stdlib.h>

#include "../include/xorcrypt.h"

int main(int argc, char *argv[]){
    help();
    return 0;
}

void help(void){
    puts("\n\t\t<------------------XorCrypt-------------------->");
    puts("\t\t<-------------------------------------------->\n");
    puts("Documentation :");
    puts("xorcrypt -c [Filename] [Key] [Destination]  : Encrypt file");
    puts("xorcrypt -d [Filename] [Key] [Destination]  : Decrypt file");
    puts("Exemple  : xorcrypt -c texte.txt clef texte2.txt\n");
    system("pause");
}