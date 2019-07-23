#include<stdio.h>
#include<stdlib.h>

/*******함수포인터 사칙연산*******/
void add(double num1, double num2) 
{
	double result;
	result = num1 + num2;
	printf("%lf + %lf = %lf입니다.\n", num1, num2, result);
}

void sub(double num1, double num2) 
{
	double result;
	result = num1 - num2;
	printf("%lf - %lf = %lf입니다.\n", num1, num2, result);
}

void sub2(double num1, double num2)
{
	double result;
	result = num1 * num2;
	printf("%lf * %lf = %lf입니다.\n", num1, num2, result);

}

void sub3(double num1, double num2)
{
	double result;
	result = num1 / num2;
	printf("%lf / %lf = %lf입니다.\n", num1, num2, result);
}


int main(void)
{
	
	/*******포인터 변수*******/
	
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

	/*******다차원 포인터 변수*******/

	/*
	char c1 = 'A';
	char* cp = NULL;
	char** cpp = NULL;

	cp = &c1;
	cpp = &cp;

	printf("%c %x %x\n", c1, cp, cpp);
	printf("%c %x %x\n", &c1, &cp, &cpp);
	printf("%c %x %x\n", c1, *cp, **cpp);

	return 0;
	*/
	
	/*
	int num1 = 10;
	int* ip = NULL;
	int** ipp = NULL;

	ip = &num1;
	ipp = &ip;

	printf("%d %x %x\n", num1, ip, ipp);
	printf("%x %x %x\n", &num1, &ip, &ipp);
	printf("%d %x %x\n", *&num1, *ip, **ipp);
	
	printf("%d %d %d\n", num1, *ip, **ipp);
	printf("%x %x %x\n", &num1, *ip, **ipp);

	return 0;
	*/
	
	/*
	int num1 = 10;
	int* ip1 = NULL;
	int** ip2 = NULL;
	int*** ip3 = NULL;

	ip1 = &num1;
	ip2 = &ip1;
	ip3 = &ip2;
	printf("%d %d %d %d\n", num1, *ip1, **ip2, ***ip3);
	printf("%x %x %x %x\n", &num1, ip1, *ip2, **ip3);
	printf("%x %x %x\n", &ip1,ip2,*ip3);
	printf("%x %x\n", &ip2,ip3);

	printf("%d %d\n", sizeof(int), sizeof(int*));
	printf("%d %d\n", sizeof(int**), sizeof(int***));

	printf("%d %d\n", sizeof(num1), sizeof(ip1));
	printf("%d %d\n", sizeof(ip2), sizeof(ip3));

	return 0;
	*/
	
	/*
	int num1 = 10;
	int* ip1 = NULL;
	int** ip2 = NULL;
	int*** ip3 = NULL;
	
	ip1 = &num1;
	ip2 = &ip1;
	ip3 = &ip2;

	printf("%d %d %d %d\n", num1, *ip1, **ip2, ***ip3);

	*ip1 = 20;
	printf("%d %d %d %d\n", num1, *ip1, **ip2, ***ip3);

	**ip2 = 30;
	printf("%d %d %d %d\n", num1, *ip1, **ip2, ***ip3);

	***ip3 = 40;
	printf("%d %d %d %d\n", num1, *ip1, **ip2, ***ip3);

	return 0;
	*/

	/*******주소의 가감산*******/

	/*
	char c = 'A';
	char* cp = NULL;
	char** cpp = NULL;

	cp = &c;
	cpp = &cp;

	printf("%d %d %d\n", &c, &cp, &cpp);
	printf("%d %d %d\n", &c + 1, &cp + 1, &cpp + 1);

	printf("%c %x %x\n", c, cp, cpp);
	printf("%c %x %x\n", c + 1, cp + 1, cpp + 1);
	
	return 0;
	*/

	/*
	int num = 10;
	int* ip = NULL;
	int** ipp = NULL;

	ip = &num;
	ipp = &ip;

	printf("%x %x %x\n", &num, &ip, &ipp);
	printf("%x %x %x\n", &num+1, &ip+1, &ipp+1);

	printf("%d %x %x\n", num, ip, ipp);
	printf("%d %x %x\n", num+1, ip+1, ipp+1);

	return 0;
	*/
	


	
	/*
	int array[3] = { 10,20,30 };
	int* ip = NULL;
	int** ipp = NULL;

	ip = array;
	ipp = &ip;

	printf("%d %d %d\n", array[0], array[1], array[2]);
	printf("%d %d %d\n", *(ip+0),*(ip+1),*(ip+2) );
	printf("%d %d %d\n", *(*ipp+0),*(*ipp+1),*(*ipp+2));

	return 0;
	*/
	
	/*******함수 포인터 -- 함수의 시작 주소를 저장하는 변수*******/

	/*
	double x = 3.1, y = 5.1;
	void(*pointer)(double, double);

	printf("add 함수의 주소 : %x\n", add);
	printf("함수 포인터의 주소 : %x\n", &pointer);

	pointer = add;
	pointer(x, y);
	add(x, y);

	pointer = sub;
	pointer(x, y);

	pointer = sub2;
	pointer(x, y);
	
	pointer = sub3;
	pointer(x, y);
	
	
	return 0;
	*/
	
	/*******포인터와 1차원 배열*******/

	/*
	int array[3] = { 10,20,30 };

	printf("%x %x %x\n", array, array + 0, &array[0]);
	printf("   %x %x\n",        array + 1, &array[1]);
	printf("   %x %x\n",        array + 2, &array[2]);
	printf("%d %d %d\n",sizeof(array),sizeof(array+0),sizeof(&array[0]));
	
	return 0;
	*/

	
	/*
	int array[3] = { 10,20,30 };	
	int* p = NULL;

	p = array;

	printf("%x %x %x\n", p, p + 0, &p[0]);
	printf("%x %x\n",       p + 1, &p[1]);
	printf("%x %x\n",       p + 2, &p[2]);

	return 0;
	*/






















}