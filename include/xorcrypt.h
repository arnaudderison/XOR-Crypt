#ifndef __xorcrypt__
#define __xorcrypt__

void help(void);
void paramsTest(char *arg, char *key, char path[255], char dest[255]);
int crypt(char *arg, char *key, char path[255], char dest[255]);

#endif