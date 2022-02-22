#include<stdio.h>
#include<stdlib.h>
struct student
{
	char name[20];
	struct student *ptr;
};
struct student1
{
	char name[20];
};
int main()
{
	struct student *s1;
	struct student1 s2;
	int count=0;
	s1 = (struct student*)malloc(sizeof(struct student));
	scanf("%s",s1->name);
	printf("name :%s\n",s1->name);
	scanf("%s",s2.name);
	printf("name :%s\n",s2.name);
for(int i=0;s1->name[i]!=0;i++)
{
    
    if(s1->name[i]== s2.name[i])
    count=1;
    else
    count=0;
}
if(count==1)
printf("Strings are same");
else
printf("Not same");
}

