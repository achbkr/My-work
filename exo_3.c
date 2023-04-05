#include <stdio.h>
#include <stdlib.h>
int parfait(p){
    int x,s=0;
    for(int i=1;i<=p/2;i++){
        x=p%i;
        if(x==0){
            s=s+i;
        }
    }
    if(s==p){
        return 1;
    }
    else{
        return 0;
    }
}

int main()
{
    int i,j,n,m,x;
    printf("size of matrice : \n");
    scanf("%d%d",&n,&m);
    int tab[n][m];

    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&tab[i][j]);
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("%d\n",tab[i][j]);
        }
    }
    printf("Les nombres parfait dans cette matrice sont :\n");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            x=parfait(tab[i][j]);
            if(x==1){
                printf("%d",tab[i][j]);
            }
        }
    }
    return 0;
}