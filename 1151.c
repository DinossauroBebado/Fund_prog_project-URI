#include <stdio.h>

int main(){
int n,i,j,f[100];
scanf("%d",&n);
f[0] = 0;
f[1] = 1;
f[2] = 1;
for(i=3; i<=n; i++){
     f[i] = f[i-2] + f[i-1];
}

printf("%d",f[0]);
for(j = 1;j<n;j++){
printf(" %d",f[j]);
}
printf("\n");
}
