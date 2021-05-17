#include <stdio.h>
#include <stdlib.h>

 #define max 90
int main() {
 int B[max+1],N[max],n,b,i,j,check = 0;


 while (1) {
 scanf("%d %d", &n, &b);
 if ((n == 0) && (b == 0))
    break;

for(i=1;i<=b;i++){
    N[i]=i;
}


 for(i=0;i<b;i++){
    scanf("%d",&B[i]);
 }

 for(i=0;i<b;i++){
    for(j=0;j<b;j++){
       if(abs(B[i]-B[j])==N[i]){
         check = 1;
       }
    }
}

 if(check){
  printf("Y\n");
  check = 0;
 }else{
    printf("N\n");
 }

}
    return 0;
}
