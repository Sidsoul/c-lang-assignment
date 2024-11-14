#include <stdio.h>
int main(){
    int a;
    int ans = 1;
    while(ans==1){
    printf("Menu :\n");
    printf("No. 1 : Burger - Rs. 500\n ");
    printf("No. 2 : Pizza - Rs. 600\n ");
    printf("Order number : ");
    scanf("%d",&a);
    int b,c,x,y;
    switch(a){
        case 1:
        printf("How much pieces ? : ");
        scanf("%d",&b);
        c = b*500;
        printf("Your burgers order's total amount is Rs. %d\n",c);
        break;
        case 2:
        printf("How much pieces ? : ");
        scanf("%d",&x);
        y = x*600;
        printf("Your pizzas order's total amount is Rs. %d\n",y);
        break;
        default:
        printf("item not available");
        break;
    }
    printf("Do you want to add more?....(1/0)");
    scanf("%d",&ans);


    }
    return 0;
}