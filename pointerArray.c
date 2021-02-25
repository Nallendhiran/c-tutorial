#include<stdio.h>

int main(){
    //single dimensional array
//    int k[]={1,2,3,4,5};
//    int *g;
//    g=&k;
//    printf("%d \n",&k);
//    printf("%d \n",g);
//    for (int i=0;i<=4;i++){
//        printf("%d \n",*(k+i));
//    }

//    //two dimensional array
    int b[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int *d;
    d=&b;
    printf("%d \n",&b);
    printf("%d \n",d);
    for (int i=0;i<=2;i++){
            for(int j=0;j<=2;j++){
                printf("%d ",*(*(b+i)+j));
            }
            printf("\n");
    }

return 0;
}
