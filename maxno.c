#include <stdio.h>

int main()
{
    int a,b,c;
    printf("Enter 1st number : ");
    scanf("%d",&a);
    printf("Enter 2nd number : ");
    scanf("%d",&b);
    printf("Enter 3rd number : ");
    scanf("%d",&c);
    if((a>b)&&(a>c)){
        printf("The largest among three numbers is : %d ",a);
    }
    else if((b>a)&&(b>c)){
        printf("The largest among three numbers is : %d ",b);
    }
    else{
        printf("The largest among three numbers is : %d ",c);
    }
    

    return 0;
}