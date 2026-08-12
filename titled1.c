#include<stdio.h>
int main(){
    printf("what size do you want to keep: ");
    int size;
    scanf("%d", &size);
    int arr[size];
    printf("start writing array: ");
    for(int i =0; i<size; i++){
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i<size; i++){
        printf("%d\n", arr[i]);
    }
}