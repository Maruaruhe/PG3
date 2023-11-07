#pragma once
#include "Voice.h"

class Dog : public Voice
{
public:
	Dog();
	~Dog();

	void Naku() override;
private:

};

