#include <stdio.h>
#include <stdlib.h>


/*****************************
	** [Input] & [제어문]
******************************/


int main(void)
{
	/*********************
		** [Input]
	**********************/

	/*
	//** 변수 선언 및 초기화
	int iAge = 0;

	//** 해당 문자열을 출력.
	printf_s("나이를 입력하세요: ");

	//** 입력받는 함수.
	scanf_s("%d", &iAge);

	//** 입력 받은 값을 출력함.
	printf_s("당신의 나이는[%d] 입니다.\n", iAge);
	*/






	/************************
		** [분기문]

		1. if & else

		2. switch & dafault

	*************************/

	/*************************************************************

		** [if & else]

		* [PPT 참고 ->  (../Resource/Step_04.pptx)]

		** 예제)

		키와 몸무게를 입력받아 비만지수를 계산하고
		비만지수에 따른 구분을 출력하는 프로그램을 작성하시오


		* Tip

			* 필요한 정보를 요청 [ 키(Cm), 몸무게(kg) ]
			* 키(Cm) /= 100;
			* 비만지수(BMI) = 몸무게(kg) / ( 키(m) * 키(m) );

			* 18.5보다 작으면 저체중
			* 18.5보다 크고 22.99보다 작으면 정상
			* 23.00보다 크고 24.99보다 작으면 과체중
			* 25.00보다 크고 29.99보다 작으면 비만
			* 30.00보다 크면 고도비만

	**************************************************************/
	/*
	float fCm = 0;
	float fKg = 0;
	float fBMI = 0;

	printf_s("키 입력 : ");
	scanf_s("%f", &fCm);

	printf_s("몸무게 입력 : ");
	scanf_s("%f", &fKg);

	fCm /= 100;
	fBMI = fKg / (fCm * fCm);


	printf_s("당신의 BMI 수치는 [ %.2f ] 이므로 [", fBMI);

	if (18.5f > fBMI)
	{
		printf_s("저체중");
	}
	else if (18.6f < fBMI && 22.99 > fBMI)
	{
		printf_s("정상");
	}
	else if (23.00f < fBMI && 24.99f > fBMI)
	{
		printf_s("과체중");
	}
	else if (25.00f < fBMI && 29.99f > fBMI)
	{
		printf_s("비만");
	}
	else
	{
		printf_s("고도비만");
	}

	printf_s("] 입니다.");

	printf_s("\n");
	*/





	/*****************************************************************************

		** [Constant]

		* 리터럴 상수

			A. 우리 흔히 사용하는 변하지 않는 것들.
				(1, 2, 3, 4, 5 또는 ㄱ, ㄴ, ㄷ, ㄹ, ㅁ, ㅂ..... 등등)

		* 심볼릭 상수

			A. 어떤 사물을 표현하는 이름처럼 그 사물의 이름을 이야기 했을때
				우리는 자연스럽게 그 물건을 떠올린다.

				예를 들면 "스마트폰" 이라고 했을때
				우리는 흔히 사용하는 스마트폰을 떠올리게 되고,
				"TV" 라고 했을때 흔히 보던 TV를 떠올리게 되는것처럼
				상징성을 갖게되는 것이라 보면된다.

				반대로 "스마트폰" 이라고 헀을때 TV 를 떠올리지 않는것과 같다고 보면 된다.

				그 물건을 표현하는 상징성을 갖게되는 이름이라고 생각하면 된다.


		사용 예)

			[ const int NUMBER_ONE = 1; ]

			const 키워드의 역활은 변수를 상수화 시키는것이고,
			상수화된 변수는 선언된이후 값을 변경 할 수 없다.

	******************************************************************************/










	/****************************************************************************************

		** [switch & default]

		* [PPT 참고 ->  (../Resource/Step_04.pptx)]

		** 예제)
			태어날 달을 입력받고, 태어난 달에 해당하는 탄생석을 출력하는 프로그램을 작성하시오.

		* Tip
		1월 가넷,  2월 자수정,  3월 아쿠아마린,  4월 다이아몬드,  5월 에메랄드,  6월 진주,
		7월 루비,  8월 페리도트,  9월 사파이어,  10월 오팔,  11월 토파즈,  12월 터키석

	******************************************************************************************/

	int iMonth = 0;

	printf_s("태어난 달 입력 : ");
	scanf_s("%d", &iMonth);

	
		printf_s("당신의 탄생석은 ");

	switch (iMonth)
	{
	case 1:
		printf_s("가넷");
		break;
	case 2:
		printf_s("자수정");
		break;
	case 3:
		printf_s("아쿠아마린");
		break;
	case 4:
		printf_s("다이아몬드");
		break;
	case 5:
		printf_s("에메랄드");
		break;
	case 6:
		printf_s("진주");
		break;
	case 7:
		printf_s("루비");
		break;
	case 8:
		printf_s("페리도트");
		break;
	case 9:
		printf_s("사파이어");
		break;
	case 10:
		printf_s("오팔");
		break;
	case 11:
		printf_s("토파즈");
		break;
	case 12:
		printf_s("터키석");
		break;
	default:
		printf_s("잘못된 입력 값 입니다.\n");
	}

	printf_s("\n");


	system("pause");
	return 0;
}