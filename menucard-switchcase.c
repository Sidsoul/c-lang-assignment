#include <stdio.h>
int main(){
    int a;
    int ans = 1;
    int total = 0;
    while(ans==1){
    printf("Menu :\n");
    printf("No. 1 : Burger - Rs. 50\n");
    printf("No. 2 : Pizza - Rs. 60\n");
    printf("Order number : ");
    scanf("%d",&a);
    int b=0,c=0,x=0,y=0;
    switch(a){
        case 1:
        printf("How much pieces ? : ");
        scanf("%d",&b);
        c = b*50;
        printf("Your burgers order's total amount is Rs. %d\n",c);
        break;
        case 2:
        printf("How much pieces ? : ");
        scanf("%d",&x);
        y = x*60;
        printf("Your pizzas order's total amount is Rs. %d\n",y);
        break;
        default:
        printf("item not available");
        break;
    }
    total += c+y;
    printf("Your total bill is : %d\n",total);
    c = 0;
    y = 0;
    printf("Do you want to add more?....yes(1)/no(0)");
    scanf("%d",&ans);
    if(ans!=1){
        printf("Thank you and pls visit again...");
    }
    }
    return 0;
}
