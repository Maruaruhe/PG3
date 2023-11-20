#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>
#include <time.h>

typedef void (*pFunc)(int , int );

void SelectNum(pFunc n, int second) {
	srand((unsigned int)time(NULL));
	int rNum = rand() % 2 + 1;
	//printf("%d\n", rNum);
	int num = 0;
	printf("サイコロの出目が奇数と思うなら1,偶数と思うなら2を入力してください。\n");
	scanf_s("%d", &num);

	Sleep(second * 1000);

	n(rNum, num);
}

void checkAnswer(int a, int b) {
	if (a == b) {
		printf("正解\n");
	}else{
		printf("不正解\n");
	}
}

int main() {

	pFunc pCallBack;
	pCallBack = checkAnswer;
	SelectNum(pCallBack, 3);


	return 0;
}