#include <stdio.h>

typedef struct NODE {

	// 관리될 데이터
	int nData;

	// 데이터 관리를 위한 포인터
	struct NODE* next;
} NODE;


int main()
{
	NODE list[5] = {0};

	//데이터 값 입력
	list[0].nData = 100;
	list[1].nData = 200;
	list[2].nData = 300;
	list[3].nData = 400;
	list[0].nData = 500;

	// 가장 단순한 구현
	list[0].next = &list[1];
	list[1].next = &list[2];
	list[2].next = &list[3];
	list[3].next = &list[4];
	list[4].next = 0;
	
	// 출력
	for (int i = 0; i < 5; i++) {
		printf("list[%d]: %d\n", i, list[i].nData);
	}

	//pointer 사용
	NODE* pTmp = &list[0];
	while (pTmp != NULL) {
		printf("%p: %d\n", pTmp, pTmp->nData);
		//pTmp는 포인터로 찍은 배열 주소를 나타낸다.
		pTmp = pTmp->next;
	}

	return 0;
}