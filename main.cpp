#include <stdio.h>

int TotalSalary(int hour ,int salary) {
	if (hour <= 0) {
		return 0;
	}
	return salary + TotalSalary(hour - 1, salary * 2 - 50);
}

int main() {
	int n = 8;
	int Normal = 1072;

	printf("再帰的 : %d\n", TotalSalary(n, 100));
	printf("一般的 : %d\n", Normal* n);;

	return 0;
}