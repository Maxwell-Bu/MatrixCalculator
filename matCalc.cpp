#include <iostream>
#include <string>
#include <vector>
#include <format>

class Matrix {
private:
	int m;
	int n;
public:
	Matrix(int m_val, int n_val)
	: m(m_val), n(n_val)
	{};

	void print_info() {
		std::string info = std::format("({} x {})", m, n);
		std::cout << info << "\n";
	}	
};

std::vector<Matrix> matrices;

void createMatrix(int m, int n) {
	matrices.push_back(Matrix(m, n));
}

int main() {
	char input;

	while (true) {
	
		std::cout << "N: Create New Matrix" << "\n";
		std::cout << "P: Print info" << "\n";
		std::cout << "X: Exit" << "\n";

		std::cout << "Whaddya wanna do?: ";
		std::cin >> input;	
	
		if (input == 'X') {
			break;
	
		}

		switch (input) {
			case 'N':
				int rows, columns;
				std::cout << "How many rows? :";
				std::cin >> rows;
				std::cout << "How many columns? :";
				std::cin >> columns;
				
				createMatrix(rows, columns);
			case 'P':
				for (int i; i < matrices.size(); ++i) {
					matrices[i].print_info();
				}
			default:
				std::cout << "No" << "\n";
		}
	}

	return 0;
}
