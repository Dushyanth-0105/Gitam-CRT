/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int main()
{
    char name[20];
    char sname[20];
    printf("enter your name");
    scanf("%s", name);
    printf("enter your surname");
    scanf("%s", sname);
    printf("Your name is %s\n");
    printf("your surname is %s\n",sname);
    printf("Your name is %s\t", name);
    printf("Your surname is %s\n",sname);
    printf("your name is %s\b",name);
    printf("your surname is %s\n",sname);
    printf("Your name is %s\r",name);
    printf("your surname is %s\n",sname);
return 0;
}