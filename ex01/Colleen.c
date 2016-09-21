#include <stdio.h>
/*
  Com 2
*/
void f(){char *c="#include <stdio.h>%c/*%c%c%cCom 2%c*/%cvoid f(){char *c=%c%s%c;printf(c,10,10,32,32,10,10,34,c,34,10);}%c";printf(c,10,10,32,32,10,10,34,c,34,10);}
int main(){f();char *c="int main(){f();char *c=%c%s%c;printf(c,34,c,34,10,10,32,32,10,10,10); return 0;%c/*%c%c%cCom 1%c*/%c}%c";printf(c,34,c,34,10,10,32,32,10,10,10); return 0;
/*
  Com 1
*/
}
