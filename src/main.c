#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {

	if (argc != 2){
		printf("Использование: %s <number>\n", argv[0]);
	}

	int n = atoi(argv[1]);

	if (n <= 0){
		printf("Число должно быть положительным\n");
		return 1;
	}

	int *arr = (int*)malloc(n * sizeof(int));

	if (arr == NULL) {
		printf("Ошибка выделения памяти\n");
		return 1;
	}
	srand(time(NULL));
	printf("Исходный массив:\n");
		for (int i = 0; i < n; i++) {
			arr[i] = rand() % 100;
			printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;
}