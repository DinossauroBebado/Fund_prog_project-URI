#include <stdio.h>
#include <stdlib.h>
#include <string.h>
////////////////////////////Runtime error
int main(){

int i,f,d;

d=0;

scanf("%d %d",&i,&f);

if(i==f){
    d = 24;
}
else if(f>i){
    d = f-i;
}
else if(i>f){
    d = (24-i) + f;
}
printf("O JOGO DUROU %d HORA(S)\n",d);

return 0;

}
