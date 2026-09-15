#include <stdio.h>
int main(){
    int arr[] = {5,4,10,1,6,2};
    int n = 5;
    
    //step1
    for(int i = 1; i<n; i++){
        // s2, set temp and j
        int temp = arr[i], j = i-1;

        //step3
        while(j >= 0 && arr[j] > temp){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
    }

    //print
    for(int i = 0; i< n; i++){
        printf("%d ", arr[i]);
    }
}
