#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <Windows.h>

#define MAX_N 8
#define MAX_M 10

int arr[MAX_N][MAX_M] = {
	{ 5, 4, 222, 3},
	{10, 11, 12, 13},
	{20, 21, 22, 23}
};

int n = 3;
int m = 4;

// Вывод элементов массива

void print() {
	printf("!!!! print() !!!!\n");
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			printf("%5d ", arr[i][j]);
		}
		printf("\n");
	}
}


// Заполнение значениями i * 10 + j

void fillx10() {
	printf("!!!! fillx10() !!!!\n");
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			arr[i][j] = i * 10 + j;
		}
	}
}

// Заполнение нулями

void fillZero() {
	printf("!!!! fillZero() !!!!\n");
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			arr[i][j] = 0;
		}
	}
}



// Обнулить элементы тех столбцов, в которых нет ни одного чётного элемента

void fillZeroNoEven() {
	int EvenElement[MAX_M] = { 0 };

	for (int j = 0; j < m; j++) {
		for (int i = 0; i < n; i++) {
			if (arr[i][j] % 2 == 0) {
				EvenElement[j] = 1;
				break;
			}
		}
	}
	
	for (int j = 0; j < m; j++) {
		if (EvenElement[j] == 0) {
			for (int i = 0; i < n; i++) {
				arr[i][j] = 0;
			}
		}
	}


}










//Заполнение случайными значениями


void fillRandom_0_9() {
	printf("!!!! fillRandom_0_9 !!!!\n");
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			arr[i][j] = rand() % 10;
		}
	}
}


// Все нечётные увеличить в 10 раз

void oddX10() {
	printf("!!!! oddx10 !!!!\n");
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (arr[i][j] % 2 != 0) {
				arr[i][j] *= 10;
			}
		}
	}
}


// Все кратные 10 уменьшить в 10 раз

void multiple10_10() {
	printf("!!!! multiple10 !!!!\n");
	for (int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			if (arr[i][j] % 10 == 0) {
				arr[i][j] /= 10;
			}
		} printf("\n");
	}



}









// Поиск минимального элемента


void findMin() {
	printf("!!!! findMin() !!!! \n");
	int min = arr[0][0];
	int iMin = 0;
	int jMin = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (arr[i][j] < min) {
				min = arr[i][j];
				iMin = i;
				jMin = j;
			}
		}
	}
	printf("min = %d\n", min);
	printf("i min = %d\n", iMin);
	printf("j min = %d\n", jMin);



}



// Удалить строку

void deleteRow(int delRow) {
	printf("!!!! deleteRow(%d) !!!!\n", delRow);
	for (int i = delRow; i < n - 1; i++) {
		for (int j = 0; j < m; j++) {
			arr[i][j] = arr[i + 1][j];
		}
	}
	n--;
}



//  Вставить столбец в конец

void addColumn0() {
	printf("!!!! addColumn !!!!\n");
	if (m < MAX_M) {
		for (int i = 0; i < n; i++) {
			arr[i][m] = 228;
		}
		m++;
	}
}

// Продублировать заданный столбец массива

void doubleColumn(int dc) {
	printf("!!!! doubleColumn !!!!\n");
	if (m < MAX_M) {
		for (int i = 0; i < n; i++) {
			arr[i][m] = arr[i][dc];
		}
		m++;
	}
}








// Сохранение состояния

void save() {

	//Выходной файл

	FILE* fout = fopen("C:\\Users\\vs4death\\Desktop\\VS Projects\\lab20\\out20lab.txt", "wt");
	if (fout == NULL) {
		printf("Выходной файл не создался");
		return;
	}

	fprintf(fout, "%d ", n);
	fprintf(fout, "%d\n", m);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			fprintf(fout, "%d ", arr[i][j]);
		}
		fprintf(fout, "\n");
	}

	fclose(fout);
}

// Загрузка из файла


void load() {
	FILE* fin = fopen("C:\\Users\\vs4death\\Desktop\\VS Projects\\lab20\\in20lab.txt", "rt");
	if (fin == NULL) {
		printf("Входной файл не найден");
		return;
	}

	fscanf(fin, "%d", &n);
	fscanf(fin, "%d", &m);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			fscanf(fin, "%d", &arr[i][j]);
		}
	}
	
	fclose(fin);
}


// Ввод массива с клавиатуры

void keyboardInput() {
	printf("n = ");
	scanf_s("%d", &n);
	printf("m = ");
	scanf_s("%d", &m);

	printf("Input %d values: ", n*m);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			scanf_s("%d ", &arr[i][j]);
		}
	}

}


void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);


	int item;
	do {
		printf("\n");
		printf("Содержимое массива: ");
		print();
		printf("\n ================================== \n");
		printf("Выберите нужную вам операцию:\n");
		printf("1:  Заполнить значениями i * 10 + j\n");
		printf("2: Заполнить нулями\n");
		printf("3: Заполнить случайными эначениями\n");
		printf("4: Все нечётные увеличить в 10 раз\n");
		printf("5: Все кратные 10 уменьшить в 10 раз\n");
		
		printf("6: Ввести массив с помощью клавиатуры\n");

		printf("7: Загрузка массива из файла\n");
		printf("8: Сохранение массива в файл\n");
		printf("9: Удалить заданную строку из массива\n");
		printf("10: Продублировать заданный столбец массива\n");
		printf("11: Обнулить элементы тех столбцов, в которых нет ни одного чётного элемента\n");


		printf("\n");
		printf("0: Выйти из программы\n");
		printf("Выбранная операция >>>>>>>>");

		scanf_s("%d", &item);


		switch (item) {


		case 1:
		{
			fillx10();
		}
		break;


		case 2:
		{
			fillZero();
		}
		break;


		case 3:
		{
			fillRandom_0_9();
		}
		break;

		
		case 4:
		{
			oddX10();
		}
		break;


		case 5:
		{
			multiple10_10();
		}
		break;


		case 6:
		{
			keyboardInput();
		}
		break;
		

		case 7:
		{
			load();
		}
		break;


		case 8:
		{
			save();
		}
		break;


		case 9:
		{
			int num;
			printf("Номер удаляемой строки: ");
			scanf_s("%d", &num);
			deleteRow(num);
		}
		break;

		case 10:
		{
			int dc;
			printf("Номер дублируемого столбца: ");
			scanf_s("%d", &dc);
			doubleColumn(dc);
		}
		break;

		
		case 11:
		{
			fillZeroNoEven();
		}
		break;
		
		





		}


	} while (item != 0);
}
