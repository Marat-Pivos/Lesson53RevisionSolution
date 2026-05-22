// Task 04 [The sum of cubes]
// Сумма кубов
// 
// Необходимо спроектировать и реализовать программу, 
// которая возвращает сумму кубов чисел от 1 до N.
#include "logic.h"

int recursion(int number) {
	if (number < 10) {
		return 1;
	}

	return recursion(number / 10) + 1;
}

int count(int number) {
	if (number < 0) {
		number *= -1;
	}

	if (number < 10) {
		return 1;
	}

	return count(number / 10) + 1;
}