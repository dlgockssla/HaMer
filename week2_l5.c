#include <stdio.h>
#include <string.h>

int main(){
    char stack[101];
    int top = 0;
    char str[101];
    scanf("%s", str);

    int len = strlen(str);
    for(int i=0; i<len; i++){ //push str to stack
        stack[top] = str[i];
        top++;
        // it is equal to "str[i] = stack[top++];"
    }
    
    for(int i=0; i<len; i++){
        top--;
        str[i] = stack[top];
        //it is equal to "str[i] = stack[--top];"
    }

    printf("%s\n", str);
}
