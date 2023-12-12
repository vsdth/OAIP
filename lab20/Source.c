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

// ����� ��������� �������

void print() {
	printf("!!!! print() !!!!\n");
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			printf("%5d ", arr[i][j]);
		}
		printf("\n");
	}
}


// ���������� ���������� i * 10 + j

void fillx10() {
	printf("!!!! fillx10() !!!!\n");
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			arr[i][j] = i * 10 + j;
		}
	}
}

// ���������� ������

void fillZero() {
	printf("!!!! fillZero() !!!!\n");
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			arr[i][j] = 0;
		}
	}
}



// �������� �������� ��� ��������, � ������� ��� �� ������ ������� ��������

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










//���������� ���������� ����������


void fillRandom_0_9() {
	printf("!!!! fillRandom_0_9 !!!!\n");
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			arr[i][j] = rand() % 10;
		}
	}
}


// ��� �������� ��������� � 10 ���

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


// ��� ������� 10 ��������� � 10 ���

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









// ����� ������������ ��������


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



// ������� ������

void deleteRow(int delRow) {
	printf("!!!! deleteRow(%d) !!!!\n", delRow);
	for (int i = delRow; i < n - 1; i++) {
		for (int j = 0; j < m; j++) {
			arr[i][j] = arr[i + 1][j];
		}
	}
	n--;
}



//  �������� ������� � �����

void addColumn0() {
	printf("!!!! addColumn !!!!\n");
	if (m < MAX_M) {
		for (int i = 0; i < n; i++) {
			arr[i][m] = 228;
		}
		m++;
	}
}

// �������������� �������� ������� �������

void doubleColumn(int dc) {
	printf("!!!! doubleColumn !!!!\n");
	if (m < MAX_M) {
		for (int i = 0; i < n; i++) {
			arr[i][m] = arr[i][dc];
		}
		m++;
	}
}








// ���������� ���������

void save() {

	//�������� ����

	FILE* fout = fopen("C:\\Users\\vs4death\\Desktop\\VS Projects\\lab20\\out20lab.txt", "wt");
	if (fout == NULL) {
		printf("�������� ���� �� ��������");
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

// �������� �� �����


void load() {
	FILE* fin = fopen("C:\\Users\\vs4death\\Desktop\\VS Projects\\lab20\\in20lab.txt", "rt");
	if (fin == NULL) {
		printf("������� ���� �� ������");
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


// ���� ������� � ����������

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
		printf("���������� �������: ");
		print();
		printf("\n ================================== \n");
		printf("�������� ������ ��� ��������:\n");
		printf("1:  ��������� ���������� i * 10 + j\n");
		printf("2: ��������� ������\n");
		printf("3: ��������� ���������� ����������\n");
		printf("4: ��� �������� ��������� � 10 ���\n");
		printf("5: ��� ������� 10 ��������� � 10 ���\n");
		
		printf("6: ������ ������ � ������� ����������\n");

		printf("7: �������� ������� �� �����\n");
		printf("8: ���������� ������� � ����\n");
		printf("9: ������� �������� ������ �� �������\n");
		printf("10: �������������� �������� ������� �������\n");
		printf("11: �������� �������� ��� ��������, � ������� ��� �� ������ ������� ��������\n");


		printf("\n");
		printf("0: ����� �� ���������\n");
		printf("��������� �������� >>>>>>>>");

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
			printf("����� ��������� ������: ");
			scanf_s("%d", &num);
			deleteRow(num);
		}
		break;

		case 10:
		{
			int dc;
			printf("����� ������������ �������: ");
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
