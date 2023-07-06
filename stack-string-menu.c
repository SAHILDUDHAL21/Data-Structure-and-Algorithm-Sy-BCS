#include<stdio.h>
#include<string.h>
#define max 7

struct stack
{
        char s2[30][30];
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

void push(char name[30])
{
        if(isfull())
        printf("Stack is full \t Don't Push::");
      else
        {
              s1.top++;
             strcpy(s1.s2[s1.top],name);
              printf("Push Successfully    ::   ");
        }
}

void pop()
{
      char val[30];
      if (isempty())
           printf("Stack is Empty  \t can't pop");
      else
      {
              strcpy(val,s1.s2[s1.top]);
              s1.top--;
              printf("\n Poped Value = %s",val);
      }
}

void disp()
{
      int i;
      for(i=s1.top;i>=0;i--)
      {
                printf("%s \n",s1.s2[i]);
      }
}

int main()
{
      int ch;
      char name[30];
      init();
      
      do
      {
              printf("\n 1 : PUSH (Insert Value). \n 2 : POP (Delete Value). \n 3 : DISPLAY\n");
              printf("\n Enter choice::");
              scanf("%d",&ch);
              
              switch(ch)
              {
                        case 1 : printf("Enter name to Insert");
                                   scanf("%s",name);
                                   push(name);
                                   break;
                       case 2 : pop();
                                        break;
                       case 3 : disp();
                                        break;
                          default : printf("Invalid Choice.......");
              }
      }while(ch<4);
}

