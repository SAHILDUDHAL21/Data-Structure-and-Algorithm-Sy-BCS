#include<stdio.h>
#define max 7

struct stack
{
        int a[30];
        int top;
}s1;

void init()
{
      s1.top=-1;
}

int isempty()
{
       if(s1.top==-1)
              return 1;
        else
            return 0;
}

int isfull()
{
      if(s1.top==max-1)
            return 1;
      else
           return 0;
}

void push(int num)
{
        if(isfull())
        printf("Stack is full \t Don't Push::");
      else
        {
              s1.top++;
              s1.a[s1.top]=num;
              printf("Push Successfully    ::   ");
        }
}

void pop()
{
      int val;
      if (isempty())
           printf("Stack is Empty  \t can't pop");
      else
      {
              val=s1.a[s1.top];
              s1.top--;
              printf("\n Poped Value = %d",val);
      }
}

void disp()
{
      int i;
      for(i=s1.top;i>=0;i--)
      {
                printf("%d \n",s1.a[i]);
      }
}

int main()
{
      int ch,num;
      init();
      
      do
      {
              printf("\n 1 : PUSH (Insert Value). \n 2 : POP (Delete Value). \n 3 : DISPLAY\n");
              printf("\n Enter choice::");
              scanf("%d",&ch);
              
              switch(ch)
              {
                        case 1 : printf("Enter Number to Insert");
                                   scanf("%d",&num);
                                   push(num);
                                   break;
                       case 2 : pop();
                                        break;
                       case 3 : disp();
                                        break;
                          default : printf("Invalid Choice.......");
              }
      }while(ch<4);
}

