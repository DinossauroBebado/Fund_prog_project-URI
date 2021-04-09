#include <stdio.h>
//-3.5
//3.5
//11.0
//10.0
//
//nota invalida
//nota invalida
//media = 6.75
int main(){
int cont = 0 ;
float nota[2] ;
do{
    scanf("%f",&nota[cont]);
    if(nota[cont]>=0&&nota[cont]<=10){
        cont++;
    }else{
        printf("nota invalida\n");
    }
}while(cont<2);
printf("media = %.2f\n",(nota[0]+nota[1])/2);
}
