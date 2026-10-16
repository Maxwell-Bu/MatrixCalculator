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
	std::string input;

	while (true) {
	
		std::cout << "Whaddya wanna do?: ";
		std::cin >> input;	
	
		if (input == "exit") {
			break;
	
		}
	}

	return 0;
}
