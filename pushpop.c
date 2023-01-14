#include<stdio.h>
#include<stdlib.h>
#define SIZE 4
int stack[5],top=-1;

int push();
int pop();
int show();
//int exit();
int main()
{
    int choice;
    printf("1.push\n");
    printf("2.pop\n");
    printf("3.show\n");
    printf("4.exit");
    while(1)
    {
        printf("\n Enter the choice");
        scanf("%d",&choice);
        switch (choice)
        {
            case 1: push();
            break;
             case 2: pop();
            break;
             case 3: show();
            break;
             case 4: exit(0);
            break;
            default: printf("invailed option");
        }
    }
}
       int push()
       {
        int item;
        if(top==5-1)
        {
            printf("stack is full");

        } 
        else
        {
            printf("push element in stsck");
            scanf("%d",&item);
            top=top+1;
            stack[top]=item;
        }
        }
           int pop()
           {
            if(top==-1)
            {
                printf("stack is empty");
            }
            else{
                printf("popped%d",stack[top]);
                top=top-1;
            }
           }      
           int show()
           {
            int i;
            if(top==-1)
            {
                printf("stack element\n");
               }
                else{
                    printf("element present in stack \n");
                for(i=top;i>=0;i--)
                
                    printf("%d\n",stack[i]);
                }
        
            

            }
           

