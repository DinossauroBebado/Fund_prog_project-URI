#include <stdio.h>
#include<math.h>

////////////////////////////nao funciona////////////////////////////
int main() {
double a,b,c,delta,r1,r2 ;
scanf("%f %f %f",&a,&b,&c);
delta = b*b-4*a*c;
r1 = (-1*b+sqrt(delta))/2*a;
r2 = (-1*b-sqrt(delta))/2*a;

if(delta>0&&a!=0){
    printf(	"R1 = %.5f \nR2 = %.5f\n",r1,r2);}
else{
    printf("Impossivel calcular\n");
}


    return 0;
}
