#include<stdio.h>
#include<string.h>
#define MAX 100
struct stack
{
   char a[MAX];
   int top;
}s1;
void init()
{
  s1.top=-1;
}
int isfull()
{
   if(s1.top==MAX-1)
   return 1;
   else
     return 0;
}
void push(char c)
{
   if(isfull())
   {
      printf("stack is full don't push..");
   }
   else
   {
      s1.top++;
      s1.a[s1.top]=c;
      
   }

}
int check()
{
  int i;
char s5[100];
  for(i=s1.top; i>=0; i--)
  {
     s5[i]=s1.a[i];
  }s5[i]='\0';
   if(strcmp(s1.a,s5)==0)
         return 1;
        else
        return 0;
}
int main()
{
   char s[100];
   int i;
   printf("enter string:-");
   scanf("%s",s);
   init();
   for(i=0; s[i]!='\0'; i++)
   {
      push(s[i]);
   }
   if(check())
    printf("string is palindrome");
   else
    printf("string is not palindrome");
  
}
