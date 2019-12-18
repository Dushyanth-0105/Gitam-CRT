/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#define begin main 
int begin()
{
    int n1,n2;
    printf("Enter 2 numbers");
    scanf("%d %d",&n1,&n2);
    printf("Difference =%d",n1+~n2+1);
}