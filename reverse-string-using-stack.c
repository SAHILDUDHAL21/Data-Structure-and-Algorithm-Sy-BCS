#include<stdio.h>
#include<string.h>
#define max 30

struct stack
{
        char s2[max];
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

void push(char c)
{
        if(isfull())
        printf("Stack is full \t Don't Push::");
      else
        {
              s1.top++;
           s1.s2[s1.top]=c;
         
        }
}

void disp()
{
      int i; 
      printf("Reverse String = ");
      for(i=s1.top;i>=0;i--)
      {
                printf("%c",s1.s2[i]);
      }
}

int main()
{
      int i;
      char s[30];
      init();
   
   printf("\n Enter String ::  ");
   scanf("%s",s);
    
    for(i=0;s[i]!='\0';i++)
     {
            push(s[i]);
     }   
     
     disp();
}







