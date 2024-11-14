#include <stdio.h>
int main(){
    int a = 0;
    for(int i = 1; i <= 7; ++i, a=0){
        for(int j = 1; j <= 7-i; ++j){
            printf(" ");
        }
        while(a!=2*i-1){
            printf("*");
            ++a;
        }
        printf("\n");
    }
    return 0;
}