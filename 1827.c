
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
   int n,i,j;

   while (scanf("%d", &n) != EOF) {
    int M[n][n];
      for(i=0;i<n;i++){
        for(j=0;j<n;j++){
                M[i][j]= 0;
             if(j==0||j==n-1){
                 M[i][j] = 0;
             }
             if(i==0||i==n-1){
                 M[i][j] = 0;
             }


             if(i==j){
                M[i][j] = 2;
            }
             if(i==j){
                M[i][j] = 2;
            }
            if(i+j==n-1){
                M[i][j] = 3;
            }
             if((i>=n/3&&i<=2*n/3)&&(j>=n/3&&j<=2*n/3))
                 M[i][j] = 1;
            if(i==(n/2)&&j==(n/2))
                M[i][j] = 4;
        }

      }

   for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d",M[i][j]);
        }
         printf("\n");
   }
    printf("\n");

}
 return 0 ;
}
