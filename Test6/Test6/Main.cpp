#include<stdio.h>
#include<stdlib.h>




void output(char *p, int arraysize)
{
	/*
	int i = 0;

	for (i = 0; i < arraysize; i++)
	{
		if (p[i] == '\n') {
			break;
		}
		printf("%c", p[i]);
	}
	*/
}

int main(void)
{
	/*****포안터 배열*****/
	
	/*
	int a = 10, b = 20, c = 30;
	int* ap[3]; ///포인터 배열///

	int array[2][3] = { 10,20,30,40,50,60 };
	int(*p)[3]; ///배열 포인터///

	ap[0] = &a;
	ap[1] = &b;
	ap[2] = &c;

	p = array;
	*/

	/*****포인터와 문자 그리고 포인터와 문자열*****/

	/*
	char array[] = { 'A','B','C','D' };
	///문자상수///
	printf("문자 상수 : %c %c %c %c\n", 'A', 'B', 'C', 'D');

	///문자배열///
	printf("문자 배열 변경 전 : %c %c %c %c\n", array[0], array[1], array[2], array[3]);

	array[0] = 'D';
	array[1] = 'C';
	array[2] = 'B';
	array[3] = 'A';

	printf("문자 배열 변경 후 : %c %c %c %c\n", array[0], array[1], array[2], array[3]);
	printf("문자 배열 array의 크기 : %d\n", sizeof(array));  ///문자 배열의 크기 4

	return 0;
	*/
	
	/*
	int i = 0;
	char array1[20] = {NULL};
	char* p = NULL;

	array1[0] = 'H';
	array1[1] = 'E';
	array1[2] = 'L';
	array1[3] = 'L';
	array1[4] = 'O';
	array1[5] = ' ';
	array1[6] = 'W';
	array1[7] = 'O';
	array1[8] = 'R';
	array1[9] = 'L';
	array1[10] = 'D';
	array1[11] = '\n';

	
	for (i = 0; i < sizeof(array1); i++)
	{
		if (array1[i] == '\n')
		{
			break;
		}
		printf("%c", array1[i]);

	}

	printf("\n-----\n");

	p = array1;

	for (i = 0; i < sizeof(array1); i++)
	{
		if (p[i] == '\n') 
		{
			break;
		}
		printf("%c", p[i]);
	}

	printf("\n-----\n");

	int size = sizeof(array1);
	output(array1, size);
	*/

	//** 배열에 문자열 대입, 0번 index부터 하나씩 들어감 **//
	
	/*
	char array[] = "ABCD";
	char* p1 = NULL;

	printf("%c %c %c %c %c\n", array[0], array[1], array[2], array[3], array[4]);
	printf("%d %d %d %d %d\n", array[0], array[1], array[2], array[3], array[4]);
	printf("%s \n", array);
	
	printf("%d\n", sizeof(array));

	printf("\n-----\n");
	
	p1 = array;
	printf("%c %c %c %c %c\n", p1[0], p1[1], p1[2], p1[3], p1[4]);
	printf("%d %d %d %d %d\n", p1[0], p1[1], p1[2], p1[3], p1[4]);
	printf("%s \n", p1);
	
	printf("\n-----\n");
	
	// const : 상수를 선언할 때 사용하는 키워드 //
	//ABCD라는 문자열 자체는 리터럴로써 상수이기 때문에 char 포인터에 바로 대입할 수 없으므로 const 키워드를 사용하여 상수포인터 선언//
	
	const char* p2 = "ABCD";
	printf("%c %c %c %c %c\n", p2[0], p2[1], p2[2], p2[3], p2[4]);
	printf("%d %d %d %d %d\n", p2[0], p2[1], p2[2], p2[3], p2[4]);
	printf("%s \n", p2);
	
	return 0;
	*/
}