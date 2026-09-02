#include<stdio.h>
int main(){
    int A[5] = {5,3,8,2,4};
    int n = 5, temp;

    for(int i = 0; i<n-1; i++){
        for(int j = 0; j< n-i-1; j++){
            if(A[j] > A[j+1]){

                temp = A[j];
                A[j] = A[j+1];//overwrite on A[j]
                A[j+1] = temp;

            }
        }
    }

    //printing the sorted array
    for(int i = 0; i < n; i++){
        printf("%d ", A[i]);
    }
    printf("\n");
}