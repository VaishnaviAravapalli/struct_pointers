#include <stdio.h>
#define N 5
void search (int *x,int y);
void main()
{
    int ar[10],i,s;
int *const p =ar;
    printf("Enter the array elements");
    for(i=0;i<N;i++)
    scanf("%d",&ar[i]);
    printf("Enter the element to be searched");
    scanf("%d",&s);
    search(ar,s);
    
}
void search(int *x,int y)
{
    int count;
    for(int i=0;i<N;i++)
    {
     if(y==x[i])
     {
     count = 1;
    }
    }
    
    count==1? printf("%d is found",y):printf("%d is not found",y);
}
