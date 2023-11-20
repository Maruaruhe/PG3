#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <functional>
#include <iostream>

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

	std::function<void()> checkAnswer = [=]() {
		if (randomNumber == diceNumber) {
			std::cout << "正解" << std::endl;
		}
		else {
			std::cout << "不正解" << std::endl;
		}
	};

	SetTimeOut(checkAnswer,3);

	return 0;
};