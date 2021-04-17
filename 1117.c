#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int cont = 0 ;
    float nota[100] ;
    do{
        scanf("%f",&nota[cont]);
        if(nota[cont]>=0&&nota[cont]<=10){
            cont++;
        }else{
            printf("nota invalida\n");
        }
    }while(cont<2);
    printf("media = %.2f\n",(nota[0]+nota[1])/2);
    return 0;
}
