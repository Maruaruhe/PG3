#include <stdio.h>
#include <iostream>
#include <list>
#include <chrono>

int main() {
	std::string a(100000, 'a');
	// 実行開始時間
	std::chrono::steady_clock::time_point before;
	std::chrono::steady_clock::time_point after;
	std::chrono::microseconds micro;

	before = std::chrono::steady_clock::now();
	std::string b = a;
	after = std::chrono::steady_clock::now();

	micro = std::chrono::duration_cast<std::chrono::microseconds>(after - before);
	printf("%lfmicroSeconds。\n", double(micro.count()));

	before = std::chrono::steady_clock::now();
	std::string c = std::move(a);
	after = std::chrono::steady_clock::now();

	micro = std::chrono::duration_cast<std::chrono::microseconds>(after - before);
	printf("%lfmicroSeconds。\n", double(micro.count()));


	return 0;
}