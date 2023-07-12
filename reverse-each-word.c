#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include "/home/sahil/User_Header_File/stackchar.h"


int main()
{
         char s1[50];
         int i;
         printf("Enter String to reverse each word :: ");
         gets(s1);
         
         init();
         for(i=0;s1[i]!='\0';i++)
         {
                if(s1[i]==' ')
                {
                       disp();
                       printf(" ");
                       init();
                
                }
                else
                {
                       push(s1[i]);
                       
                }
         }
         disp();
}
