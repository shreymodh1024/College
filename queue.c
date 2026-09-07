#include <stdio.h>
#define MAX 5
int arr[MAX];
int rear = -1, front = -1;

void enqueue(int value){
    if(rear == MAX-1){
        printf("queue overflow\n");
        return;
    }
    if(front == -1){
        front = 0;
    }
    rear++;
    printf("rear = %d xx ",rear);
    arr[rear] = value;
    printf("%d inserted in queue\n",arr[rear]);
}

void dequeue(){
    //checking underflow
    if(front == -1 || front > rear){
        printf("queue underflow\n");
        return;
    }
    printf("%d deleted from queue\n", arr[front]);
    front++;
}

void display(){
    //checking underflow
    if(front == -1 ){
        printf("queue is empty!\n");
        return;
    }
    printf("queue elements are: ");
    for(int i = front; i<= rear; i++){
        printf("%d ",arr[i]);
    }
}

int main(){
    // enqueue(32);
    // enqueue(33);
    // enqueue(34);
    // dequeue();
    // dequeue();
    // dequeue();
    display();
}
