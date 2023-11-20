#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <functional>
#include <iostream>

//typedef void (*pFunc)();
typedef std::function<void()> (*pFunc)();

void SetTimeOut(std::function<void()> p,int second) {
	Sleep(second * 1000);

	p();
}

int GetRandom() {
	srand((unsigned int)time(NULL));
	int rNum = rand() % 2 + 1;

	return rNum;
}

int main(int argc, const char* argv[]) {
	int randomNumber = GetRandom();
	int diceNumber = 0;
	std::cout << "サイコロの出目が奇数と思うなら1,偶数と思うなら2を入力してください。" << std::endl;
	scanf_s("%d", &diceNumber);

	std::function<void()> random = [=]() {
		if (randomNumber == diceNumber) {
			std::cout << "正解" << std::endl;
		}
		else {
			std::cout << "不正解" << std::endl;
		}
	};

	std::function<void()> p;
	p = random;
	SetTimeOut(p,3);

	return 0;
};
	//SelectNum(n, 3);
	//SelectNum(n, 3);


//void SelectNum( int second) {
//	srand((unsigned int)time(NULL));
//	int rNum = rand() % 2 + 1;
//	
//	int num = 0;
//	printf("サイコロの出目が奇数と思うなら1,偶数と思うなら2を入力してください。\n");
//	scanf_s("%d", &num);
//}
//
//void checkAnswer(int a, int b) {
//	if (a == b) {
//		std::cout << "int, int : "<< std::endl;
//		printf("正解\n");
//	}else{
//		printf("不正解\n");
//	}
//}