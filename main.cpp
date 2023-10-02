#include <stdio.h>


template <typename Type>
Type min(Type a, Type b) {
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
char min<char>(char a, char b) {
	return printf("数字以外は代入できません");
}

int main() {
	printf("%d\n", min<int>(100, 200));
	printf("%f\n", min<float>(10.0f, 20.0f));
	printf("%lf\n", min<double>(30.0f, 20.0f));
	printf("%c\n", min<char>( 81, 23));

	return 0;
}