#include<stdio.h>
int main()
{
    int a;
    printf("enter percentage:");
    scanf("%d",&a);
    if(a<=40)
    {
        printf("Grade F\n");
    }
    if(a>=40 & a<=54)
    {
        printf("Grade D\n");
    }
        if(a>=55 & a<=69)
        {
            printf("Grade C\n");
        }
        if(a>=70 & a<=84)
        {
            printf("Grade B\n");
        }
        if(a>=85 & a<=100)
        {
           printf("Grade A\n"); 
        }
        return 0;
}
