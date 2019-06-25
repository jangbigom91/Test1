#include <stdio.h>
#include <stdlib.h>


typedef struct tagStudent
{
	int iNumber;
	int iKor;
	int iEng;
	int iMath;
}Student;


int main(void)
{
	/*
	Student tStudent;

	tStudent.iKor =	1;
	tStudent.iEng =	10;
	tStudent.iMath = 100;

	printf_s("%d\n", tStudent.iKor);
	printf_s("%d\n", tStudent.iEng);
	printf_s("%d\n", tStudent.iMath);

	system("pause");
	*/






	/*************************************
		** [구조체 배열 사용]

		* 학생 성적 관리 프로그램 만들기.

	**************************************/

	Student tStudent[3];
	int iCount = 3;

	for (int i = 0; i < iCount; i++)
	{
		printf_s("* 학생 점수 입력 *\n");

		printf_s("국어 점수 입력 : ");
		scanf_s("%d", &tStudent[i].iKor);

		printf_s("영어 점수 입력 : ");
		scanf_s("%d", &tStudent[i].iEng);

		printf_s("수학 점수 입력 : ");
		scanf_s("%d", &tStudent[i].iMath);

		tStudent[i].iNumber = i + 1;
	}

	if (true)
	{
		iCount--;

		tStudent[iCount - 1].iKor = tStudent[iCount].iKor;
		tStudent[iCount - 1].iEng = tStudent[iCount].iEng;
		tStudent[iCount - 1].iMath = tStudent[iCount].iMath;
		tStudent[iCount - 1].iNumber = tStudent[iCount].iNumber;
	}

	for (int i = 0; i < iCount; i++)
	{
		printf_s("\n");
		printf_s("학생 번호 : %d\n", tStudent[i].iNumber);
		printf_s("국어 점수 : %d\n", tStudent[i].iKor);
		printf_s("영어 점수 : %d\n", tStudent[i].iEng);
		printf_s("수학 점수 : %d\n", tStudent[i].iMath);
	}












	/*
	for (int i = 0; i < 3; i++)
	{
		printf_s("국어 점수 입력 : ");
		scanf_s("%d", &tStudent[i].iKor);

		printf_s("영어 점수 입력 : ");
		scanf_s("%d", &tStudent[i].iEng);

		printf_s("수학 점수 입력 : ");
		scanf_s("%d", &tStudent[i].iMath);
	}

	for (int i = 0; i < 3; i++)
	{
		printf_s("국어 점수 : %d\n", tStudent[i].iKor);
		printf_s("영어 점수 : %d\n", tStudent[i].iEng);
		printf_s("수학 점수 : %d\n", tStudent[i].iMath);
		printf_s("\n");
	}
	*/


	system("pause");

	return 0;
}