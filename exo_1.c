#include<stdio.h>
int main(){
  int n,x;
  printf("enter la taille de tableu : \n");
  scanf("%d",&n);
  int tab[n];
  printf("remplir le tableu :\n");

  for(int i=0;i<n;i++){
    scanf("%d",&tab[i]);
  }
  for(int i=0;i<n;i++){
    if(tab[i]==0 && i+1<n){
        x=tab[i];
        tab[i]=tab[i+1];
        tab[i+1]=x;
    }
  }
  printf("\napres changement : \n");
  for(int i=0;i<n;i++){
    printf("%d\n",tab[i]);
  }


    return 0;
}