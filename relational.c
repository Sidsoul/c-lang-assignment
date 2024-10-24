//program of relational operators and if-else
#include <stdio.h>
int main(){
    int a = 20, b = 50;
    int c = 35, d =35;
    if(a<b){
        printf("a is less than b\n");
    }
    else{
        printf("a is greater than b\n");
    }
    if(c<=d){
        printf("c is less than or equal to d\n");
    }
    else{
        printf("c is not equal to d\n");
    }
    if(c!=a){
        printf("c is not equal to a\n");
    }
    else{
        printf("c is equal to a\n");
    }
    return 0;
}
