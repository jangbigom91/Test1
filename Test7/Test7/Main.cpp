#include<stdio.h>
#include<stdlib.h>



//�����Ϳ� �Լ� �׸��� void�� ������//

// ���� ���� ȣ��(Call by Value) //
int callByValue(int i);

int main(void)
{
	int a = 10;
	int result = 0;
	
	result = callByValue(a);

	printf("a : %d\n", a);
	printf("result : %d\n", result);
	
	
	return 0;
}

int callByValue(int i)
{
	i = i + 1;
	
	return i;
}
