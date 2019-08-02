#include<stdio.h>
#include<stdlib.h>



//포인터와 함수 그리고 void형 포인터//

// 값에 의한 호출(Call by Value), 주소에 의한 호출(Call by Reference) //
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

//함수를 사용 후 값을 반환할 때 반환값을 2개 이상 반환하고 싶을 경우 사용할 수 있는 경우//
// 1. 배열을 반환//
// 2. 구조체를 반환//
// 3. callByReference 방식을 사용하여 매개변수에 계산된 값을 입력하여 반환//
	// callByReference 방식을 사용할 경우 반환값을 해당 함수의 기능이 정상적으로 사용되었는지 아닌지 판단할 수 있음//

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
// 예제 //
void exampleSwap()
{	
	// 아래의 변수 a, b의 값을 서로 변경하는 프로그램을 작성하세요 //
	// 서로의 값을 변경하는 함수를 생성하고 서로의 값을 변경해야함 //
	// 함수명은 swap임 //

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














