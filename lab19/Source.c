#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>
// ЗАДАНИЕ 1
//
//int a[1000]; //массив. 1000 - максимально допустимое количество элементов
//int n; // Реальное количество элементов в массиве
//
//void Load() {
//	// Открытие входного файла
//	FILE* fin = fopen("D:\\Files\\lab19\\in1.txt", "rt");
//	if (fin == NULL) {
//		printf("Входной файл не найден\n");
//		return;
//	}
//
//	// Загрузка массива из входного файла
//	fscanf_s(fin, "%d", &n);
//
//	for (int i = 0; i < n; i++) {
//		fscanf_s(fin, "%d", &a[i]);
//	}
//
//	// Закрытие входного файла
//	fclose(fin);
//}
//
//void SaveResult() {
//	// Вычисление среднего арифметического
//	float sa = 0;
//	float s = 0;
//	for (int i = 0; i < n; i++) {
//		s += a[i];
//	}
//	sa = s / n;
//
//	// Выяснение, сколько элементов больше ср арифметического
//	int m = 0;
//	for (int i = 0; i < n; i++) {
//		if (a[i] > sa) {
//			m++;
//		}
//	}
//	// Открытие выходного файла
//	FILE* fout = fopen("D:\\Files\\lab19\\out1.txt", "wt");
//	if (fout == NULL) {
//		printf("Выходной файл не найден\n");
//		return;
//	}
//
//	// Сохранение элементов больших ср арифметического
//	printf("%d\n", m);
//
//	fprintf(fout, "%d\n", m); // вывод в консоль
//	for (int i = 0; i < n; i++) {
//		if (a[i] > sa) {
//			fprintf(fout, "%d ", a[i]);
//			printf("%d ", a[i]); // вывод в консоль
//		}
//	}
//	// Закрытие файла
//	fclose(fout);
//	}
//
//
//void main() {
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//	printf("Hello! It is Task1!\n");
//	Load();
//	SaveResult();
//}


			// Задача 2

//int *pa; // Указатель на массив.
//int n; // Реальное кол-во элементов в массиве
//
//void Load() {
//	// Открытие входного файла
//	FILE* fin = fopen("d:\\Files\\lab19\\in1.txt", "rt");
//		if (fin == NULL) {
//			printf("Входной файл не найден\n");
//			return;
//	}
//	// Загрузка массива из входного файла
//		fscanf(fin, "%d", &n);
//		// Выделение памяти под динамический массив
//		pa = (int*)malloc(sizeof(int) * n);
//
//		for (int i = 0; i < n; i++) {
//			fscanf(fin, "%d", &pa[i]);
//		}
//		// Закрытие входного файла
//		fclose(fin);
//
//}
//
//void SaveResult() {
//	// Вычисление среднего арифметического
//	float sa = 0;
//	float s = 0;
//	for (int i = 0; i < n; i++) {
//		s += pa[i];
//	}
//	sa = s / n;
//
//	// Выяснение, сколько элементов больше ср арифметического
//	int m = 0;
//	for (int i = 0; i < n; i++) {
//		if (pa[i] > sa) {
//			m++;
//		}
//	}
//
//	// Открытие выходного файла
//	FILE* fout = fopen("d:\\Files\\lab19\\out1.txt", "wt");
//	if (fout == NULL) {
//		printf("Выходной файл не найден\n");
//		return;
//	}
//
//	// Сохранение элементов больших ср арифметического
//	fprintf(fout, "%d\n", m);
//	for (int i = 0; i < n; i++) {
//		if (pa[i] > sa) {
//			fprintf(fout, "%d ", pa[i]);
//		}
//	}
//	// Закрытие файла
//	fclose(fout);
//}
//
//void main() {
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//	printf("Hello! It is Task2!\n");
//
//	Load();
//	SaveResult();
//
//	free(pa);
//}

				//Задача 3

//int* pa; // Указатель на массив
//int n; // Реальное кол-во элементов в массиве
//
//
//void Load() {
//	//Открытие входного файла
//	FILE* fin = fopen("d:\\Files\\lab19\\in3.txt", "rt");
//	if (fin == NULL) {
//		printf("Не найден входной файл");
//		return;
//	}
//
//	//Загрузка массива из входного файла
//
//	fscanf(fin, "%d", &n);
//	//Выделение памяти под динамический массив
//
//	pa = (int*)malloc(sizeof(int) * n);
//
//		for (int i = 0; i < n; i++) {
//			fscanf(fin, "%d", &pa[i]);
//	}
//	// Закрытие входного файла
//	fclose(fin);
//}
//
//void SaveResults() {
//	
//	//Вычисление среднего арифметического
//	float sa = 0;
//	float s = 0;
//	for (int i = 0; i < n; i++) {
//		s += pa[i];
//	}
//	sa = s / n;
//	 
//	// Проверка условия "Выше нуля, но меньше ср. арифм."
//	int m = 0;
//	for (int i = 0; i < n; i++) {
//		if ((pa[i] > 0) && (pa[i] < sa)) {
//			m++;
//		}
//	}
//
//	//Открытие выходного файла
//
//	FILE* fout = fopen("d:\\Files\\lab19\\out3.txt", "wt");
//	if (fout == NULL) {
//		printf("Выходной файл не найден");
//		return;
//	}
//	//Сохранение нужных элементов
//	fprintf(fout, "%d\n", m);
//	for (int i = 0; i < n; i++) {
//		if ((pa[i] > 0) && (pa[i] < sa)) {
//			fprintf(fout, "%d ", pa[i]);
//		}
//	}
//	//Закрытие файла
//	fclose(fout);
//}
//
//void main() {
//		SetConsoleCP(1251);
//		SetConsoleOutputCP(1251);
//		printf("Hello! It is Task3!\n");
//	
//		Load();
//		SaveResults();
//	
//		free(pa);
//	}


				//Задание 4

int* pa; // Указатель на массив
int n; // Реальное кол-во элементов в массиве

void Load() {
	FILE* fin = fopen("d:\\Files\\lab19\\in4.txt", "rt");
	if (fin == NULL) {
		printf("Не найден входной файл");
		return;
	}

	fscanf(fin, "%d", &n);

	pa = (int*)malloc(sizeof(int) * n);
	
		for (int i = 0; i < n; i++) {
			fscanf(fin, "%d", &pa[i]);
		}
		// Закрытие входного файла
		fclose(fin);
}

void SaveResults() {

	//Нахождения максимального дохода

	int max = 0;
	for (int i = 0; i < n; i++) {
		if (pa[i] > max) {
			max += pa[i];
		}
	}
	float x = max * 2 / 3; // Итоговое условие

	int m = 0;
	for (int i = 0; i < n; i++) {
		if (pa[i] >= x) {
			m++;
		}
	}

	//Открытие выходного файла

	FILE* fout = fopen("d:\\Files\\Lab19\\out4.txt", "wt");
	//Сохранение нужных элементов
	fprintf(fout, "%d\n", m);
	for (int i = 0; i < n; i++) {
		if (pa[i] >= x) {
			fprintf(fout, "%d ", pa[i]);
		}
	}
	// Закрытие файла
	fclose(fout);

}

void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	printf("Hello! It is Task4!\n");
	Load();
	SaveResults();
	free(pa);
}


