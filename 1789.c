#include <stdio.h>

int main(){
int n ,L,v;
scanf("%d",&n);
L = 3;
while (scanf("%d", &v) != EOF) {
    if(v>=10&&v<20){
        L = 2;
    }
    if(v>=20){
        L = 1;
    }
}
printf("%d\n",L);
}
