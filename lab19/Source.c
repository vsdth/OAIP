#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>
// ������� 1
//
//int a[1000]; //������. 1000 - ����������� ���������� ���������� ���������
//int n; // �������� ���������� ��������� � �������
//
//void Load() {
//	// �������� �������� �����
//	FILE* fin = fopen("D:\\Files\\lab19\\in1.txt", "rt");
//	if (fin == NULL) {
//		printf("������� ���� �� ������\n");
//		return;
//	}
//
//	// �������� ������� �� �������� �����
//	fscanf_s(fin, "%d", &n);
//
//	for (int i = 0; i < n; i++) {
//		fscanf_s(fin, "%d", &a[i]);
//	}
//
//	// �������� �������� �����
//	fclose(fin);
//}
//
//void SaveResult() {
//	// ���������� �������� ���������������
//	float sa = 0;
//	float s = 0;
//	for (int i = 0; i < n; i++) {
//		s += a[i];
//	}
//	sa = s / n;
//
//	// ���������, ������� ��������� ������ �� ���������������
//	int m = 0;
//	for (int i = 0; i < n; i++) {
//		if (a[i] > sa) {
//			m++;
//		}
//	}
//	// �������� ��������� �����
//	FILE* fout = fopen("D:\\Files\\lab19\\out1.txt", "wt");
//	if (fout == NULL) {
//		printf("�������� ���� �� ������\n");
//		return;
//	}
//
//	// ���������� ��������� ������� �� ���������������
//	printf("%d\n", m);
//
//	fprintf(fout, "%d\n", m); // ����� � �������
//	for (int i = 0; i < n; i++) {
//		if (a[i] > sa) {
//			fprintf(fout, "%d ", a[i]);
//			printf("%d ", a[i]); // ����� � �������
//		}
//	}
//	// �������� �����
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


			// ������ 2

//int *pa; // ��������� �� ������.
//int n; // �������� ���-�� ��������� � �������
//
//void Load() {
//	// �������� �������� �����
//	FILE* fin = fopen("d:\\Files\\lab19\\in1.txt", "rt");
//		if (fin == NULL) {
//			printf("������� ���� �� ������\n");
//			return;
//	}
//	// �������� ������� �� �������� �����
//		fscanf(fin, "%d", &n);
//		// ��������� ������ ��� ������������ ������
//		pa = (int*)malloc(sizeof(int) * n);
//
//		for (int i = 0; i < n; i++) {
//			fscanf(fin, "%d", &pa[i]);
//		}
//		// �������� �������� �����
//		fclose(fin);
//
//}
//
//void SaveResult() {
//	// ���������� �������� ���������������
//	float sa = 0;
//	float s = 0;
//	for (int i = 0; i < n; i++) {
//		s += pa[i];
//	}
//	sa = s / n;
//
//	// ���������, ������� ��������� ������ �� ���������������
//	int m = 0;
//	for (int i = 0; i < n; i++) {
//		if (pa[i] > sa) {
//			m++;
//		}
//	}
//
//	// �������� ��������� �����
//	FILE* fout = fopen("d:\\Files\\lab19\\out1.txt", "wt");
//	if (fout == NULL) {
//		printf("�������� ���� �� ������\n");
//		return;
//	}
//
//	// ���������� ��������� ������� �� ���������������
//	fprintf(fout, "%d\n", m);
//	for (int i = 0; i < n; i++) {
//		if (pa[i] > sa) {
//			fprintf(fout, "%d ", pa[i]);
//		}
//	}
//	// �������� �����
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

				//������ 3

//int* pa; // ��������� �� ������
//int n; // �������� ���-�� ��������� � �������
//
//
//void Load() {
//	//�������� �������� �����
//	FILE* fin = fopen("d:\\Files\\lab19\\in3.txt", "rt");
//	if (fin == NULL) {
//		printf("�� ������ ������� ����");
//		return;
//	}
//
//	//�������� ������� �� �������� �����
//
//	fscanf(fin, "%d", &n);
//	//��������� ������ ��� ������������ ������
//
//	pa = (int*)malloc(sizeof(int) * n);
//
//		for (int i = 0; i < n; i++) {
//			fscanf(fin, "%d", &pa[i]);
//	}
//	// �������� �������� �����
//	fclose(fin);
//}
//
//void SaveResults() {
//	
//	//���������� �������� ���������������
//	float sa = 0;
//	float s = 0;
//	for (int i = 0; i < n; i++) {
//		s += pa[i];
//	}
//	sa = s / n;
//	 
//	// �������� ������� "���� ����, �� ������ ��. �����."
//	int m = 0;
//	for (int i = 0; i < n; i++) {
//		if ((pa[i] > 0) && (pa[i] < sa)) {
//			m++;
//		}
//	}
//
//	//�������� ��������� �����
//
//	FILE* fout = fopen("d:\\Files\\lab19\\out3.txt", "wt");
//	if (fout == NULL) {
//		printf("�������� ���� �� ������");
//		return;
//	}
//	//���������� ������ ���������
//	fprintf(fout, "%d\n", m);
//	for (int i = 0; i < n; i++) {
//		if ((pa[i] > 0) && (pa[i] < sa)) {
//			fprintf(fout, "%d ", pa[i]);
//		}
//	}
//	//�������� �����
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


				//������� 4

int* pa; // ��������� �� ������
int n; // �������� ���-�� ��������� � �������

void Load() {
	FILE* fin = fopen("d:\\Files\\lab19\\in4.txt", "rt");
	if (fin == NULL) {
		printf("�� ������ ������� ����");
		return;
	}

	fscanf(fin, "%d", &n);

	pa = (int*)malloc(sizeof(int) * n);
	
		for (int i = 0; i < n; i++) {
			fscanf(fin, "%d", &pa[i]);
		}
		// �������� �������� �����
		fclose(fin);
}

void SaveResults() {

	//���������� ������������� ������

	int max = 0;
	for (int i = 0; i < n; i++) {
		if (pa[i] > max) {
			max += pa[i];
		}
	}
	float x = max * 2 / 3; // �������� �������

	int m = 0;
	for (int i = 0; i < n; i++) {
		if (pa[i] >= x) {
			m++;
		}
	}

	//�������� ��������� �����

	FILE* fout = fopen("d:\\Files\\Lab19\\out4.txt", "wt");
	//���������� ������ ���������
	fprintf(fout, "%d\n", m);
	for (int i = 0; i < n; i++) {
		if (pa[i] >= x) {
			fprintf(fout, "%d ", pa[i]);
		}
	}
	// �������� �����
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


