#include <stdio.h>
int main(){
    int a;
    printf("Menu :");
    printf("No. 1 : Burger - Rs. 500 ");
    printf("No. 2 : Pizza - Rs. 600 ");
    printf("Order number : ");
    scanf("%d",&a);
    int b,c,x,y;
    switch(a){
        case 1:
        printf("How much pieces ? : ");
        scanf("%d",&b);
        c = b*500;
        printf("Your burgers order's total amount is Rs. %d",c);
        break;
        case 2:
        printf("How much pieces ? : ");
        scanf("%d",&x);
        y = x*600;
        printf("Your pizzas order's total amount is Rs. %d",y);
        break;
        default:
        printf("item not available");
        break;


    }
    return 0;
}
