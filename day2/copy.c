#include<stdio.h>
int main()
{
FILE*fptr1;
FILE*fptr2;
fptr1=fopen("file.txt","r");//open file to read

if(fptr1==NULL)
{printf("error in opening file");}

fptr2=fopen("file2.txt","a");//open file to write
if(fptr2==NULL)
{printf("error in opening file");}

char ch;
while((ch=fgetc(fptr1))!=EOF)
{
fputc(ch,fptr2);
}

char c;
fptr2=fopen("file2.txt","r");//open file to read
if(fptr2!=NULL)//checking if file is opened successfully
{
  while((c=fgetc(fptr2))!=EOF)//copy content to ftpr2
  putchar(c);
  fclose(fptr2);
}
else
{
printf("Error opening the file");
  return 1;
}
fclose(fptr1);
}
