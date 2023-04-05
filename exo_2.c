#include<stdio.h>
int main()
{
    int i,j,n,m,z,k,c=0,y,x;
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
    for(i=0;i<n;i++){
        y=0;
        for(j=1;j<m;j++){
            x=tab[i][j];
            for(z=c;z<n;z++){
                for(k=y;k<m;k++){
                    if(x==tab[z][k]){
                        tab[z][k]=0;
                    }
                }
            }
            y++;
        }
        c++;
    }
    printf("\n");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
                if(tab[i][j]!=0){
                    printf("%d\n",tab[i][j]);
                }
        }
    }
    return 0;
}