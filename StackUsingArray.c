// AIM : WRITE A PROGRAM TO IMPLEMENT STACK USING ARRAY.

#include <stdio.h>

int stack[100];
int top = -1;

void push();
int pop();
int Stacktop();
void display();

int main(){
     int t , p;
    printf("############# MENU ################\n");
    int choice;
    printf("1.Push\n2.Pop\n3.Top\n4.Display\n5.Exit\n");
    do{
        printf("Enter Your Choice : ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1: 
            push();
            break;
        case 2:
           
            t = pop();
            printf("The deleted element is: %d\n", t);
            break;
        case 3:
            p = Stacktop();
            printf("The top element of the stack is: %d\n", p);
            break;
        case 4: 
            display();
            break;
        case 5:
            printf("Program Exited\n");
        
        default:
            printf("Enter the correct choice !!\n");
            break;
        }
    }
    while(choice != 5);
}

void push(){
    int element;
    printf("Enter the element :");
    scanf("%d", &element);
    top++;
    stack[top] = element;
}

int pop(){
    if(top == -1){
        printf("Stack Underflow");
        return -1;
    }
    else{
        int a = stack[top];
        top--;
        return a;
    }
}

int Stacktop(){
    if(top == -1){
        printf("Stack is empty\n");
        return -1;
    }
    else{
        return stack[top];
    }
}

void display(){
    if(top == -1){
        printf("Stack is empty.\n");
        return;
    }
    for(int i = top ; i>= 0; i--){
        printf("%d ", stack[i]);
    }
    return;

}


