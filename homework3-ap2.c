/*
 ============================================================================
 Name        : homework3-2.c
 Author      : Ji Un Song
 Version     :
 Copyright   :
 Description : ap2.c
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	printf(" 이름: 송지운       학번 : 2019038028 \n\n");
	int list[5];		// 5칸의 배열 선언
	int *plist[5];		// 포인터 배열 선언

	plist[0] = (int*)malloc(sizeof(int));		// plist[0]의 주소를 heap영역으로 보냄

	printf("list[0] \t =%d\n", list[0]);		// list[0]의 값을 나타내는 출력문(초기화가 안되어 있어서 쓰레기 값 출력)
	printf("address of list \t= %p\n", list);	// list[0]의 주소를 나타내는 출력문
	printf("address of list[0] \t= %p\n", &list[0]);	// list[0]의 주소를 나타내는 출력문
	printf("address of list + 0 \t= %p\n", list + 0);	// list[0]을 나타내는 출력문
	printf("address of list + 1 \t= %p\n", list + 1);	// list + 1 == list[1]의 주소를 나타내는 출력문
	printf("address of list + 2 \t= %p\n", list + 2);	// list + 2 == list[2]의 주소를 나타내는 출력문
	printf("address of list + 3 \t= %p\n", list + 3);	// list + 3 == list[3]의 주소를 나타내는 출력문
	printf("address of list + 4 \t= %p\n", list + 4);	// list + 4 == list[4]의 주소를 나타내는 출력문
	printf("address of list[4] \t = %p\n", &list[4]);	// list[4]의 주소를 나타내는 출력문

	free(plist[0]);		// 동적 할당 해제

	return 0; // 0값을 반환
}
