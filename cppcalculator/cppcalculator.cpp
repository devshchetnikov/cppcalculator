#include <iostream>
#include <string> // Добавил для работы со строками
#include <limits>
#include <cmath>

// Новая функция: убирает дубликат кода чисел

double getNumber(const std::string& prompt) {
	std::string input;
	size_t idx;
	while (true) {
		std::cout << prompt;
		std::getline(std::cin, input);
		try {
			double value = std::stod(input, &idx);
			if (idx == input.length()) {
				return value;
			}
			throw std::invalid_argument("Лишние символы в строке");
		}
		catch (...) {
			std::cout << "Ошибка! Вы ввели буквы. ";
		}
	}
}


int main() {
	setlocale(LC_ALL, "RU");

	double num1, num2;
	char op;
	char choice;
	std::string input;



	do {
		std::cout << "=== Ваш персональный калькулятор на с++ ===" << std::endl;

		num1 = getNumber("Введите первое число: ");

		std::cout << "Выберите операцию (+, -, *, /, ^): ";
		while (true) {
			std::cin >> op;
			if (op == '+' || op == '-' || op == '*' || op == '/' || op == '^') {
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				break;
			}
			std::cout << "Неверный знак! Выберите (+, -, *, /): ";
		    
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}

		num2 = getNumber("Введите второе число: ");

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
		case '^':
			std::cout << std::pow(num1, num2) << std::endl;
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