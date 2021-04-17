
int main(){
int p,j1,j2,r,a,ganha;
scanf("%d %d %d %d %d", &p, &j1, &j2, &r, &a);

if(p){
   if((j1+j2)%2==0){
    ganha = 1;
   }else{
   ganha = 2; }
}else{
if((j1+j2)%2==0){
    ganha = 2;
   }else{
   ganha = 1; }
}
if(r&&a){
    ganha = 2;
}else if(r&&!a){
ganha = 1;}
else if(!r&&a){
ganha = 1;
}
printf("Jogador %d ganha!\n",ganha);

return 0;
}
