#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>
#include <time.h>

typedef void (*pFunc)(int , int );

void checkAnswer(int a, int b) {
	if (a == b) {
		printf("\n正解\n");
	}else{
		printf("\n不正解\n");
	}
}

void SetTimeOut(pFunc n, int second,int diceNum, int selectNum) {

	for (int i = 0; i < second; i++) {
		printf("・");
		Sleep(1000);
	}
	n(diceNum, selectNum);
}

int main() {
	srand((unsigned int)time(NULL));
	int diceNum = rand() % 2 + 1;

	int num = 100;
	printf("サイコロの出目が奇数と思うなら1,偶数と思うなら2を入力した後、エンターキーを押してください。\n");
	scanf_s("%d", &num);

	pFunc pCallBack;
	pCallBack = checkAnswer;
	SetTimeOut(pCallBack, 3,diceNum, num);


	return 0;
}