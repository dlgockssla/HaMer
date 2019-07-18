#include <stdio.h>
#include <string.h>

int main(){
    char str[101];
    scanf("%s", str);
    
    int len = strlen(str);
    
    int i=0;
    while(i < (len-1)-i){
        if(str[i] != str[(len-1) - i]){
            printf("no\n");
            return 0;//terminate the program
        }
        i++;
    }
    printf("yes\n");
}
