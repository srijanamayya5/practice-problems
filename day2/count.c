#include<stdio.h>

int main()
{
  FILE*fptr;
fptr=fopen("file.txt","r");//open file to read

if(fptr==NULL)//check if there is error in opening the file
printf("error in opening the file");

char ch;
int no0fchar,no0fspace,no0fnew=0;
while((ch=fgetc(fptr))!=EOF)//assign each character in file to ch
{
no0fchar++;
if(ch==' ')
no0fspace++;
else if(ch=='\n')
no0fnew++;
}
fclose(fptr);
printf("number of char:%d\n",no0fchar);
printf("number of space:%d\n",no0fspace);
printf("number of new line:%d\n",no0fnew);
}
