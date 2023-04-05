#include<stdio.h>
int premier(int p){
    int x,c=0;
    for(int j=1;j<=p;j++){
        x=p%j;
        if(x==0){
            c++;
        }
    }
    if(c==2){
        return 1;
    }
    else{
        return 0;
    }
}
int semi_premier(int n,int tab[n]){
    int z,x,y,i,c;
    printf("les nombres semi_premier sont :\n");
    for(i=0;i<n;i++){
        c=0;
            for(int j=1;j<=tab[i];j++){
                x=premier(j);
                    if(x==1){
                        z=tab[i]%j;
                            if(z==0){
                                y=premier(tab[i]/j);
                                    if(y==1){
                                        printf("%d\n",tab[i]);
                                        break;
                                    }
                            }
                    }
            }
    }


}



int main()
{
    int n,x;
    printf("size of vetor : \n");
    scanf("%d",&n);
    int tab[n];
    for(int i=0;i<n;i++){
        scanf("%d",&tab[i]);
    }
    for(int i=0;i<n;i++){
        x=premier(tab[i]);
        if(x==1){
            printf("%d",tab[i]);
        }
    }
    printf("\n______________\n______________\n______________\n");
    semi_premier(n,tab);

    return 0;
}