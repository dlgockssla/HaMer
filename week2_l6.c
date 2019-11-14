#include <stdio.h>
#include <string.h>

int main(){
	char first[101];
	char second[101];
	char result[102]; // 왜 101 인지도 생각해보세요. 너무 당연할 수도 있습니다.
	char carry[101] = {0,}; // 올림이 발생했을 때 저장해주는 배열
	printf("input first value : ");	scanf("%s", first);
	printf("input second value : "); scanf("%s", second);

	//일단 덧셈을 쉽게하기 위해 배열을 뒤집음
	int lenf = strlen(first);
	int lens = strlen(second);
	char tmp;
	for(int i=0; i<lenf/2; i++){//first배열 뒤집기
		tmp = first[i];
		first[i] = first[(lenf-1) - i];
		first[(lenf-1) - i] = tmp;
	}
	for(int i=0; i<lens/2; i++){//second배열 뒤집기
		tmp = second[i];
		second[i] = second[(lens-1) - i];
		second[(lens-1) - i] = tmp;
	}
	//-> 이처럼 똑같은 과정이 중복될 때 함수를 짜서 깔끔하게 해결할 수 있다
	//함수는 안배웠기 때문에 생략
    printf("reverse\n%s\n%s\n", first, second);
	//덧셈 시작
	int j=0;
	while(j<lenf && j<lens){
		int intf = first[j] - '0';
		int ints = second[j] - '0';
		int sum = intf + ints + carry[j];

		if(sum >= 10){
			carry[j+1] = 1;
			result[j] = sum%10 + '0';
		}else{
			carry[j+1] = 0;
			result[j] = sum + '0';
		}
		j++;
	}
	//while문이 끝난 후 j는 lens 와 lenf 중 작은 값일 것이다.
	//j값을 이어쓰면서 result 배열을 완성한다.
	if(lenf > lens){
		if(carry[j] == 1){
			first[j]+=1;
		}
		while(j < lenf){
			result[j] = first[j];
			j++;
		}
	}
	else if(lenf < lens){
		if(carry[j] == 1){
			second[j]+=1;
		}
		while(j < lenf){
			result[j] = second[j];
			j++;
		}
	}
	else{ // 두 값이 같은 경우
		if(carry[j] == 1){
			result[j] = '1';
			j++;
		}
	}
	//위의 과정처럼 result[j]에 값을 넣어줄 때 마다 j++을 해주면
	//마지막의 j값은 result의 길이가 됩니다.

	//result에 널값 넣기
	result[j] = '\0';

	//마지막으로 result도 뒤집어 줍니다.
	for(int i=0; i<j/2; i++){//result배열 뒤집기
		tmp = result[i];
		result[i] = result[(j-1) - i];
		result[(j-1) - i] = tmp;
	}

	printf("sum : %s\n", result);
}
