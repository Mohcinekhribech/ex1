#include <stdio.h>
#include <stdlib.h>
/*int u(int n){



     return u;

}*/
int main(){

    int n;
    int u0=6;
    int u;
    up:
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        u=4*u0+10;
        u0=u;



        }if(n==0){
            u=6;
     }
    printf("%d\n",u);
    u0=6;
    goto up;

    return 0;
}
