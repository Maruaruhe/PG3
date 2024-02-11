#include <stdio.h>

template <typename Type>
Type Min(Type a, Type b) {
	Type num;
	if (a <= b) {
		num = a;
	}
	else {
		num = b;
	}
	return static_cast<Type>(num);

}

template<>
char Min<char>(char a, char b) {
	return printf("数字以外は代入できません");
}

int main() {
	printf("%d\n", Min<int>(100, 200));
	printf("%f\n", Min<float>(10.0f, 20.0f));
	printf("%lf\n", Min<double>(30.0, 20.0));
	Min<char>('d', 'fs');

	return 0;
}