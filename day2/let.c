#include<stdio.h>

#include<string.h>
int main()
{
char upperchar[50]="", lowerchar[50]="";
int i;
printf("ENTER CHARACTER");
scanf("%s",&upperchar);
while(upperchar[i]!='\0')
{
lowerchar[i]=upperchar[i]+32;
i++;
}
printf("lower case= %s", lowerchar);

return 0;
}

