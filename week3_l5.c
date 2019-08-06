#include <stdio.h>
#include <string.h>

int IsPalin(char* frag){
    int len = strlen(frag);
    
    int i=0;
    while(i < (len-1)-i){
        if(frag[i] != frag[(len-1) - i]){
            return 0;//printf("no\n");
        }
        i++;
    }
    return 1;//printf("yes\n");
}// 이 함수는 week2_l4.c 에 나온 팰린드롬 판단하는 코드를 함수형식으로 바꿔준것입니다.
// input으로 들어온 배열(char*)이 팰린드롬이 맞다면 1(True)
// 아니면 0(False)를 반환합니다.

int main(){
    char str[101];
    scanf("%s", str);

    int len = strlen(str);
    int i=0;
    for(i=0; i<len; i++){// 맨앞글자를 하나씩 지워가면서 팰린드롬 검사
        if(IsPalin(str + i)){
            break;
        }//만약 팰린드롬이 나왔다면, 우리의 목표는 제일 간단한 팰린드롬을 만드는 것이니 바로 break로 for문 탈출
    }

    for(int j=0; j<i; j++){
        str[len + i - j - 1] = str[j];
    }//팰린드롬이 아닌 문자들을 문자열 뒤에 뒤집어서 붙여줌
    str[len + i] = '\0';// 마지막에 널문자 삽입

    printf("%s\n", str);
}
