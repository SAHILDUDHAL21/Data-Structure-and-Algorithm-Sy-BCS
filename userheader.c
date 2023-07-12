#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include "/home/sahil/User_Header_File/stackchar.h"

#define max 50



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
