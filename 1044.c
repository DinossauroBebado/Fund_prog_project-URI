//6 24
//
//Sao Multiplos
//
//6 25
//
//Nao sao Multiplos
#include <stdio.h>
int main(){
int x,y,m;

scanf("%d %d",&x,&y);

if(x%y==0 || y%x==0){
    printf("Sao Multiplos\n");
}else{
    printf("Nao sao Multiplos\n");
}
return 0 ;
}
