#include<stdio.h>
#include<ctype.h>
#include<string.h>
#define max 50

struct stack 
{
        char a[max];
        int top;
}s;

void init()
{
      s.top=-1;
}

int isempty()
{
          if(s.top==-1)
                   return 1;
          else
                return 0;
}

int isfull()
{
          if(s.top==max-1)
                    return 1;
          else
                   return 0;
}

void push(char c)
{
        if(isfull())
        printf("\n Stack is Full ");
         else
         {
                  s.top++;
                  s.a[s.top]=c;
         }
}

char pop()
{       
          char ch;
          if(isempty())
          printf("\n Stack is Empty   ");
          else
          {
          ch=s.a[s.top];
          s.top--;
          return ch;
          }
}

int pri(char x)
{
            if(x=='(')
              return 0;
            if(x=='+'||x=='-')
              return 1;
               if(x=='/'||x=='*')
              return 2;
                if(x=='$'||x=='^')
              return 3;
              return 0;
}

void reverseString(char* str)
{
    int len = strlen(str);
    int i, j;
    char temp;

    for (i = 0, j = len - 1; i < j; i++, j--)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}


int main()
{
            char exp[50],prefix[50];
            char exp1[50],x;
            int i,j=0;
            
            
            printf("\n Enter The Infix Expression :: ");
              scanf("%s",exp);
            reverseString(exp);
           
           for(i=0;exp[i]!='\0';i++)
            {
                    if(exp[i]=='(')
                                exp[i]=')';
                  else  if(exp[i]==')')
                                    exp[i]='(';            
            }  
            
              init();
       for(i=0;exp[i]!='\0';i++)
              {
                           if(isalnum(exp[i]))
                              prefix[j++]=exp[i];
                           else if(exp[i] == '(')
                           push(exp[i]);
                           else if (exp[i] == ')')
                           {
                                     while((x=pop()) != '(')
                                   prefix[j++]=x;
                           }
                           else 
                           {
                                 while(pri(s.a[s.top]) >= pri(exp[i]))
                                        prefix[j++]=pop();
                                        push(exp[i]);
                           }
                        
              }
              while(!isempty())
            prefix[j++]=pop();
            
            prefix[j]='\0';
              reverseString(prefix);
            printf("\n prefix expression=%s",prefix);
            
}
