#include <stdio.h>
int main(){
    int a;
    printf("Enter your percentage : ");
    scanf("%d",&a);
    if(a<40){
        printf("Failed");
    }
    else if((a>=40)&&(a<60)) {
        printf("Second class");
    }
    else if((a>=60)&&(a<70)){
        printf("First class");
    }
    else{
        printf("Distinction");
    }
    return 0;

        
}
