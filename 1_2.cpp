#include <iostream>
int clamp(int value, int low = 0, int high = 100) {
	if (value < low) return low;
	if (value > high) return high;
	return value;
}
double clamp(double value, double low = 0.0, double high = 1.0) {
	if (value < low) return low;
	if (value > high) return high;
	return value;
}

int main() {
	std::cout << clamp(23) << std::endl;
	std::cout << clamp(-180) << std::endl;

	std::cout << clamp(3.8) << std::endl;
	std::cout << clamp(-2.0) << std::endl;

	return 0;

}
