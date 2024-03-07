#include<stdio.h>
#include<string.h>
struct student{
	char roll_no[20];
	char name[20];
	int marks;
};
int main()
{
	 struct student s1;  
	 printf("Enter a studet detail:\n");
	 printf("Enter a Roll_No:");
	 scanf("%s",&s1.roll_no);
	 printf("\nEnter a name:");
	 scanf("%s",&s1.name);
	 printf("Enter a marks:");
	 scanf("%d",&s1.marks);
	 printf("Here is the student details:\n");
	 printf("\n Roll_No = %s",s1.roll_no);
	 printf("\n Name= %s",s1.name);
	 printf("\n marks= %d",s1.marks);
	 
}
