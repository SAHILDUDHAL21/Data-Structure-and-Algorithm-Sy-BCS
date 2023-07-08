#include<stdio.h> 
 #include<string.h> 
 #define max 30
  
 struct stack 
 { 
         char a[max]; 
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
            s1.a[s1.top]=c; 
  
         } 
}

char pop()
{
    char ch;
    if(isempty())
    printf("\n Stack is empty......");
    else
    {
        ch=s1.a[s1.top];
        s1.top--;
        return ch;
    }
}         
 
 int main() 
 { 
          char s[30];
    int i;
    printf("Enter string :");
    gets(s);
    init();
    for(i=0;s[i]!='\0';i++)
    {
        push(s[i]);
    }
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]!=pop())
        break;
    }
    if(isempty())
    printf("\n String is Palindrome.........\n");
    else
    printf("\n String is  not Palindrome......\n");
 }
