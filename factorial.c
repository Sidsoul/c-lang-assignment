#include <stdio.h>
int main(){
    int a;
    printf("Enter a number : ");
    scanf("%d",&a);
    int i = 1;
    for(int j = 1; j <= a; j++){
        i*=j;
    }
    printf("The factorial of %d is : %d ",a,i);

    return 0;
}
