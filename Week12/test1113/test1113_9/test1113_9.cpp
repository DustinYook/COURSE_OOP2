// C��� ����ó�� �н�
#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num;
	FILE *fPtr;
	fPtr = fopen("program.txt", "w"); // �����, ������ �߰��н�
	if (fPtr == NULL)
	{
		printf("Error");
		exit(1);
	}
	printf("Enter num: ");
	scanf("%d", &num);

	fprintf(fPtr, "%d", num);
	fclose(fPtr);

	system("pause");
	return 0;
}