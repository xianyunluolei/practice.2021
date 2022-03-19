//_CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	FILE* pf = fopen("test.txt", "r");
	fputc('b', pf);
	fclose(pf);
	pf = NULL;
	return 0;
}