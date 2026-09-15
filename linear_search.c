#include<stdio.h>
int main(){
    int arr[] = {29,87,89,21,23,17,11,10,14};
    int n = 9, pos = -1, search = 11;

    for(int i = 0; i< n; i++){
        if(arr[i] == search){
            pos = i;
            break;
        }
    }
    if(pos == -1){
        printf("searching element not found!\n");
    }
    else printf("element is at pos: %d\n", pos);
}
