#include<stdio.h>
#define MAX 5
int arr[MAX], top = -1;

void push(int x){
    //checking overflow
    if(top == MAX-1){
        printf("stack overflow\n");
    }

    else{
        top++;
        arr[top] = x;
        printf("%d is inserted\n", arr[top]);
    }
}

void pop(){
    //checking underflow
    if(top == -1){
        printf("stack underflow\n");
    }

    else{
        int a = arr[top];
        top--;
        printf("%d is deleted\n", a);
    }
}

void peep(int pos){
    //checking invalid index input
    int index = top - pos + 1;
    if(index < 0 || index > top){
        printf("invalid position! Cannot peep at pos %d\n", pos);
    }

    //printing position
    else{
        printf("value at pos %d is %d\n", pos, arr[index]);
    }

}

void change(int pos, int value){
    int index = top - pos + 1;
    if(index < 0 || index > top){
        printf("invalid position! Cannot peep at pos %d\n", pos);
    }

    //changing value
    else{
        arr[index] = value;
        printf("at pos %d, value changed to %d\n",pos, arr[index]);
    }
}

int main(){
   
       push(11);
       push(12);
       push(13);
       push(14);
       push(15);
       push(16);
       push(17);
       
       push(20);
       peep(0);
       peep(2);
       change(2, 22);
       peep(2);
    
}
