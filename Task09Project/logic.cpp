// Task 09 [The sum VI]
// Сумма
//
// Необходимо спроектировать и реализовать программу, 
// которая вычисляет сумму цифр заданного числа, кратных 5
#include "logic.h"

int recursion(int number) {
	if (number <= 9) {
		return number == 5 ? 5 : 0;
	}

	int digit = number % 10;
	
	return recursion(number / 10) + (digit == 5 ? 5 : 0);
}

int sum(int number) {
	
	if (number < 0) {
		number = number * -1;
	}

	return recursion(number);

}
//f(12345) --> 5
//f(52355) --> 15

// f(52355)-->f(5235) + 5

// f(52)-->f(5) + 2
//f(5) --> 5
//f(2) --> 0



