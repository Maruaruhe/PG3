#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <functional>

void (*pfunc)();

typedef void (*newType)(int , int );

int SelectNum(int second) {
	int num = 0;

	printf("サイコロの出目が奇数と思うなら1,偶数と思うなら2を入力してください。\n");
	scanf_s("%d", &num);

	std::function<void(int second)> sleep = [&](int second) {
		Sleep(second * 1000);
		};
	sleep(3);

	return num;
}

void checkAnswer(int a, int b) {
	if (a == b) {
		printf("正解\n");
	}else{
		printf("不正解\n");
	}
}

int main() {

	srand((unsigned int)time(NULL));
	int rNum = rand() % 2 + 1;

	int num = SelectNum(3);
	checkAnswer(rNum, num);


	return 0;
}