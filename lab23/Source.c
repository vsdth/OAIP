////#define _CRT_SECURE_NO_WARNINGS
////#include <stdio.h>
////#include <Windows.h>
////
////#define MAX_LEN 80
////char s[MAX_LEN];
////

//
//void main() {
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//	printf("�������� ����\n");
//	printf("��23 ������ 1\n");
//
//	// ������� ����
//	FILE* fin = fopen("C:\\Users\\vs4death\\Desktop\\VS Projects\\lab23\\Files\\text1.txt", "rt");
//	if (fin == NULL) {
//		printf("������� ���� �� ������");
//		return;
//	}
//
//	// �������� ����
//	FILE* fout;
//	fout = fopen("C:\\Users\\vs4death\\Desktop\\VS Projects\\lab23\\Files\\out1.txt", "wt");
//	if (fout == NULL) {
//		printf("�������� ���� �� ��������");
//		return;
//	}
//	
//	//� ����� ��� ���� �����
//	while (!feof(fin)) {
//		//��������� ������
//		if (fgets(s, MAX_LEN - 1, fin) != NULL) {
//			//���������� ����������� ������
//			for (int i = 0; s[i] != '\0'; i++) {
//				if (s[i] == '\t') {
//					s[i] = '%';
//				}
//			}
//			// ��������� ������ � �������� ����
//			fprintf(fout, "%s", s);
//			printf(">>%s<<\n", s);
//
//		}
//
//	}
//
//
//	// ������� �����
//	fclose(fin);
//	fclose(fout);
//	printf("��23 ������ 1 FINISH\n");
//}



						// ������ 2

//void main() {
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//	printf("�������� ����\n");
//	printf("��23 ������ 1\n");
//
//	// ������� ����
//	FILE* fin = fopen("C:\\Users\\vs4death\\Desktop\\VS Projects\\lab23\\Files\\text2.txt", "rt");
//	if (fin == NULL) {
//		printf("������� ���� �� ������");
//		return;
//	}
//
//	// �������� ����
//	FILE* fout;
//	fout = fopen("C:\\Users\\vs4death\\Desktop\\VS Projects\\lab23\\Files\\out2.txt", "wt");
//	if (fout == NULL) {
//		printf("�������� ���� �� ��������");
//		return;
//	}
//
//	//� ����� ��� ���� �����
//	while (!feof(fin)) {
//		//��������� ������
//		if (fgets(s, MAX_LEN - 1, fin) != NULL) {
//			//���������� ����������� ������
//			for (int i = 0; s[i] != '\0'; i++) {
//				s[i] = toupper(s[i]);
//			}
//			// ��������� ������ � �������� ����
//			fprintf(fout, "%s", s);
//			printf(">>%s<<\n", s);
//
//		}
//
//	}
//
//
//	// ������� �����
//	fclose(fin);
//	fclose(fout);
//	printf("��23 ������ 2 FINISH\n");
//}

					

								// ������ 3

