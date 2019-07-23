#include<stdio.h>
#include<stdlib.h>

/***포인터 변수***/
int main(void)
{
	/*
	int a = 0, b = 0, c = 0;
	int* ip = NULL;

	ip = &a;
	*ip = 10;
	printf("%d %d %d %d\n", a, b, c, *ip);

	ip = &b;
	*ip = 20;
	printf("%d %d %d %d\n", a, b, c, *ip);

	ip = &c;
	*ip = 30;
	printf("%d %d %d %d\n", a, b, c, *ip);

	return 0;
	*/

	/*
	int num1 = 10;
	int num2 = 0;
	int* ip = NULL;

	ip = &num1;

	num2 = *ip + num1;
	printf("%d %d %d\n", *ip, num1, num2);

	return 0;
	*/

	/***다차원 포인터 변수***/

	/**/
	char c1 = 'A';
	char* cp = NULL;
	char** cpp = NULL;

	cp = &c1;
	cpp = &cp;

	printf("%c %x %x\n", c1, cp, cpp);
	printf("%c %x %x\n", &c1, &cp, &cpp);
	printf("%c %x %x\n", c1, *cp, **cpp);

	return 0;











}