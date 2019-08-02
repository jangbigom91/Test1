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

	/*
	char array[] = "ABCD";
	array[0] = 'X';

	printf("%s\n", array);

	printf("%x %x %x %x\n", &array[0], &array[1], &array[2], &array[3]);
	return 0;
	*/

	/*
	const char* p = "ABCD";

	//문자열 변수 p는 결국 문자의 배열 변수 p와 같으므로 화면출력 시 변수 p는 p[0] 혹은 p+0과 같은 의미를 가지고 있음//
	//배열을 나타내는 변수의 주소는 배열의 0번 index의 주소를 저장하고 있기 때문이다//
	printf("%s\n", p);
	printf("%s\n", p+1);
	printf("%s\n", p+2);
	printf("%s\n", p+3);

	return 0;
	*/

	/*
	char array[] = "ABCD";
	const char* p = "ABCD";

	// p[0] = 'X'; //에러, 문자열을 배열인 아닌 포인터에 직접 대입할 경우 문자열 자체는 리터럴 상수이므로 상수를 변경할 수 없음//
	//변수 p는 포인터 변수이므로 값을 저장하고 있는 것이 아니라 주소를 저장하고 있기 때문에 값을 변경하는 부분은 오류가 발생//

	array[0] = 'X'; //변경가능, 문자의 배열인 문자열이므로 해당 인덱스에 저장되어 있는 값을 변경 가능함//


	p = array; //변경가능//

	// array = array + 1; //에러, array만 표시했을 경우 포인터와 같이 주소를 저장하고 있어서 값을 array = array+1은//
	// 주소를 저장하고 있는 영역에 값을 대입하려고 하기 떄문에 오류가 발생함//

	printf("%s\n", p);
	printf("%s\n", array);
	*/

	/*
	const char* p = "Good morning";
	const char* q = "C-language";
	const char* array[2] = { "Good morning","C-language" };

	printf("%s\n", p);
	printf("%s\n", q);
	printf("----------\n");

	printf("%s\n",array[0]);
	printf("%s\n",array[1]);
	printf("----------\n");

	printf("%s\n", p + 5);
	printf("%s\n", q + 2);
	printf("----------\n");

	printf("%s\n", array[0] + 5);
	printf("%s\n", array[1] + 2);

	return 0;
	*/

	//포인터 변수에 다른 주소를 저장하지 못하게 한다//

	/*
	char a = 'A';
	char b = 'B';

	//const 키워드는 상수를 선언하는 키워드//
	//const 키워드가 타입 뒤(변수명의 앞)에 선언되어 있을 경우 해당 변수의 값은 변경 할수 있으나, 주소는 변경할 수 없음//
	char* const p = &a;

	//*를 사용 시 해당 포인터가 보고있는 주소의 값을 출력하겠다는 의미//
	*p = 'C'; //변경가능//

	printf("%c\n", *p);
	printf("%c\n", a);

	// p = &b; //에러, 상수인 포인터 변수 p의 값을 변경할려고 할 경우 const키워드로 인하여 포인터 변수가 상수로
	//선언 되었기 때문에 포인터 변수의 값(주소)을 변경할 수 없음//
	return 0;
	*/

	/*
	char a = 'A';
	char b = 'B';

	//const 키워드를 타입의 앞쪽에 입력할 경우 해당 포인터 변수의 값을 변경하는 것에는 문제가 없음//
	const char* p = &a;

	printf("%c\n", *p);
	printf("%c\n", a);

	p = &b;
	printf("%c\n", *p);
	printf("%c\n", b);

	a = 'X';
	b = 'C';
	// *p = 'D'; // 에러, 해당 포인터 변수가 보고 있는 주소의 값을 변경 하는 것은 불가능함//

	return 0;
	*/
}