#include <iostream>
#include <string>
#include <cctype>

int main() {
	std::string s;
	std::cout << "Unesi red teksta:\n";
	std::getline(std::cin, s);

	for (char &ch : s) {
		unsigned char uch = static_cast<unsigned char>(ch);
		if (std::isdigit(uch)) {
			ch = '*';
		}
		else if (ch == ' ' || ch == '\t') {
			ch = '_';
		}
		else {
			if (std::isalpha(uch)) {
				ch = static_cast<char>(std::toupper(uch));
			}
		}
	}

	std::cout << "Transformirani string:\n" << s << std::endl;
	return 0;
}

