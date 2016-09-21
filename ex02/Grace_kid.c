#include <stdio.h>
/*
  Commentaire
*/
#define DEFINE2
#define DEFINE1 {char *c="#include <stdio.h>%c/*%c%c%cCommentaire%c*/%c#define DEFINE2%c#define DEFINE1 {char *c=%c%s%c; FILE* file=NULL; file = fopen(%cGrace_kid.c%c, %cw%c); if(file != NULL){fprintf(file,c,10,10,32,32,10,10,10,34,c,34,34,34,34,34,10,10,10); fclose(file);}}%c#define MAIN int main(void) {DEFINE1 return (0);}%cMAIN%c"; FILE* file=NULL; file = fopen("Grace_kid.c", "w"); if(file != NULL){fprintf(file,c,10,10,32,32,10,10,10,34,c,34,34,34,34,34,10,10,10); fclose(file);}}
#define MAIN int main(void) {DEFINE1 return (0);}
MAIN
