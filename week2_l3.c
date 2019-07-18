#include <stdio.h>

int main(){
    char first[2];
    char second[2];
    char result[3];
    scanf("%s", first);
    scanf("%s", second);
    
    int intfirst = first[0] - '0';//ex) character '1' to int 1
    int intsecond = second[0] - '0';
    int sum = intfirst + intsecond;

    if(sum >= 10){
        result[0] = sum/10 + '0';//ex) int 1 to charater '1'
        result[1] = sum%10 + '0';
        result[2] = '\0';//input NULL at the end of string
    }
    else{
        result[0] = sum + '0';
        result[1] = '\0';//input NULL at the end of string
    }

    printf("%s\n", result);
}
