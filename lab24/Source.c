#include <stdio.h>
#include <Windows.h>


						//������ 1

//long factorial(int n) {
//	if (n == 0) {
//		return 1;
//	}
//	long res = factorial(n - 1) * n;
//	return res;
//
//}
//
//void main() {
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//
//	int n = 4;
//	//printf("������� ��������, ��������� �������� �� ������ ��������� = ");
//	//scanf_s("%d", &n);
//	long f = factorial(n);
//	printf("%d! = %d", n, f);
//}


					// ������ 2.1 - 2.3

//void rec1(int n) {
//	printf(" %3d", n);
//	if (n > 1) {
//		rec1(n - 1);
//	}
//}
//
//void rec2(int n) {
//	if (n > 1) {
//		rec2(n - 1);
//	}
//	printf(" %3d", n);
//}
//
//
//void rec3(int n) {
//	printf(" %3d", n);
//	if (n > 1) {
//		rec3(n - 2);
//	}
//	printf(" %3d", n);
//}
//
//
//
//
//void main() {
//	rec1(11);
//	printf(" \nrec1 FINISH\n");
//
//	rec2(11);
//	printf("\n rec2 FINISH\n");
//
//	rec3(11);
//	printf("\n rec3 FINISH\n");
//}

				
							//������ 3.1 - 3.2
//void rec1(int n) {
//	printf(" %3d", n);
//	if (n > 1) {
//		rec1(n - 1);
//	}
//}
//
//void rec2(int n) {
//	if (n > 1) {
//		rec2(n - 1);
//	}
//	printf(" %3d", n);
//}
//
//
//void rec3(int n) {
//	printf(" %3d", n);
//	if (n > 1) {
//		rec3(n - 2);
//	}
//	printf(" %3d", n);
//}
//
//
//
//
//void main() {
//	rec1(7);
//	printf(" \nrec1 FINISH\n");
//
//	rec2(7);
//	printf("\n rec2 FINISH\n");
//
//	rec3(7);
//	printf("\n rec3 FINISH\n");
//}

					// ������ 4

void recEGE1(int n) {
	if (n >= 1) {
		printf(" %d", n);
		recEGE1(n - 1);
		recEGE1(n - 1);
	}
}

void main() {
	recEGE1(3);
}


				// ������ 5

//void F1(int n) {
//	if (n > 2) {
//		printf("%d\n", n);
//		F1(n - 3);
//		F1(n - 4);
//	}
//}
//
//void main() {
//	F1(10);
//}


			// ������ 6

//void F2(int n) {
//	printf("%d\n", n);
//	if (n < 5) {
//		F2(n + 1);
//		F2(n + 3);
//	}
//}
//
//void main() {
//	F2(1);
//}

		// ������ 7

//void G3(int n);
//
//void F3(int n) {
//	if (n > 0) {
//		G3(n - 1);
//	}
//}
//
//void G3(int n) {
//	printf("*");
//	if (n > 1) {
//		F3(n - 3);
//	}
//}
//
//void main() {
//	F3(11);
//}