//void main() {
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//	printf("�������� ����\n");
//	printf("��23 ������ 1\n");
//
//	// ������� ����
//	FILE* fin = fopen("C:\\Users\\vs4death\\Desktop\\VS Projects\\lab23\\Files\\text3.txt", "rt");
//	if (fin == NULL) {
//		printf("������� ���� �� ������");
//		return;
//	}
//
//	// �������� ����
//	FILE* fout;
//	fout = fopen("C:\\Users\\vs4death\\Desktop\\VS Projects\\lab23\\Files\\out3.txt", "wt");
//	if (fout == NULL) {
//		printf("�������� ���� �� ��������");
//		return;
//	}
//
//	//� ����� ��� ���� �����
//	while (!feof(fin)) {
//		//��������� ������
//		if (fgets(s, MAX_LEN - 1, fin) != NULL) {
//			//���������� ����������� ������
//			for (int i = 0; s[i] != '\0'; i++) {
//				if (s[i] != ' ' && s[i + 1] == ' ') {
//					s[i + 1] = '#';
//				}
//			}
//			// ��������� ������ � �������� ����
//			fprintf(fout, "%s", s);
//			printf(">>%s<<\n", s);
//
//		}
//
//	}
//
//
//	// ������� �����
//	fclose(fin);
//	fclose(fout);
//	printf("��23 ������ 3 FINISH\n");
//}


			// ������ 4

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <Windows.h>
//
//#define MAX_LEN 40
//
//int getNextDelim(FILE* fp, char token[]);
//int getNextWord(FILE* fp, char token[], int maxLen);
//
//char filename[] = "C:\\Users\\vs4death\\Desktop\\VS Projects\\lab23\\Files\\text4.txt";
//
//void main() {
//	printf("BEGIN!!!\n");
//
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//
//	// ��������� ���� � �������
//	FILE* fin = fopen(filename, "rt");
//	if (fin == NULL) {
//		// ���� ���� �� ������ ������� - �������� �� ����
//		printf("File %s doesn't opened!\n", filename);
//		return;
//	}
//
//
//	char token[MAX_LEN];
//	int res;
//
//	// ���� �� ����� �����
//	while (!feof(fin)) {
//		// ���� ���� ����������� - ����� ���
//		while (getNextDelim(fin, token)) {
//			// ������� ����������� � �������
//			printf("<DELIM>%s</DELIM>\n", token);
//		}
//		// ���� ���� ����� - ����� ���
//		if (getNextWord(fin, token, MAX_LEN)) {
//			// ������� ����� � �������
//			printf("<WORD>%s</WORD>\n", token);
//		}
//	}
//
//	// ��������� ���� � �������
//	fclose(fin);
//	printf("END!!!\n");
//
//}
//
//
//int isalpha_my(unsigned char ch);
//
//// ���������� 1 - ����  �� ����� �������� �����������.
//// � ���� ������ � token ������������ ������, ���������� 
//// ���� �����������.
//// ���� � ����� ��� �� ����������� - ���������� 0.
//// � ���� ������ ��������� token ������������.
//int getNextDelim(FILE* fp, char token[])
//{
//	int ch = getc(fp);
//	if (ch == EOF) {
//		return 0;
//	}
//	if (isalpha_my((unsigned char)ch)) {
//		ungetc(ch, fp);
//		return 0;
//	}
//	token[0] = (unsigned char)ch;
//	token[1] = '\0';
//		return 1;
//}
//
//// ���������� 1 - ����  �� ����� ��������� �����.
//// � ���� ������ � token ������������ ������, ���������� 
//// ��� �����. ������������� ��� ����� �� ������ maxLen ��������.
//// ���� � ����� �� ���� ����� - ���������� 0.
//// � ���� ������ token �������� ������ ������.
//int getNextWord(FILE* fp, char token[], int maxLen)
//{
//	int i = 0;
//	int ch;
//	while (((ch = getc(fp)) != EOF) && (i < maxLen - 1)) {
//		if (!isalpha_my((unsigned char)(ch))) {
//			break;
//		}
//		token[i++] = ch;
//	}
//	ungetc(ch, fp);
//	token[i] = '\0';
//		if (i == 0)
//			return 0;
//	return 1;
//}
//
//// ���������� 0 - ���� ch - �� �����.
//// ���������� 1 - ���� ch - �����.
//// ��������� �������� ��� ��������� ���� (� ������ < 128)
//// � ��� ������� ���� �� ��������� ANSI
//int isalpha_my(unsigned char ch) {
//	if (isalpha(ch))
//		return 1;
//
//	// ANSI ���������!!!
//	if (ch >= 192 && ch <= 223)
//		return 1;
//	if (ch >= 224 && ch <= 255)
//		return 1;
//
//	/*
//		if (ch >= '�' && ch <= '�') return 1;
//		if (ch >= '�' && ch <= '�') return 1;
//		if (ch >= '�' && ch <= '�')return 1;
//		if (ch == '�' ) return 1;
//		if (ch == '�') return 1;*/
//
//	return 0;
//}
//
//
//





				// ������ 5

