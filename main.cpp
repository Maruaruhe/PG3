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
	printf("サイコロの出目が奇数と思うなら1,偶数と思うなら2を入力した後、エンターキーを押してください。\n");
	scanf_s("%d", &num);

	for (int i = 0; i < second; i++) {
		printf("・");
		Sleep(1000);
	}
	n(rNum, num);
}

void checkAnswer(int a, int b) {
	if (a == b) {
		printf("\n正解\n");
	}else{
		printf("\n不正解\n");
	}
}

int main() {

	pFunc pCallBack;
	pCallBack = checkAnswer;
	SelectNum(pCallBack, 3);


	return 0;
}