#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>
#include <time.h>

void (*pfunc)();

typedef void (*newType)(int *, int *);

void SelectNum(newType n, int second) {
	srand((unsigned int)time(NULL));
	int rNum = rand() % 2 + 1;
	printf("%d\n", rNum);
	int num = 0;
	printf("サイコロの出目が奇数と思うなら1,偶数と思うなら2を入力してください。\n");
	scanf_s("%d", &num);

	Sleep(second * 1000);

	n(&rNum, &num);
}

void checkAnswer(int* a, int* b) {
	if (a == b) {
		printf("当たり\n");
	}else{
		printf("はずれ\n");
	}
}

int main() {

	newType n;
	n = checkAnswer;
	SelectNum(n, 3);


	return 0;
}