#include <stdio.h>
#define rows 4
#define cols 4

int main(void) {
	int matrix1[rows][cols] = {
		5, 7, 8, 10,
		9, 3, 0, 6,
		8, 1, 9, 2,
		4, 7, 2, 1
	};
	int matrix2[rows][cols] = {
		2, 2, 1, 3,
		8, 1, 3, 1,
		1, 2, 2, 4,
		3, 1, 1, 2
	};
	int matrix3[rows][cols] = {0};

	for (int i = 0; i < cols; i++) {
		for (int j = 0; j < rows; j++) {
			matrix3[j][i] = matrix1[j][i] + matrix2[j][i];
		}
	}

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			printf("%d\t", matrix3[i][j]);
		}
		puts("");
	}

  return 0;
}