int main(){
  int m,n,i,min,max_m;
  float nota,max_n;
  max_n = 0;
  max_m = 0;
  min = 0;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d %f", &m, &nota);
    if(nota>max_n){
        max_m = m;
        max_n = nota;
        if(nota>=8){
            min = 1;
        }

    }
  }
    if(min){
        printf("%d\n",max_m);
    }else{
         printf("Minimum note not reached\n");
    }


    return 0;
}
