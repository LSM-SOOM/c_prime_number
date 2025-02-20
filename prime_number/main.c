#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main(void) {
	int column = 0;
	int inputValue; // 입력 받은 수
	int stepValue; // 단계별 검증할 수 
	int incValue; // 프라임넘버를 확인하기 위한 나눔수

	// 2이상의 정수를 입력 받는다.
	printf("2이상의 정수를 입력 : ");
	scanf("%d", &inputValue);
	// 2부터 1씩 증가하면서 입력 받은 수까지 증가 후 종료하는 루프
		for (stepValue = 2; stepValue <= inputValue; stepValue++) {
		// 루프 안에서는
	// 증가된 수를 1을 제외한 자신의 수까지 1씩 증가하면서 나누어보고 나머지가 0이상이면 계속 반복. 0이면 pn가 아님
		for (incValue = 2; incValue < stepValue; incValue++) {
			if (stepValue % incValue == 0) {
				break; // if에 의해 빠지만 incv가 stepv와 같을리 없음
			} // incv가 8이 된채로 빠져나옴. 결과적으로 같은 수가 됨

		}
		//최종까지 나머지가 0으로 떨어지지 않은 수는 pn으로 판정하여 화면에 표시한다
		if (incValue == stepValue) {
			printf("%5d", stepValue); // 5d가 다섯칸, p을 프린트 하고
			column++;
			//화면에 표시된 게 5개를 넘어가면 줄바꿈을 수행한다.
			if (column == 5) {
				column = 0;
				printf("\n"); 
			}

		}
	}
	//함수 앞에 int면 return 0 넣어주면 좋음
		//void면 안넣어도됨
		//다른 프로그램에서 호출 시에는 return 0 또는 1을 넣어주는 게좋음
		//exe파일 말고 dinamic link library DLL -
		// main.c가 *.DLL을 호출하고 main.c에서 호출하는 값을 불러서 넣어줌

}