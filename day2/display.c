#include<stdio.h>
#include<stdlib.h>

int main()
{
 FILE*fptr;
char ch;
fptr=fopen("file.txt","a");//open in append mode
fptr=fopen("file.txt","r");
fputs("Adding the data to given file\n",fptr);//adding data
if(fptr!=NULL)//checking if file is opened successfully
{
  while((ch=fgetc(fptr))!=EOF)
  putchar(ch);
  fclose(fptr);
}
else
{
printf("Error opening the file");
  return 1;
}



}
