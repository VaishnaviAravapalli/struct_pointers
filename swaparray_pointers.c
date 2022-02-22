#include <stdio.h>
#define N 5
void swap(int *x, int *y);
int main()
{
  int arr1[10],arr2[10],i;
int *const p1=arr1;

int *const p2=arr2;
printf("Enter the elements into the array 1: \n");
for(i=0;i<N;i++)
{
    scanf("%d",&arr1[i]);
}
printf("Enter the elements into the array 2: \n");
for(i=0;i<N;i++)
{
    scanf("%d",&arr2[i]);
}
swap(arr1,arr2);

printf("After swapping the arrays1 look like: ");
for(i=0;i<N;i++)
printf(" %d ",arr1[i]);

printf("\nAfter swapping the arrays look like: ");
for(i=0;i<N;i++)
printf("%d ",arr2[i]);
}


void swap(int * x, int * y)
{
      int i, temp;

        for (i = 0; i < N; i++) {
                temp = *(x + i);
                *(x + i) = *(y + i);
                *(y+i) = temp;
        }
        
}

