#include<stdio.h>
int main(){
    int n = 6;
    int arr[] = {7,4,9,2,6,1};

    for(int i = 0; i< n-1; i++){
        int min = i;
        for(int j = i+1; j< n; j++){
            if(arr[j]< arr[min]){
                min = j;
            }
        }
        //swapping
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }

    //printing array
    printf("modified array is: ");
    for(int i = 0; i<6; i++){
        printf("%d ", arr[i]);
    } printf("\n");
}
