#include <stdio.h>

int main(){
    char str[10];
    char str2[10] = "hello";

    scanf("%[^\n]", str);//정규표현식으로 받기
    printf("%s\n", str);

    gets(str);// gets 함수로 받기
    printf("%s\n", str);
    printf("%s\n", str2);
}
