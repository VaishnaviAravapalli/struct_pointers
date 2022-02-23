#include<stdio.h>
#define area(length,width) length*width

struct struct1 
{
    unsigned int len;
    unsigned int wid;
    unsigned int area;
};

struct struct2
{
    unsigned int len;
    unsigned int wid;
    unsigned int area;
};

int swap(struct struct1 a,struct struct2 b)
{
    int temp;
    temp=a.area;
    a.area=b.area;
    b.area=temp;
    printf("After swappin the values :\n");
    printf("a: %d\nb: %d\n",a.area,b.area);
}

int main()
{
    struct struct1 a;
    struct struct2 b;
    int (*p)(struct struct1,struct struct2);
    printf("Enter length and width: ");
    scanf("%d %d",&a.len,&a.wid);
    printf("Enter length and width : ");
    scanf("%d %d",&b.len,&b.wid);
    a.area=area(a.len,a.wid);
    b.area=area(b.len,b.wid);
    printf("Before swapping the values :\n");
    printf("a: %d\nb: %d\n",a.area,b.area);
    p=swap;
    p(a,b);
    return 0;
}
