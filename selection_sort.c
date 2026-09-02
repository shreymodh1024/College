#include<stdio.h>
int main(){

    int a[6] = {7,4,9,2,6,1};
    int n = 6;
    int temp, min;

    for(int i = 0; i< n-1; i++){
        min = i;
        for(int j = i+1; j<n; j++){
            if(a[j] < a[min]){min = j;}
        }
        if(min != i){
            temp = a[i];
            a[i]= a[min];
            a[min] = temp;
        }
    }

    //printing the sorted array
    for(int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
    printf("\n");
}