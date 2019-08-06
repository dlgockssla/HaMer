#include <stdio.h>

int fibo(int n){
    if(n == 1 || n == 2){
        return 1;
    }

    int num1 = 1, num2 = 1;
    int result;
    for(int i=0; i<n-2; i++){
        result = num1 + num2;
        num1 = num2;
        num2 = result;
    }
    return result;
}

int main(){
    int n;
    scanf("%d", &n);
    printf("%d\n", fibo(n));
}