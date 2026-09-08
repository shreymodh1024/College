#include<stdio.h>
int main(){//bubble sort
    int arr[6] = {7,4,9,2,6,1};

    //step-1: repeat step2 for i = 0 to i = n-2 times
    for(int i = 0; i< 5; i++){
        //step-2: repeat step-3 for j = 0 to j = n-i-1 times
        for(int j = 0; j<6-i-1; j++){
            /*step-3: if this*/
            if(arr[j]> arr[j+1]){
                //then swap
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
        //step-4: exit
    }

    //printing array
    printf("modified array is: ");
    for(int i = 0; i<6; i++){
        printf("%d ", arr[i]);
    }
}
