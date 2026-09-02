#include<stdio.h>
#define N 5

int s[N];
int top = 0;
 
//to insert by function
// void push(int x){
//     if(top >= N){
//         printf("stack overflow\n");
//         return;
//     }
//     top++;
//     s[top] = x;
//     printf("%d inserted\n",x);
// }

//to insert by taking input from user
void push(){
    int x;
    if(top >= N){
        printf("stack overflow\n");
        return;
    }

    printf("Enter value: ");
    scanf("%d", &x);
    top++;
    s[top] = x;
    printf("%d inserted\n",x);
}

//to delete from stack
void pop(){
    int x;
    if(top == 0){
        printf("underflow\n");
        return;
    }
    top--;
    x = s[top+1];//it is the value which is deleted
    printf("%d deleted\n",x);
}

//to see any value of element
void peep(){
    int I;
    printf("enter position I: ");
    scanf("%d", &I);

    //to check for underflow condition
    if(top - I + 1 <= 0){
        printf("stack underflow");
        return;
    }
    printf("element @ position %d = %d\n", I, s[top-I+1]);
    //return s[top - I + 1];can't return in this format

}

//to change a specific value
void change(){
    int I;
    printf("position I: ");
    scanf("%d", &I);

    //to check for underflow
    if(top-I+1 <= 0){
        printf("stack underflow");
        return;
    }

    int x;
    printf("enter new element: ");
    scanf("%d", &x);
    s[top-I+1] = x;
    printf("element changed\n");

    
}

int main(){
  int choice;
  while(1){
    printf("\n...menu...\n");
    printf("1. Push\n");
    printf("2. pop\n");
    printf("3. peep\n");
    printf("4. change\n");
    printf("5. exit\n");
    printf("enter choice: ");
    scanf("%d", &choice);

    switch(choice){
        case 1: push(); break;
        case 2: pop(); break;
        case 3: peep(); break;
        case 4: change(); break;
        case 5: printf("program end\n"); break;
        default: printf("invalid choice\n");
    }
    
  }
    
}