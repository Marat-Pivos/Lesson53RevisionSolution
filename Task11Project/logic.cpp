// Task 11 [The arithmetic mean]
// Среднее арифметическое
//
// Необходимо спроектировать и реализовать программу, 
// которая вычисляет среднее арифметическое элементов вектора.

#include "logic.h"

double calculate_average(int vector[], int size) {
	int sum = 0;

	for (int i = 0; i < size; i++) {
		sum += vector[i];
	}

	double avg = sum / size;

	return avg;
}