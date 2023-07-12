#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>

#include "/home/sahil/User_Header_File/stackint.h"

int main()
{
      int i,p,q,r,s,val1,val2,result,re;
      char a[50],ch;
      
      init();
      
      printf("\n Enter Postfix Expresion ::");
      gets(a);
       
       printf("\n Enter values of \n");
        printf("\t P\t="); scanf("%d",&p);
        printf("\t Q\t="); scanf("%d",&q);
       printf("\t R\t="); scanf("%d",&r);
      printf("\t S\t="); scanf("%d",&s);
      
      for(i=0;a[i]!='\0';i++)
        {
               if(isalpha(a[i]))
               {
                        switch(a[i])
                        {
                                case 'P' : push(p);
                                                    break;
                                 case 'Q' : push(q);
                                                    break;
                                case 'R' : push(r);
                                                    break;
                                  case 'S' : push(s);
                                                    break;
                        }
               
               }
               else
               {
                        val1=pop();
                        val2=pop();
                        switch(a[i])
                              {
                                        case '+' : result=val2 + val1; break;
                                        case '-' : result=val2 - val1; break;
                                        case '*' : result=val2 * val1; break;
                                        case '/' : result=val2 / val1; break;
                                        case '%' : result=val2 % val1; break;
                                        case '^' : result=val2 ^ val1; break;
                                       
                                        
                              }          push(result);
                        
               }
        }
       
        printf(" \n Result =%d ",pop());
}
