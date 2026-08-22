#include <iostream>

int main() {
	setlocale(LC_ALL, "RU");

	double num1, num2;
	char op;

	std::cout << "Введите первое число: ";
	std::cin >> num1;

	std::cout << "Выберите операцию (+, -, *, /): ";
	std::cin >> op;

	std::cout << "Введите второе число: ";
	std::cin >> num2;

	switch (op) {
	case '+':
		std::cout << num1 + num2 << std::endl;
		break;
	case '-':
		std::cout << num1 - num2 << std::endl;
		break;
	case '*':
		std::cout << num1 * num2 << std::endl;
		break;
	case '/':
		if (num2 == 0) {
			std::cout << "Ошибка: Деление на ноль невозможно!" << std::endl;
		}
		else {
			std::cout << "Результат: " << num1 / num2 << std::endl;
		}
		break;
	}

	return 0;
}