#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>
#include <string.h>


					// ������ 1

//void main() {
//	
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//
//
//	char name[12];
//	printf("������� ���� ���:");
//	fgets(name, 11, stdin);
//	printf("���������� ����, %s\n", name);
//
//
//	{
//		int x;
//		scanf_s("%d", &x);
//
//	}
//
//
//
//}



				// ������ 2

//void main() {
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//
//	printf("������� ������ =");
//
//	int ch = getchar();
//
//	for (int c = ch; c <= ch + 19; c++) {
//		printf("'%c' (%d)\n", c, c);
//	}
//	printf("\n\n\n");
//
//	{
//		int x;
//		scanf_s("%d", &x);
//	}
//
//
//}


			// ������ 3

//void main() {
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//
//	printf("������� ������ =");
//
//	int ch = getchar();
//
//	for (int c = ch; c >= ch - 29; c--) {
//		printf("'%c' (%d)\n", c, c);
//	}
//	printf("\n\n\n");
//
//	{
//		int x;
//		scanf_s("%d", &x);
//	}
//
//
//}

			// ������ 4

//
//void main() {
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//
//	// ���� ������
//
//	char s[80];
//	printf("������� ������: ");
//	fgets(s, 79, stdin);
//
//
//	printf("\n �� ����� ������ s = \" %s\"", s);
//
//	int cnt = 0;
//	for (int i = 0; i < strlen(s); i++) {
//		if (s[i] == ' ') cnt++;
//	}
//
//	printf("\n ���������� �������� � ������ ������ ����� %d ", cnt);
//
//	{
//		int x;
//		scanf_s("%d", &x);
//	}
//}

				// ������ 5

//void main() {
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//
//	char s[80];
//	printf("������� ������: ");
//	fgets(s, 79, stdin);
//
//	printf("\n �� ����� ������ s = \" %s\"", s);
//
//	for (int i = 0; i < strlen(s); i++) {
//		if (s[i] == ' ') {
//			s[i] = '#';
//		}
//	}
//
//
//	printf("\n ������ ����� ��������� = \"%s\" ", s);
//
//}

				// ������ 6.1

//void main() {
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//
//	char s[80];
//	printf("������� ������: ");
//	fgets(s, 79, stdin);
//
//	printf("\n �� ����� ������ s = \" %s\"", s);
//
//	for (int i = 0; s[i] != '\0'; i++) {
//		if (isdigit(s[i])) {
//			s[i] = '$';
//		}
//	}
//
//	printf("\n ������ ����� ��������� = \" %s \" ", s);
//
//	
//}


			// ������ 6.2
			
//void main() {
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//
//
//
//
//	char s[80];
//	printf("������� ������: ");
//	fgets(s, 79, stdin);
//
//	printf("\n �� ����� ������ s = \" %s\"", s);
//
//	for (int i = 0; s[i] != '\0'; i++) {
//		if (s[i] >= '0' && s[i] <= '9')  {
//			s[i] = '$';
//		}
//	}
//
//	printf("\n ������ ����� ��������� = \" %s \" ", s);
//
//
//}


			// ������ 7.1


//void main() {
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//
//	char s[80];
//	printf("������� ������: ");
//	fgets(s, 79, stdin);
//
//	printf("\n �� ����� ������ s = \" %s\"", s);
//
//	for (int i = 0; s[i] != '\0'; i++) {
//		s[i] = toupper(s[i]);
//	}
//
//	printf("\n ������ ����� ��������� = \" %s \" ", s);
//}



			// ������ 7.2
//char toUpper(char c) {
//	if (c >= 'a' && c <= 'z') {
//		return c - 32; 
//	}
//	return c;
//}
//
//void main() {
//
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//	char s[80];
//	printf("������� ������: ");
//	fgets(s, 79, stdin);
//	printf("\n �� ����� ������ s = \" %s\"", s);
//
//	for (int i = 0; s[i] != '\0'; i++) {
//		s[i] = toUpper(s[i]);
//	}
//	
//
//	printf("\n ������ ����� ��������� = \" %s \" ", s);
//
//
//
//}


					// �������������� ����� ( ��� ������� �������������� ��������,  �������� �������� �_� (�������������).)

void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);




	char s[80];
	printf("������� ������: ");
	fgets(s, 79, stdin);

	printf("\n �� ����� ������ s = \" %s\"", s);

	for (int i = 0; s[i] != '\0'; i++) {
		if (s[i] == '*' || s[i] == '+' || s[i] == '-' || s[i] == '/')  {
			s[i] = '_';
		}
	}

	printf("\n ������ ����� ��������� = \" %s \" ", s);


}
