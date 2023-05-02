#include "CPPL7_2_2.h"

// Ошибка линковки (исправление: необходимо имплементировать функцию input_vector)
void input_vector(std::vector<int>&);

// Семантическая ошибка (исправление: необходимо исправить функцию print_vector так, чтобы выводились элементы вектора)
void print_vector(std::vector<int>&);

// Задача 2*. Сплошные ошибки
void CPPL7_2_2()
{
	std::vector<int> v(5;); // Синтаксическая ошибка (исправление: необходимо удалить ; в скобках)
	//std::vector<int> v(5); // Исправление синтаксической ошибки
	input_vector(v);
	print_vector(v);
}

void print_vector(std::vector<int>& v) {
	for (int& vi : v) {
		vi *= 2;
	}

	// Исправление семантической ошибки
	//for (const int& vi : v) {
	//	std::cout << vi;
	//}
}

// Исправление ошибки линковки
//void input_vector(std::vector<int>& v) {
//	for (int i = 0; i < v.size(); i++) {
//		std::cin >> v[i];
//	}
//}
