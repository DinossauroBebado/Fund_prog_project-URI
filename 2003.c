#include <stdio.h>


int main(){
int horas,minutos,atraso ;
while (scanf("%d:%d", &horas, &minutos) != EOF){
    horas = horas*60 ;

    atraso = (horas + minutos + 60) - 8*60 ;
    if(atraso<=0){
     printf("Atraso maximo: %d\n",0) ;
    }else{
     printf("Atraso maximo: %d\n",atraso);
    }
}
return 0;
}
