#include <stdio.h>

int SalaryPerHour(int n) {
	if (n <= 1) {
		return 100;
	}
	return ( (SalaryPerHour(n-1) * 2 - 50));
}
int TotalSalary(int n) {
	if (n <= 1) {
		return 100;
	}
	return (SalaryPerHour(n) + TotalSalary(n - 1));
}
//1 100
//2 150  50         250
//3 250  100       500
//4 450  200       950
//5 850  400       1800		 
//6 1650  800
int main() {
	int n = 8;
	int result;
	int Normal = 1072;

	result = TotalSalary(n);

	printf("再帰的 : %d\n", result);
	printf("一般的 : %d\n", Normal* n);;

	return 0;
}