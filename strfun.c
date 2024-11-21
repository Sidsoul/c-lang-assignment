#include <stdio.h>
#include <string.h>
int main(){
    const char s1[20]="underground";
    const char s2[6]="under";
    char*s3;
    s3=strstr(s1,s2);
    printf("substring : %s\n",s3);

    char s4[] ="Siddhesh";
    printf("Length of string s4 : %lu\n",strlen(s4));

     char s5[20];
    strcpy(s5,s1);
    printf("After copying s1 to s5 : %s\n",s5);

    strcat(s4,s1);
    printf("After concatenation of s4 and s1 : %s\n",s4);

   

    return 0;
}
