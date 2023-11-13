#pragma once

template <typename T1, typename T2>

class Min
{
public:
	Min(T1 num1, T2 num2) :num1_(num1), num2_(num2) {}


	T1 GetMin() {
		if (num1_ <= num2_) {
			return static_cast<T1>(num1_);
		}
		else{
			return static_cast<T2>(num2_);
		}
		return 0;
	}
private:
	T1 num1_;
	T2 num2_;
};

