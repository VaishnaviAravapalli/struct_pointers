#include <stdio.h>  
int stringcompare(char*,char*);  
enum val{no,yes};
int main()  
{  
  char str1[20];   
  char str2[20]; 
  printf("Enter the first string : ");  
  scanf("%s",str1);  
  printf("\nEnter the second string : ");  
  scanf("%s",str2);  
  int compare=stringcompare(str1,str2); //   
  if(compare==no)  
  printf("strings are equal");  
 else  
 printf("strings are not equal");  
return 0;  
}  

int stringcompare(char *a,char *b)  
{  
   int flag=no;  
    while(*a!='\0' && *b!='\0')  
    {  
        if(*a!=*b)  
        {  
            flag=yes;  
        }  
        a++;  
        b++;  
    }  
      
    if(flag==no)  
    return 0;  
    else  
    return 1;  
} 

