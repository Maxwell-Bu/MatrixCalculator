#include <iostream>
#include <string>

class Matrix {
private:
	int m;
	int n;
public:
	Matrix(int m_val, int n_val)
	: m(m_val), n(n_val)
	{};
};

int main() {
	char input;

	while (true) {
	
		std::cout << "N: Create New Matrix" << "\n";
		std::cout << "X: Exit" << "\n";

		std::cout << "Whaddya wanna do?: ";
		std::cin >> input;	
	
		if (input == 'X') {
			break;
	
		}

		switch (input) {
			case 'N':
				std::cout << "It Worked!" << "\n";
				break;
			default:
				std::cout << "No" << "\n";
		}
	}

	return 0;
}
