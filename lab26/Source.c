#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

struct Node {
	int data;
	struct Node* next;
};


struct Node* first = NULL;



void printList() {
	struct Node* ptr = first;
	while (ptr != NULL) {
		printf("(%d) -> ", ptr->data);
		ptr = ptr->next;
	}
	printf("NULL\n");
}


void addToHead(int value) {
	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));

	newNode->next = first;
	newNode->data = value;

	first = newNode;
}


int deleteFromHead() {
	int value = first->data;
	struct Node* delNode = first;
	first = first->next;
	free(delNode);
	return value;
}


int contains(int value) {
	struct Node* ptr = first;
	while (ptr != NULL) {
		if (ptr->data == value) {
			return 1;
		}
		ptr = ptr->next;
	}
	return 0;
}

// ������� ����� ���� ���������

int sum() {

	struct Node* ptr = first;
	int s = 0;
	while (ptr != NULL) {
		s += ptr->data;
		ptr = ptr->next;
	}
	return s;
}

// ������� ���-�� ������ ���������

int evenCount() {

	struct Node* ptr = first;
	int cnt = 0;

	while (ptr != NULL) {
		if (ptr->data % 2 == 0) {
			cnt++;
		}
		ptr = ptr->next;
	}

	return cnt;
}


// ��� �������� ��������� � 10 ���

void oddsX10() {
	struct Node* ptr = first;

	while (ptr != NULL) {
		if (ptr->data % 2 != 0) {
			ptr->data *= 10;
		}
		ptr = ptr->next;
	}

}

// i-�� ������� ��������� � 100 ���


void elementIx100(int i) {
	struct Node* ptr = first;
	int index = 0;
	while (ptr != NULL) {
		if (index == i) {
			ptr->data = ptr->data * 100;
			return;
		}
		ptr = ptr->next;
		index++;
	}
}

// ��� �������� ����� i-�� ��������� � 10 ���


void elementLeftIx10(int index) {
	struct Node* ptr = first;
	int i = 0;
	while (ptr != NULL) {
		if (i < index) {
			ptr->data = ptr->data * 10;
			
		}
		ptr = ptr->next;
		i++;
	}




}















void clearList() {
	while (first != NULL)
	{
		struct Node* delNode = first;
		first = first->next;
		free(delNode);
	}
}
		//------------------ ������ 1--------------

/*
void main() {
	first = NULL;
	printList();

	addToHead(10);
	printList();

	addToHead(20);
	printList();

	addToHead(30);
	printList();

	int x1 = deleteFromHead();
	printf("x1 = %d\n", x1);
	printList();

	int x2 = deleteFromHead();
	printf("x2 = %d\n", x2);
	printList();

	clearList();
	printf("\n\n\n\n\n");

	addToHead(400);
	addToHead(300);
	addToHead(200);
	addToHead(100);
	printList();

	printf("contains(100) = %d\n", contains(100));
	printf("contains(200) = %d\n", contains(200));
	printf("contains(300) = %d\n", contains(300));

	clearList();
	printList();

	printf("contains(100) = %d\n", contains(100));
	printf("contains(300) = %d\n", contains(300));
	printf("contains(200) = %d\n", contains(200));
	

}						*/



					// ������ 2
/*
void main() {
	printList();

	addToHead(1);
	addToHead(3);
	addToHead(6);
	addToHead(9);

	printList();

	printf("sum = %d\n", sum());

	clearList();
	printList();

	printf("sum = %d\n", sum());

	

}

*/
			

							// ������ 3 ���-�� ������
/*

void main() {
	printList();

	addToHead(1);
	addToHead(3);
	addToHead(6);
	addToHead(8);
	addToHead(0);
	addToHead(-2);

	printList();

	printf("Even numbers = %d\n", evenCount());

	clearList();
	printList();
	printf("Even numbers = %d\n", evenCount());


}

*/

			// ������ 4  ��� �������� *= 10
/*
void main() {
	printList();

	addToHead(1);
	addToHead(3);
	addToHead(6);
	addToHead(8);
	addToHead(-13);


	printList();

	oddsX10();

	printList();
	
	


}
*/

			// ������ 5 i-�� ������� ��������� � 100 ���
/*

void main() {
	printList();

	addToHead(1);
	addToHead(3);
	addToHead(6);
	addToHead(8);
	printList();

	elementIx100(2);

	printList();
	
	clearList();
	printf("\n\n\n\n\n");

	addToHead(1);
	addToHead(3);
	addToHead(6);
	addToHead(8);
	printList();

	elementIx100(1);

	printList();
}
*/

			// ������ 6 ��� �������� ����� i-�� ��������� � 10 ���

void main() {
	printList();

	addToHead(1);
	addToHead(3);
	addToHead(6);
	addToHead(8);
	printList();
	printf("\n\n\n\n\n");

	elementLeftIx10(1);

	printList();

	printf("\n\n\n\n\n");

	elementLeftIx10(2);

	printList();

	printf("\n\n\n\n\n");

	elementLeftIx10(4);

	printList();

}