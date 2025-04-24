#include <iostream>

void sum(int N, int A[], int Y[]) {
	for (int i = 0; i < N; i++) {
    	int row_sum = 0;
    	int base = i * N; // row offset
    	for (int j = 0; j < N; j++) {
        	row_sum += A[base + j];
    	}
    	Y[i] = row_sum;
	}
}
