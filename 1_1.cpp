#include <iostream>
#include <iomanip>
int main() {

	bool flag;
	std::cout << "unesi 1 (true) ili 0 (false): ";
	std::cin >> flag;

	std::cout << "boolalpha ispis: " << std::boolalpha << flag << std::endl;
	std::cout << "noboolalpha ispis: " << std::noboolalpha << flag << std::endl;

	int a = 255;
	std::cout << "\nBroj a = " << a << std::endl;
	std::cout << "hex: " << std::hex << a << std::endl;
	std::cout << "dec: " << std::dec << a << std::endl;
	std::cout << "oct: " << std::oct << a << std::endl;

	double pi = 3.141592;
	std::cout << "\nFormatirani ispis broja pi:" << std::endl;
	std::cout << std::scientific << std::uppercase;
	std::cout << std::setprecision(7) << std::setw(20);
	std::cout << std::setfill('0');
	std::cout << pi << std::endl;

	return 0;
}