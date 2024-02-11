#include <stdio.h>
#include <iostream>
#include <list>
#include <vector>
#include <algorithm>
#include <thread>

void PrintThreadNumber(const char* string) {
	printf("%s\n", string);
}

int main() {

	std::thread thread1(PrintThreadNumber, "thread1");
	thread1.join();

	std::thread thread2(PrintThreadNumber, "thread2");
	thread2.join();

	std::thread thread3(PrintThreadNumber, "thread3");
	thread3.join();


	return 0;
}