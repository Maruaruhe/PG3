#include <stdio.h>
#include "Cat.h"
#include "Dog.h"
#include "Voice.h"

int main() {
	Voice* voice[2];

	voice[0] = new Cat;
	voice[1] = new Dog;

	for (int i = 0; i < 2; i++) {
		voice[i]->Naku();
		delete voice[i];
	}

	return 0;
}