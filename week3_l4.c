#include <stdio.h>

int pascal(int n, int k){
    if(k == 1 || k == n)
        return 1;

    return pascal(n-1, k-1) + pascal(n-1, k);
}

int main(){
    int n, k;
    scanf("%d %d", &n, &k);
    printf("%d\n", pascal(n, k));
}