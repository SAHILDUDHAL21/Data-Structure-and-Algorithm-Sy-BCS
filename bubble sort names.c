#include<stdio.h>
#include<string.h>
 int main() 
 { 
                 int i,n,pass; 
                 char s[20][20],t[20];
               printf("Enter Limit :: "); 
               scanf("%d",&n); 
  
               printf("\n Enter n  Names :: "); 
               for(i=0;i<n;i++) 
               scanf("%s",s[i]); 
   
               for(pass=1;pass<n;pass++) 
               { 
                             for(i=0;i<n-pass;i++) 
                             { 
                                             if(strcmp(s[i],s[i+1])>0) 
                                             { 
                                                     strcpy(t,s[i]); 
                                                     strcpy(s[i],s[i+1]); 
                                                     strcpy(s[i+1],t); 
                                             } 
                             } 
               } 
               printf("\n Names in Sorted Order :: \n"); 
               for(i=0;i<n;i++) 
               printf("%s \t",s[i]); 
 }