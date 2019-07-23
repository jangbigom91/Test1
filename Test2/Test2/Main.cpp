#include <stdio.h>
#include <stdlib.h>


/*****************************
	** [Input] & [���]
******************************/


int main(void)
{
	/*********************
		** [Input]
	**********************/

	/*
	//** ���� ���� �� �ʱ�ȭ
	int iAge = 0;

	//** �ش� ���ڿ��� ���.
	printf_s("���̸� �Է��ϼ���: ");

	//** �Է¹޴� �Լ�.
	scanf_s("%d", &iAge);

	//** �Է� ���� ���� �����.
	printf_s("����� ���̴�[%d] �Դϴ�.\n", iAge);
	*/






	/************************
		** [�б⹮]

		1. if & else

		2. switch & dafault

	*************************/

	/*************************************************************

		** [if & else]

		* [PPT ���� ->  (../Resource/Step_04.pptx)]

		** ����)

		Ű�� �����Ը� �Է¹޾� �������� ����ϰ�
		�������� ���� ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�


		* Tip

			* �ʿ��� ������ ��û [ Ű(Cm), ������(kg) ]
			* Ű(Cm) /= 100;
			* ������(BMI) = ������(kg) / ( Ű(m) * Ű(m) );

			* 18.5���� ������ ��ü��
			* 18.5���� ũ�� 22.99���� ������ ����
			* 23.00���� ũ�� 24.99���� ������ ��ü��
			* 25.00���� ũ�� 29.99���� ������ ��
			* 30.00���� ũ�� ������

	**************************************************************/
	/*
	float fCm = 0;
	float fKg = 0;
	float fBMI = 0;

	printf_s("Ű �Է� : ");
	scanf_s("%f", &fCm);

	printf_s("������ �Է� : ");
	scanf_s("%f", &fKg);

	fCm /= 100;
	fBMI = fKg / (fCm * fCm);


	printf_s("����� BMI ��ġ�� [ %.2f ] �̹Ƿ� [", fBMI);

	if (18.5f > fBMI)
	{
		printf_s("��ü��");
	}
	else if (18.6f < fBMI && 22.99 > fBMI)
	{
		printf_s("����");
	}
	else if (23.00f < fBMI && 24.99f > fBMI)
	{
		printf_s("��ü��");
	}
	else if (25.00f < fBMI && 29.99f > fBMI)
	{
		printf_s("��");
	}
	else
	{
		printf_s("������");
	}

	printf_s("] �Դϴ�.");

	printf_s("\n");
	*/





	/*****************************************************************************

		** [Constant]

		* ���ͷ� ���

			A. �츮 ���� ����ϴ� ������ �ʴ� �͵�.
				(1, 2, 3, 4, 5 �Ǵ� ��, ��, ��, ��, ��, ��..... ���)

		* �ɺ��� ���

			A. � �繰�� ǥ���ϴ� �̸�ó�� �� �繰�� �̸��� �̾߱� ������
				�츮�� �ڿ������� �� ������ ���ø���.

				���� ��� "����Ʈ��" �̶�� ������
				�츮�� ���� ����ϴ� ����Ʈ���� ���ø��� �ǰ�,
				"TV" ��� ������ ���� ���� TV�� ���ø��� �Ǵ°�ó��
				��¡���� ���ԵǴ� ���̶� ����ȴ�.

				�ݴ�� "����Ʈ��" �̶�� ������ TV �� ���ø��� �ʴ°Ͱ� ���ٰ� ���� �ȴ�.

				�� ������ ǥ���ϴ� ��¡���� ���ԵǴ� �̸��̶�� �����ϸ� �ȴ�.


		��� ��)

			[ const int NUMBER_ONE = 1; ]

			const Ű������ ��Ȱ�� ������ ���ȭ ��Ű�°��̰�,
			���ȭ�� ������ ��������� ���� ���� �� �� ����.

	******************************************************************************/










	/****************************************************************************************

		** [switch & default]

		* [PPT ���� ->  (../Resource/Step_04.pptx)]

		** ����)
			�¾ ���� �Է¹ް�, �¾ �޿� �ش��ϴ� ź������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

		* Tip
		1�� ����,  2�� �ڼ���,  3�� �����Ƹ���,  4�� ���̾Ƹ��,  5�� ���޶���,  6�� ����,
		7�� ���,  8�� �丮��Ʈ,  9�� �����̾�,  10�� ����,  11�� ������,  12�� ��Ű��

	******************************************************************************************/

	int iMonth = 0;

	printf_s("�¾ �� �Է� : ");
	scanf_s("%d", &iMonth);

	
		printf_s("����� ź������ ");

	switch (iMonth)
	{
	case 1:
		printf_s("����");
		break;
	case 2:
		printf_s("�ڼ���");
		break;
	case 3:
		printf_s("�����Ƹ���");
		break;
	case 4:
		printf_s("���̾Ƹ��");
		break;
	case 5:
		printf_s("���޶���");
		break;
	case 6:
		printf_s("����");
		break;
	case 7:
		printf_s("���");
		break;
	case 8:
		printf_s("�丮��Ʈ");
		break;
	case 9:
		printf_s("�����̾�");
		break;
	case 10:
		printf_s("����");
		break;
	case 11:
		printf_s("������");
		break;
	case 12:
		printf_s("��Ű��");
		break;
	default:
		printf_s("�߸��� �Է� �� �Դϴ�.\n");
	}

	printf_s("\n");


	system("pause");
	return 0;
}