#include<stdio.h>
#define N 5
//int N = 5;
int q[N];
int f = 0, r = 0;

void insert(int y){
    if(r >= N){
        printf("queue overflow\n");
        return;
    }
    q[r] = y;
    r++;
    

    // if(f == 0){
    //     f = 1;
    // } // what is the requirement of this

    printf("%d inserted\n", y);
}

void delete(){
    int y;
    if(q[f] == 0){
        printf("queue underflow\n");
        return;
    }

    y = q[f];

    if(f == r){
        f = 0;
        r = 0;
    }
    else {f++;}
    printf("%d deleted\n", y);
}

int main(){

    insert(10);
    insert(20);
    insert(30);
    insert(40);
    insert(50);
    insert(60);//queue overflow
    delete();
    delete();
}