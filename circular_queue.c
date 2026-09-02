#include<stdio.h>
# define N 6
int Q[N];
int F = 0;
int R = 0;

void insert(int y){//ERROR
    if(R == N) R = 1;
    else R = R + 1;
    printf("r = %d\n", R);
    printf("f = %d\n", F);

    if(F == R){
        printf("Queue overflow\n");
        return;
    }

    Q[R] = y;
    if(F == 0) F = 1;  
    printf("%d is inserted\n", y);
}

void delete(){
    int y;
    if(F == 0){
        printf("underflow\n");
        return;
    }
    y = Q[F];

    if(F == R){
        F = 0;
        R = 0;
        printf("%d deleted from Queue\n", y);
        return;
    }

    if(F == N) F = 1;
    else F = F + 1;

    printf("%d deleted from Queue\n", y);

    
}

int main(){
    insert(10);
    insert(20);
    insert(30);
    insert(40);
    insert(50);
    insert(60);
    // delete();
   
}