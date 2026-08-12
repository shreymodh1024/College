#include<stdio.h>
int main(){
//     int b[2][2] = {{2,3},{4,5}};
//     //initialization
//     printf("%d",b[1][1]);
//----------------------------------------

int x[3][3];

//taking input
for(int i = 0; i<3; i++){
    for(int j = 0; j<3; j++){
        printf("(%d,%d) --> ",i,j);
        scanf("%d", &x[i][j]);
    }
}

//printing 2-D array
printf("the values of array are as follows:\n");
for(int i = 0; i<3; i++){
    for(int j = 0; j<3; j++){
        printf("%d ",x[i][j]);
    }
    printf("\n");
}

}