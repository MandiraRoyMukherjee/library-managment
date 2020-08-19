

Skip to content
Using Gmail with screen readers
libary managment 
Enable desktop notifications for Gmail.
   OK  No thanks
Meet
Start a meeting
Join a meeting
Hangouts

4 of 19
library code

Avik Saha <avik.prince@gmail.com>
Attachments
Sat, 30 May, 00:04
to mandira


Attachments area

#include<stdio.h>
#include<stdlib.h>
struct  addbook
{
char bookname[80],authorname[20],subject[20];
int uid,copy;


};
struct student
{
char studentname[20],deparment[20];
int roll,book;
};
main()
{

struct student s[1000];
struct addbook b[1000];
int n,display,i,c,j,m=0,id,found=0,count,copy1[100];
printf("\n\n\n\n\n");
    printf("\n\t\t\t  **-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**\n");
    printf("\n\t\t\t        =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
    printf("\n\t\t\t        =                 WELCOME                   =");
    printf("\n\t\t\t        =                   TO                      =");
    printf("\n\t\t\t        =                 LIBRARY                   =");
    printf("\n\t\t\t        =               MANAGEMENT                  =");
    printf("\n\t\t\t        =                 SYSTEM                    =");
    printf("\n\t\t\t        =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
    printf("\n\t\t\t  **-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**\n");
jump:
printf("\n\n\n\t\t\t Enter your password continue.....");
scanf("%d",&n);
if(n>999)
{
printf("the password is right\n");
}
else
{
printf("the password is wrong\n");
goto jump;
}
system("cls");
while(1)
{
printf("\n \t\t\tenter \n\t\t\t1. add books \n\t\t\t2. issue books \n\t\t\t3.search books \n\t\t\t4.view books list\n\t\t\t5.Edit book record  \n\t\t\t6.close application");
printf("\nenter your choice\n");
scanf("%d",&display);
system("cls");
switch(display)
{
case 1: printf("\nadd book \n");
printf("\nplease enter the number of books you want to add\n");
scanf("%d",&c);
for(i=0;i<c;i++)
{
printf("\nenter the book name\n");
scanf("%s",b[i].bookname);
printf("\nenter the author of the book\n");
scanf("%s",b[i].authorname);
printf("\nenter the subject of the book\n");
scanf("%s",b[i].subject);
printf("\nenter the unique id\n");
scanf("%d",&b[i].uid);
printf("\nenter the copy \n");
scanf("%d",&b[i].copy);
}
system("cls");
break;
case 2: printf("\n issue books");
printf("\nenter the uid of the book you want\n");
scanf("%d", &id);

for(j=0;j<i;j++)
{
    found=0;
if(b[j].uid==id)
{
found=1;
printf("\nthe book is found\n");
printf("\nenter the name of the student\n");
scanf("%s",s[m].studentname);
printf("enter the roll  of the student\n");
scanf("%d", &s[m].roll);
printf("\nthe book issue successfully\n");
(b[j].copy--);
break;
}
}
if(found==0)
{
printf("\n the book is not available\n");
}
break;
case 3: printf("\n search books");
printf("\n enter the uid of the book you want\n");
scanf("%d", &id);
for(j=0;j<i;j++)
{
    found=0;
if(b[j].uid==id)
{
found=1;
printf("\nthe book is found");
printf("\nthe number of copies of book available is=%d\n",b[j].copy);
//count=b[i].copy;
//count--;
break;
}
}
if(found==0)
{
printf("\n the book is not available\n");
}
system("cls");
break;
case 4: printf("\n view books list\n");
for(i=0;i<c;i++)
    {
//printf( "\n \t\t\tenter the book name for search\n");
printf("\n\n \t\t\tbookname = %s",b[i].bookname);
printf("\n \t\t\tauthorname= %s",b[i].authorname);
printf("\n \t\t\tsubjectname %s",b[i].subject);
printf("\n \t\t\tuid= %d",b[i].uid);
//printf("\n copy= %d",b[i].copy);
printf("\n \t\t\tthe number of copy now= %d",b[i].copy);
}
//system("cls");
break;
case 5: printf("\nEdit book record\n");
printf("enter the uid of the book you want to edit\n");
scanf("%d",&id);
for(j=0;j<i;j++)
{
    found=0;
if(b[j].uid==id)
{
found=1;
printf("\nthe book is found\n");
printf("\nenter the new  name of the book\n");
scanf("%s",b[j].bookname);
printf("enter the new name of the author\n");
scanf("%s",b[j].authorname);
printf("enter the new subject\n");
scanf("%s",b[j].subject);
break;
}
}
if(found==0)
{
printf("\n the book is not available\n");
}
system("cls");
break;
case 6:
    printf("\n\t\t\tCredits");
    printf("\n\t\t\tCode and structure by Mandira Roy Mukherjee");
    printf("\n\t\t\tDesign by Avik Saha");
    printf("\n\t\t\tThank you");
    exit(0);
    break;
default: printf("\n wrong choice");
break;
}
}
}
lib new code.txt
Displaying lib new code.txt.
