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
	/*****������ �迭*****/

	/*
	int a = 10, b = 20, c = 30;
	int* ap[3]; ///������ �迭///

	int array[2][3] = { 10,20,30,40,50,60 };
	int(*p)[3]; ///�迭 ������///

	ap[0] = &a;
	ap[1] = &b;
	ap[2] = &c;

	p = array;
	*/

	/*****�����Ϳ� ���� �׸��� �����Ϳ� ���ڿ�*****/

	/*
	char array[] = { 'A','B','C','D' };
	///���ڻ��///
	printf("���� ��� : %c %c %c %c\n", 'A', 'B', 'C', 'D');

	///���ڹ迭///
	printf("���� �迭 ���� �� : %c %c %c %c\n", array[0], array[1], array[2], array[3]);

	array[0] = 'D';
	array[1] = 'C';
	array[2] = 'B';
	array[3] = 'A';

	printf("���� �迭 ���� �� : %c %c %c %c\n", array[0], array[1], array[2], array[3]);
	printf("���� �迭 array�� ũ�� : %d\n", sizeof(array));  ///���� �迭�� ũ�� 4

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

	//** �迭�� ���ڿ� ����, 0�� index���� �ϳ��� �� **//

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

	// const : ����� ������ �� ����ϴ� Ű���� //
	//ABCD��� ���ڿ� ��ü�� ���ͷ��ν� ����̱� ������ char �����Ϳ� �ٷ� ������ �� �����Ƿ� const Ű���带 ����Ͽ� ��������� ����//

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

	//���ڿ� ���� p�� �ᱹ ������ �迭 ���� p�� �����Ƿ� ȭ����� �� ���� p�� p[0] Ȥ�� p+0�� ���� �ǹ̸� ������ ����//
	//�迭�� ��Ÿ���� ������ �ּҴ� �迭�� 0�� index�� �ּҸ� �����ϰ� �ֱ� �����̴�//
	printf("%s\n", p);
	printf("%s\n", p+1);
	printf("%s\n", p+2);
	printf("%s\n", p+3);

	return 0;
	*/

	/*
	char array[] = "ABCD";
	const char* p = "ABCD";

	// p[0] = 'X'; //����, ���ڿ��� �迭�� �ƴ� �����Ϳ� ���� ������ ��� ���ڿ� ��ü�� ���ͷ� ����̹Ƿ� ����� ������ �� ����//
	//���� p�� ������ �����̹Ƿ� ���� �����ϰ� �ִ� ���� �ƴ϶� �ּҸ� �����ϰ� �ֱ� ������ ���� �����ϴ� �κ��� ������ �߻�//

	array[0] = 'X'; //���氡��, ������ �迭�� ���ڿ��̹Ƿ� �ش� �ε����� ����Ǿ� �ִ� ���� ���� ������//


	p = array; //���氡��//

	// array = array + 1; //����, array�� ǥ������ ��� �����Ϳ� ���� �ּҸ� �����ϰ� �־ ���� array = array+1��//
	// �ּҸ� �����ϰ� �ִ� ������ ���� �����Ϸ��� �ϱ� ������ ������ �߻���//

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

	//������ ������ �ٸ� �ּҸ� �������� ���ϰ� �Ѵ�//

	/*
	char a = 'A';
	char b = 'B';

	//const Ű����� ����� �����ϴ� Ű����//
	//const Ű���尡 Ÿ�� ��(�������� ��)�� ����Ǿ� ���� ��� �ش� ������ ���� ���� �Ҽ� ������, �ּҴ� ������ �� ����//
	char* const p = &a;

	//*�� ��� �� �ش� �����Ͱ� �����ִ� �ּ��� ���� ����ϰڴٴ� �ǹ�//
	*p = 'C'; //���氡��//

	printf("%c\n", *p);
	printf("%c\n", a);

	// p = &b; //����, ����� ������ ���� p�� ���� �����ҷ��� �� ��� constŰ����� ���Ͽ� ������ ������ �����
	//���� �Ǿ��� ������ ������ ������ ��(�ּ�)�� ������ �� ����//
	return 0;
	*/

	/*
	char a = 'A';
	char b = 'B';

	//const Ű���带 Ÿ���� ���ʿ� �Է��� ��� �ش� ������ ������ ���� �����ϴ� �Ϳ��� ������ ����//
	const char* p = &a;

	printf("%c\n", *p);
	printf("%c\n", a);

	p = &b;
	printf("%c\n", *p);
	printf("%c\n", b);

	a = 'X';
	b = 'C';
	// *p = 'D'; // ����, �ش� ������ ������ ���� �ִ� �ּ��� ���� ���� �ϴ� ���� �Ұ�����//

	return 0;
	*/
}