#include<stdio.h>
int main()
{
	int phy,chem,math,sci,dsa,marks=0;
	printf("Enter a marks of all subject:");
	scanf("%d %d %d %d %d",&phy,&chem,&math,&sci,&dsa);
	marks=phy+chem+math+sci+dsa;
	 if(marks > 90 && marks <= 100)  
    {  
        printf("Congrats ! you scored grade A ...");   
    }  
    else if (marks > 80 && marks <= 90)   
    {  
        printf("You scored grade B + ...");  
    }  
    else if (marks > 70 && marks <= 80)   
    {  
        printf("You scored grade B ...");  
    }  
    else if (marks > 60 && marks <= 70)   
    {  
        printf("You scored grade C ...");   
    }  
    else   
    {  
        printf("Sorry you are fail ...");   
    }  
	
}
