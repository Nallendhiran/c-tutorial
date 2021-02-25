#include<stdio.h>

int main(){
for (int i=0;i<=5;i++){
    printf("$ ");
}
printf("\n");


//nested for loop
for(int j=0;j<=5;j++){
    for(int k=0;k<=5;k++){
        printf("@ ");
    }
    printf("\n");
}
return 0;
}
