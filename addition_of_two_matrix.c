#include<stdio.h>
int main(){
    int a[2][2], b[2][2], c[2][2];

    printf("enter elements of a: ");
    for(int i = 0; i<2; i++){
        for(int j = 0; j<2; j++){
            scanf("%d", &a[i][j]);
        }
    }

    printf("enter elements of b: ");
    for(int i = 0; i<2; i++){
        for(int j = 0; j<2; j++){
            scanf("%d", &b[i][j]);
        }
    }

    printf("enter elements of c: ");
    for(int i = 0; i<2; i++){
        for(int j = 0; j<2; j++){
           c[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("Addition of two matrix\n");
    for(int i = 0; i<2; i++){
        for(int j = 0; j<2; j++){
           printf("%d ",c[i][j]);
        }
        printf("\n");
    }
}