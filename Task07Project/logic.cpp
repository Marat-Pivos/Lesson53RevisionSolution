// Task 07 [The number of odd digits]
// Количество нечётных цифр
//
// Необходимо спроектировать и реализовать программу, 
// которая считает количество нечётных цифр
// в заданном целом числе.
#include "logic.h"

int recursion(int number) {
	if (number == 1) {
		return 1;
	}

	if (number % 2 != 0) {
		return recursion(number - 1) + number;
	}
	return recursion(number - 1) + number;
}

int count_of_odd_digits(int number) {
	if (number < 1) {
		return -1;
	}

	return recursion(number);

}
