#include<stdio.h>
#include<stdlib.h>



//�����Ϳ� �Լ� �׸��� void�� ������//

// ���� ���� ȣ��(Call by Value), �ּҿ� ���� ȣ��(Call by Reference) //
int callByValue(int i);
int callByReference(int* i);
void callByValueRef();

void exampleSwap();
void swap(int *a,int*b);

int main(void)
{
	//callByValueRef(); //
	
	exampleSwap();
	
	return 0;
}

int callByValue(int i)
{
	i = i + 1;
	
	return i;
}

//�Լ��� ��� �� ���� ��ȯ�� �� ��ȯ���� 2�� �̻� ��ȯ�ϰ� ���� ��� ����� �� �ִ� ���//
// 1. �迭�� ��ȯ//
// 2. ����ü�� ��ȯ//
// 3. callByReference ����� ����Ͽ� �Ű������� ���� ���� �Է��Ͽ� ��ȯ//
	// callByReference ����� ����� ��� ��ȯ���� �ش� �Լ��� ����� ���������� ���Ǿ����� �ƴ��� �Ǵ��� �� ����//

int callByReference(int* i)
{

	*i = *i + 1;

	return *i;
}

void callByValueRef()
{
	int a = 10;
	int result1 = 0;
	int result2 = 0;

	result1 = callByValue(a);


	printf("a : %d\n", a);
	printf("result : %d\n", result1);

	printf("---------\n");

	result2 = callByReference(&a);

	printf("a : %d\n", a);
	printf("result : %d\n", result2);

}

/*
// ���� //
void exampleSwap()
{	
	// �Ʒ��� ���� a, b�� ���� ���� �����ϴ� ���α׷��� �ۼ��ϼ��� //
	// ������ ���� �����ϴ� �Լ��� �����ϰ� ������ ���� �����ؾ��� //
	// �Լ����� swap�� //

	int a = 100;
	int b = 200;

}
*/


void exampleSwap()
{
	int a = 100;
	int b = 200;
	
	printf("a : %d\n", a);
	printf("b : %d\n", b);
	
	printf("----------\n");

	swap(&a, &b);

	printf("a : %d\n", a);
	printf("b : %d\n", b);
}

void swap(int* a, int* b)
{
	int temp = 0;

	temp = *a;
	*a = *b;
	*b = temp;

}














