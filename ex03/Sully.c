#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char *convertToO(int i){char b[20];sprintf(b, "%d", i);char cmd[256] = "Sully_";strcat(cmd, b); strcat(cmd, ".o"); return strdup(cmd);}
char *convertToC(int i){char b[20];sprintf(b, "%d", i);char cmd[256] = "Sully_";strcat(cmd, b); strcat(cmd, ".c"); return strdup(cmd);}

int main(){
char *c="#include <stdlib.h>%c#include <stdio.h>%c#include <string.h>%c%cchar *convertToO(int i){char b[20];sprintf(b, %c%cd%c, i);char cmd[256] = %cSully_%c;strcat(cmd, b); strcat(cmd, %c.o%c); return strdup(cmd);}%cchar *convertToC(int i){char b[20];sprintf(b, %c%cd%c, i);char cmd[256] = %cSully_%c;strcat(cmd, b); strcat(cmd, %c.c%c); return strdup(cmd);}%c%cint main(){%cchar *c=%c%s%c;%cint nb=%d;%cFILE* fichier=NULL;%cif(nb > 0){%cif(strcmp(__FILE__ , %c../Sully.c%c) != 0){%cnb--;%c}%cchar *str1 = convertToC(nb);%cchar *str2 = convertToO(nb);%cfichier=fopen(str1,%cw+%c);%cif(fichier!=NULL){%cfprintf(fichier,c,10,10,10,10,34,37,34,34,34,34,34,10,34,37,34,34,34,34,34,10,10,10,34,c,34,10,nb,10,10,10,34,34,10,10,10,10,10,34,34,10,10,10,10,10,34,34,10,34,34,10,10,10,10,10,34,34,10,10,10,10);%c}%cfclose(fichier);%cchar cmd1[256] = %cclang -Werror -Wextra -Wall -c %c;%cchar cmd2[256] = %cclang -Werror -Wextra -Wall -o Sully %c;%cstrcat(cmd1, str1);%cstrcat(cmd2, str2);%csystem(strdup(cmd1));%csystem(strdup(cmd2));%csystem(%c./Sully%c);%c}%creturn 0;%c}%c";
int nb=5;
FILE* fichier=NULL;
if(nb > 0){
if(strcmp(__FILE__ , "../Sully.c") != 0){
nb--;
}
char *str1 = convertToC(nb);
char *str2 = convertToO(nb);
fichier=fopen(str1,"w+");
if(fichier!=NULL){
fprintf(fichier,c,10,10,10,10,34,37,34,34,34,34,34,10,34,37,34,34,34,34,34,10,10,10,34,c,34,10,nb,10,10,10,34,34,10,10,10,10,10,34,34,10,10,10,10,10,34,34,10,34,34,10,10,10,10,10,34,34,10,10,10,10);
}
fclose(fichier);
char cmd1[256] = "clang -Werror -Wextra -Wall -c ";
char cmd2[256] = "clang -Werror -Wextra -Wall -o Sully ";
strcat(cmd1, str1);
strcat(cmd2, str2);
system(strdup(cmd1));
system(strdup(cmd2));
system("./Sully");
}
return 0;
}
