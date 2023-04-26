#include <iostream>
#include <algorithm>
#include <vector>


void print_vector(const std::vector<int>& my_vector);

int main() {
	setlocale(LC_ALL, "ru");
	std::cout << "\tЛямбда-функция\n" << std::endl;

	std::vector<int> my_vector{ 4, 7, 9, 14, 12 };

	std::cout << "Входные данные: ";
	print_vector(my_vector);

	std::for_each(my_vector.begin(), my_vector.end(), [](auto& value) {if (value % 2) value *= 3; });

	std::cout << "Выходные данные: ";
	print_vector(my_vector);

	system("pause > nul");
	return 0;
}

void print_vector(const std::vector<int>& my_vector) {
	for (auto const& i : my_vector) {
		std::cout << i << " ";
	}
	std::cout << std::endl;
}
