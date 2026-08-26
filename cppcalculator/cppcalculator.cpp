#include <iostream>
#include <string> // Добавил для работы со строками
#include <limits>

int main() {
	setlocale(LC_ALL, "RU");

	double num1, num2;
	char op;
	char choice;
	std::string input;



	do {
		std::cout << "=== Ваш персональный калькулятор на с++ ===" << std::endl;

		std::cout << "Введите первое число: ";
		while (true) {
			std::cin >> input;
			try {
				num1 = std::stod(input);
				break;
			}
			catch (...) {
				std::cout << "Ошибка вы ввели буквы. Введите число: ";
			}
		}

		std::cout << "Выберите операцию (+, -, *, /): ";
		while (true) {
			std::cin >> op;
			if (op == '+' || op == '-' || op == '*' || op == '/') {
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				break;
			}
			std::cout << "Неверный знак! Выберите (+, -, *, /): ";
		    
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}

		std::cout << "Введите второе число: ";
		while (true) {
			std::cin >> input;
			try {
				num2 = std::stod(input);
				break;
			}
			catch (...) {
				std::cout << "Ошибка вы ввели буквы. Введите число: ";
			}
		}

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
				std::cout << "Ошибка деления на ноль невозможно!" << std::endl;
			}
			else {
				std::cout << num1 / num2 << std::endl;
			}
			break;
		default:
			std::cout << "Ошибка неверная операция!" << std::endl;
			break;
		}
		std::cout << "Хотите продолжить? (y/n): ";
		std::cin >> choice;

		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //Отчистка буфера от лишних символах


	} while (choice == 'Y' || choice == 'y');

	std::cout << "Программа завершенна заходите ещё!" << std::endl;

	return 0;
}