#include<stdio.h> 
 #include<string.h> 
 struct student 
 { 
   int rno; 
   char sname[20]; 
   int per; 
 }s1[20],temp; 
 int main() 
 { 
   int i,n,pass; 
   printf("enter limit:-"); 
   scanf("%d",&n); 
   for(i=0; i<n; i++) 
   { 
     printf("enter rno sname per:-"); 
     scanf("%d%s%d",&s1[i].rno,s1[i].sname,&s1[i].per); 
   } 
   for(pass=1; pass<n; pass++) 
   { 
      for(i=0; i<n-pass; i++) 
      { 
          if(s1[i].per<s1[i+1].per) 
          { 
            temp=s1[i]; 
            s1[i]=s1[i+1]; 
            s1[i+1]=temp; 
          } 
      } 
   } 
   printf("\n soarted structure= "); 
    for(i=0; i<n; i++) 
    { 
       printf("\n roll no=%d",s1[i].rno); 
       printf("\n student name=%s",s1[i].sname); 
       printf("\n percentage=%d",s1[i].per); 
    }  
   }
