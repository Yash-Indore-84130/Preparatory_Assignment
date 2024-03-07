#include<stdio.h>
#include<string.h>
int main()
{
int n,i;
char str[20];
printf("Enter a string:\n");
fgets(str,20,stdin);

n=strlen(str);

for(i=n-1;i>=0;i--)
{
  printf("%c",str[i]);
}
}
