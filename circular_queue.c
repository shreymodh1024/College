#include<stdio.h>
#define MAX 5
int arr[MAX];
int front = -1, rear = -1;

void enqueue(int value){

    //checking overflow
    if((rear == MAX-1 && front == 0) || (rear+1 == front)){
        printf("queue overflow\n");
        return;
    }


    //checking if front pointer properly set?
    if(front == -1){
        front = 0;
    }
    if(rear == MAX-1){
        rear = 0;
    }
    else{
        rear = rear + 1;
    }
    arr[rear] = value;
    printf("%d inserted in queue\n", arr[rear]);
}

void dequeue(){

    //s1 checking underflow
    if(front == -1){
        printf("queue is empty\n");
        return;
    }

    //s2 delete element
    printf("%d deleted from queue\n", arr[front]);

    //s3 queue empty check
    if(front == rear){
        front = -1; rear = -1;
        return;
    }

    //s4 increment front pointer
    else if (front == MAX -1){
        front = 0;
    }
    else front = front + 1;
}

void display()
{

for(int i=front;i!=rear;i=(i+1)%MAX)
{
printf("%d\t",arr[i]);
}
printf("%d",arr[rear]);
}

int main(){
    enqueue(11);
    enqueue(12);
    enqueue(13);
    enqueue(14);
    enqueue(15);
    enqueue(16);
    dequeue();
    enqueue(16);
    display();
   
}

