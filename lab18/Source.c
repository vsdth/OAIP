#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>

// ������ 1

//void main() {
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//	printf("�������� ���������\n");
//	printf("������ 1\n");
//
//	//����� �������� �� �������� �����
//	int a, b, c;
//	// ������������, ��������� � �������� ����
//	int p;
//
//	scanf_s("%d%d%d", &a, &b, &c);
//	printf("�����: %d, %d, %d\n", a, b, c);
//	// ���������
//	p = a * b * c;
//	printf("p =  %d\n", p);
//}

// ������ 2

//void main() {
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//    printf("������ 2\n");
//
//    // ������ �� �������� �����
//
//    // �����, �������� �� �������� �����
//    int a, b, c;
//    // ������������, ��������� � �������� ����
//    int p;
//
//    // ������� ����
//    FILE* fin = fopen("D:\\Files\\in2.txt", "rt");
//    if (fin == NULL) {
//        printf("������� ���� �� ������");
//        return;
//    }
//    fscanf(fin, "%d%d%d", &a, &b, &c);
//    fclose(fin);
//    // ����������� �����
//    printf("�����: %d, %d, %d\n", a, b, c);
//
//    // ���������
//    p = a * b * c;
//
//    // ����������� ������
//    printf("p =  %d\n", p);
//
//    // ������ � �������� ����
//
//    // �������� ����
//    FILE* fout;
//    fout = fopen("D:\\Files\\out2.txt", "wt");
//    if (fout == NULL) {
//        printf("�������� ���� �� ��������");
//        return;
//    }
//    fprintf(fout, "%d", p);
//    fclose(fout);
//
//}

			// ������ 3 ( ����� �����)

//void main() {
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//	printf("������ 3\n");
//	
//	//�������� �����
//	int a, b, c, d, e;
//	//��������� ����� �����
//	int sum;
//	scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
//
//	printf("�����: %d, %d, %d, %d, %d\n", a, b, c, d, e);
//	//���������
//	sum = a + b + c + d + e;
//	printf("�������� ����� ����� = %d", sum);



	// ������ 4 ( ����� �����. ������ � �������)

//void main(){
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//	printf("������ 4\n");
//
//	//������ �� �������� �����
//
//	// �����, �������� �� �����
//	int a, b, c, d, e;
//	//�����, ��������� � �������� ����
//	int sum;
//
//		//������� ����
//
//	FILE* fin = fopen("D:\\Files\\in4.txt", "rt");
//	if (fin == NULL) {
//		printf("������� ���� �� ������");
//		return;
//	}
//	fscanf(fin, "%d%d%d%d%d", &a, &b, &c, &d, &e);
//	fclose(fin);
//	// ����������� ����� 
//	printf("�����: %d, %d, %d, %d, %d\n", a, b, c, d, e);
//
//	//��������� 
//	sum = a + b + c + d + e;
//	
//	//����������� ������
//	printf("sum = %d\n", sum);
//
//		//������ � �������� ����
//
//	//�������� ����
//	FILE* fout;
//	fout = fopen("D:\\Files\\out4.txt", "wt");
//	if (fout == NULL) {
//		printf("�������� ���� �� ��������");
//		return;
//	}
//	fprintf(fout,"�������� ����� = %d", sum);
//	fclose(fout);
//}


			//������ 5

//void main() {
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//	printf("������ 4\n");
//
//	//������ �� ������ �����
//
//	//������, ����������� �� �������� �����
//
//	int a[10]; // ����� ��������� �� ����� 10 ���������
//	int n; // ���-�� ���������� �� ����� ���������
//	int i; // ������� ��� ������ ��������� �������
//
//		// ������� ������
//	FILE* fin = fopen("D:\\Files\\in5.txt", "rt");
//	if (fin == NULL) {
//		printf("������� ���� �� ������");
//		return;
//	}
//	fscanf(fin, "%d", &n);
//
//	for(i = 0; i < n; i++) {
//		fscanf(fin, "%d", &a[i]);
//	}
//	fclose(fin);
//
//	//����������� �����
//	printf("����� ������ a[%d] = ", n);
//	for (i = 0; i < n; i++) {
//		printf("%d ", a[i]);
//	}
//
//		//��������� 
//	// ��������� ������� ��������������
//	int s = 0; // �����
//	for (i = 0; i < n; i++) {
//		s += a[i];
//	}
//
//	float sa = (float)s / n;
//
//	//����������� ���������
//	printf("\nsa = %f\n", sa);
//
//
//	//���������
//	// ��������� �������� ���������
//	for (i = 0; i < n; i++) {
//		if (a[i] > sa) {
//			a[i] *= 10;
//		}
//	}
//
//	// ����������� ������
//	printf("����� ������ a[%d] = ", n);
//	for (i = 0; i < n; i++) {
//		printf("%d ", a[i]);
//	}
//
//	// ������ � �������� ����
//
//	//�������� ����
//	FILE* fout;
//	fout = fopen("D:\\Files\\out5.txt", "wt");
//	if (fout == NULL) {
//		printf("�������� ���� �� ��������");
//		return;
//	}
//
//	fprintf(fout, "%d\n", n);
//
//	for (i = 0; i < n; i++) {
//		fprintf(fout, "%d", a[i]);
//	}
//	fclose(fout);
//
//}


			//������ 6

void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	printf("������ 6\n");

	//	//������ �� ������ �����
//
//	//������, ����������� �� �������� �����
//
	int a[10]; // ����� ��������� �� ����� 10 ���������
	int n; // ���-�� ���������� �� ����� ���������
	int i; // ������� ��� ������ ��������� �������

			//������� ������

	FILE* fin = fopen("D:\\Files\\in6.txt", "rt");
		if (fin == NULL) {
			printf("������� ���� �� ������");
			return;
		}
		fscanf(fin, "%d", &n);
	
		for(i = 0; i < n; i++) {
			fscanf(fin, "%d", &a[i]);
		}
		fclose(fin);
	
		//����������� �����
		printf("����� ������ a[%d] = ", n);
		for (i = 0; i < n; i++) {
			printf("%d ", a[i]);
		}

			//���������

// ��������� ������� ��������������
	int s = 0; // �����
	for (i = 0; i < n; i++) {
		s += a[i];
	}

	float sa = (float)s / n;
	
	//����������� ���������
	printf("\n ������� �������������� = %f\n ", sa);


		//���������
	// ��������� �������� ���������
		for (i = 0; i < n; i++) {
			if ((a[i] < sa) && (a[i] % 2 == 0)) {
				a[i] /= 2;
			}
		}
	
		// ����������� ������
	printf("����� ������ a[%d] = ", n);
		for (i = 0; i < n; i++) {
			printf("%d ", a[i]);
		}

		// ������ � �������� ����

	//�������� ����
	FILE* fout;
	fout = fopen("D:\\Files\\out6.txt", "wt");
	if (fout == NULL) {
		printf("�������� ���� �� ��������");
		return;
	}

	fprintf(fout, "%d\n", n);

	for (i = 0; i < n; i++) {
		fprintf(fout, "%d ", a[i]);
	}
	fclose(fout);


}