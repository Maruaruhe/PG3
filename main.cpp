#include <stdio.h>
#include <Windows.h>
#include <iostream>

int main() {

	SetConsoleOutputCP(65001);
	char str[] = "私";
	printf("%s", str);

	return 0;
}