
#include <stdio.h>
//funciona com os exemplos nao funciona com o uri rever
int main() {
 int i, n, h, ant, direcao = 0, padrao = 1;

 scanf("%d",&n);
 scanf("%d",&ant);
 scanf("%d",&h);

 if(ant>h)
    direcao = 1;
 ant = h;
 for(i=2;i<n;i++){
    scanf("%d",&h);
    if(direcao){
        if(h>ant){
            direcao = 0;
        }else{
            padrao = 0;
            break;
        }
    }else{
        if(ant>h){
            direcao = 1;
        }else{
            padrao = 0;
            break;
        }
    }
     ant = h;
 }
printf("%d\n",padrao);

    return 0;
}