//
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <Windows.h>
//
//
//char filenameIn[] = "C:\\Users\\vs4death\\Desktop\\VS Projects\\lab23\\Files\\text5.txt";
//char filenameHTML[] = "C:\\Users\\vs4death\\Desktop\\VS Projects\\lab23\\Files\\out5.html";
//
//void main() {
//	printf("BEGIN!!!\n");
//
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//
//	// ������� ���� ��������� (�������)
//	FILE* fin = fopen(filenameIn, "rt");
//	if (fin == NULL) {
//		// ���� ���� �� ������ ������� - �������� �� ����
//		printf("File %s doesn't opened!\n", filenameIn);
//		return;
//	}
//
//	// ������� HTML ���� (�������� ����)  
//	FILE* fout = fopen(filenameHTML, "wt");
//	if (fout == NULL) {
//		// ��������� ����� ������� �������� ������� ���� 
//		fclose(fin);
//		// ���� ���� �� ������ ������� - �������� �� ����
//		printf("File %s doesn't opened!\n", filenameHTML);
//		return;
//	}
//
//
//	// ������� � �������� ���� ��������� HTML ���������
//	fprintf(fout, "<!DOCTYPE html>");
//	fprintf(fout, "<html>");
//	fprintf(fout, "<head>");
//	fprintf(fout, "<meta http - equiv = \"Content-Type\" content = 	\"text/html; charset=utf-8\" />");
//	fprintf(fout, "<title>HTML Document</title>");
//	fprintf(fout, "</head>");
//	fprintf(fout, "<body>");
//
//	int ch;
//	while ((ch = getc(fin)) != EOF) {
//		// � HTML ���� ��������� ������ ��� ����������� 
//		// ������ "��� ����"
//		fprintf(fout, "%c", ch);
//
//		// ���� � ������ ��� ������ ����� ������ � 
//		// � HTML ��������� ��� <BR> - ����� ������
//		if (ch == '\n')
//			fprintf(fout, "<br>");
//
//	}
//
//	// ������� � HTML ����������� ���� ��������� HTML
//	fprintf(fout, "</body>");
//	fprintf(fout, "</html>");
//
//	// ��������� ���� � �������
//	fclose(fin);
//
//	// ��������� HTML ���� 
//	fclose(fout);
//	printf("END!!!\n");
//
//}

				// ������ 6


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>
#include <string.h>
#define MAX_LEN 500
char s[MAX_LEN];

int K;

void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	printf("��23 ������ 6\n");

	// ������� ����
	FILE* fin = fopen("C:\\Users\\vs4death\\Desktop\\VS Projects\\lab23\\Files\\text6.txt", "rt");
	if (fin == NULL) {
		printf("������� ���� �� ������");
		return;
	}

	// �������� ����
	FILE* fout;
	fout = fopen("C:\\Users\\vs4death\\Desktop\\VS Projects\\lab23\\Files\\out6.txt", "wt");
	if (fout == NULL) {
		printf("�������� ���� �� ��������");
		return;
	}
	
	//� ����� ��� ���� �����
	while (!feof(fin)) {
		//��������� ������

		if (fgets(s, MAX_LEN - 1, fin) != NULL) {
			//���������� ����������� ������
			K = 0;
			int len = strlen(s);

			for (int i = 0; i < len; i++) {
				if (s[i] == ';') {
					K++;;
				}
			}
			// ��������� ������ � �������� ����
			fprintf(fout, "%s%d\n",s, K);

		}

	}


	// ������� �����
	fclose(fin);
	fclose(fout);
	printf("��23 ������ 6 FINISH\n");
}






