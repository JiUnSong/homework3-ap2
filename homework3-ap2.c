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
	printf(" �̸�: ������       �й� : 2019038028 \n\n");
	int list[5];		// 5ĭ�� �迭 ����
	int *plist[5];		// ������ �迭 ����

	plist[0] = (int*)malloc(sizeof(int));		// plist[0]�� �ּҸ� heap�������� ����

	printf("list[0] \t =%d\n", list[0]);		// list[0]�� ���� ��Ÿ���� ��¹�(�ʱ�ȭ�� �ȵǾ� �־ ������ �� ���)
	printf("address of list \t= %p\n", list);	// list[0]�� �ּҸ� ��Ÿ���� ��¹�
	printf("address of list[0] \t= %p\n", &list[0]);	// list[0]�� �ּҸ� ��Ÿ���� ��¹�
	printf("address of list + 0 \t= %p\n", list + 0);	// list[0]�� ��Ÿ���� ��¹�
	printf("address of list + 1 \t= %p\n", list + 1);	// list + 1 == list[1]�� �ּҸ� ��Ÿ���� ��¹�
	printf("address of list + 2 \t= %p\n", list + 2);	// list + 2 == list[2]�� �ּҸ� ��Ÿ���� ��¹�
	printf("address of list + 3 \t= %p\n", list + 3);	// list + 3 == list[3]�� �ּҸ� ��Ÿ���� ��¹�
	printf("address of list + 4 \t= %p\n", list + 4);	// list + 4 == list[4]�� �ּҸ� ��Ÿ���� ��¹�
	printf("address of list[4] \t = %p\n", &list[4]);	// list[4]�� �ּҸ� ��Ÿ���� ��¹�

	free(plist[0]);		// ���� �Ҵ� ����

	return 0; // 0���� ��ȯ
}
