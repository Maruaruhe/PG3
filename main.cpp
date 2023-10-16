#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>
#include <time.h>

void (*pfunc)();

typedef int (*newType)(int *);

int SelectNum(int num) {
	printf("サイコロの出目が奇数と思うなら1,偶数と思うなら2を入力してください。\n");
	scanf_s("%d", &num);
	return num;
}

void checkAnswer(int a,int b) {
	Sleep(3 * 1000);
	if (a == b) {
		printf("当たり");
	}else{
		printf("はずれ");
	}
}

int main() {
	int num = 0;
	srand((unsigned int)time(NULL));
	int rNum = rand() % 2 + 1;

	num = SelectNum(num);
	checkAnswer(num,rNum);
	return 0;
}