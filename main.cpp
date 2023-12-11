#include <stdio.h>
#include <iostream>
#include <list>

int main() {

	std::list<const char*> lst{
		"Tokyo","Kanda","Akihabara","Okachimachi","Ueno","Uguisudani","Nippori","Tabata","Komagome",
		"Sugamo","Otsuka","Ikebukuro","Mejiro","Takadanobaba","Shin-Okubo","Shinjuku","Yoyogi","Harajuku","Shibuya",
		"Ebisu","Meguro","Gotanda","Osaki","Shinagawa","Tamachi","Hamamatsucho","Shimbashi","Yurakucho"
	};

	std::cout << "1970s.\n";
	for (std::list<const char*>::iterator itr = lst.begin(); itr != lst.end(); ++itr) {
		std::cout << *itr << "\n";
	}

	for (std::list<const char*>::iterator itr = lst.begin(); itr != lst.end(); ++itr) {
		if (*itr == "Tabata") {
			lst.insert(itr, "Nishi-Nippori");
		}
	}

	std::cout << "\n2019s.\n";
	for (std::list<const char*>::iterator itr = lst.begin(); itr != lst.end(); ++itr) {
		std::cout << *itr << "\n";
	}

	for (std::list<const char*>::iterator itr = lst.begin(); itr != lst.end(); ++itr) {
		if (*itr == "Tamachi") {
			lst.insert(itr, "Takanawa-Gateway");
		}
	}

	std::cout << "\n2022s.\n";
	for (std::list<const char*>::iterator itr = lst.begin(); itr != lst.end(); ++itr) {
		std::cout << *itr << "\n";
	}


	return 0;
}