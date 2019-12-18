/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int main()
{
    char name[20];
    printf("enter your name");
    scanf("%9c", &name);
    printf("Your name is %s",name);
    return 0;
}