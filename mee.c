#include<stdio.h>
#include<conio.h>

int main()
{
    int a,b,c;
    printf("enter the number of a\n");
    scanf("%d",&a);

    
    printf("enter the number of b\n");
    scanf("%d",&b);
    
    printf("enter the number of c\n");
    scanf("%d",&c);
    
    if(a>b && a>c)
    {
        printf("a is maximum number");
    }
    else if(b>a && b>c)
    {
       
        printf("b is maximum number"); 
    }
    else{
        printf("c is maximum number");
    }
    return 0;
}