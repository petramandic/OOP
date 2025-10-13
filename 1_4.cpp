#include <iostream>

template<typename T>
T& at(T arr[], std::size_t index) {
	return arr[index];
}

int main() {
	int arr[] = { 10, 20, 30, 40 };
	std::size_t n = sizeof(arr) / sizeof(arr[0]);

	std::cout << "Prije: ";
	for (std::size_t i = 0; i < n; ++i) std::cout << arr[i] << " ";
	std::cout << std::endl;

	at(arr, 2)++;

	at(arr, 0) = 99;

	std::cout << "Poslije: ";
	for (std::size_t i = 0; i < n; ++i) std::cout << arr[i] << " ";
	std::cout << std::endl;

	return 0;
}