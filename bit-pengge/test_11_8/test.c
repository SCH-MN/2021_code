#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//���� ��Ȥ�Ĵ���
//����1
//int main()
//{
//	(*( void(*)() )0)(/*�޲Σ����ô���*/);//�����������
//	//��0ǿ��ת���ɺ���ָ������
//	//��*���p��ɺ���ָ����� - ���Ӿ��Ǻ���ָ������
//
//	//����0��ַ���ĺ���
//	//�ú����޲Σ�����������void
//	//1.void(*)() - ����ָ������
//	//2.(void(*)())0 - ��0����ǿ������ת����������Ϊһ��������ַ
//	//3.*(void(*)())0 - ��0��ַ�����˽����ò���
//	//4.(*(void(*)())0)() - ����0��ַ���ĺ���
//
//	//���������������
//	//�Ƽ��顶C�����ȱ�ݡ�
//	return;
//}

//����2
//1/
void (*signal(int, void(*)(int)))(int);
//����ָ����������

typedef void(*pfun_t)(int);//��void(*)(int )�ĺ���ָ������������Ϊpfun_t
//typedef unsigned int uint;

//2. ����д����ȫ�ȼ�
pfun_t signal(int, pfun_t);

//1.signal��()�Ƚ�ϣ�˵��signal�Ǻ�����
//2.signal�����ĵ�һ��������������int���ڶ��������������Ǻ���ָ��
// �ú���ָ�룬ָ��һ������int������������void�ĺ���
//3.signal�����ķ�������Ҳ��һ������ָ��
// �ú���ָ�룬ָ��һ������Ϊint������������void�ĺ���
// signal��һ������������

//int main()
//{
//	//Ҫѧ���������ķ���
//
//	return 0;
//}

//����ָ������ - ��ź���ָ�������
// 
//����ָ�� int*
//����ָ�������� int* arr[5];
//
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)//Sub���Ǽ���
//{
//	return x - y;
//}
//int main()
//{
//	int (*pf1)(int,int) = Add;//pf����ָ������һ��ָ��
//	int (*pf2)(int, int) = Add;
//	int (*pfArr[2])(int, int) = (Add, Sub);//pfArr���Ǻ���ָ������
//
//	return 0;
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)//Sub���Ǽ���
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)//Sub���Ǽ���
//{
//	return x / y;
//}
//
//void menu()
//{
//	printf("******************************\n");
//	printf("****** 1. add   2. sub *******\n");
//	printf("****** 3. mul   4. div *******\n");
//	printf("********** 0.exit ************\n");
//	printf("******************************\n");
//}
//
//int main()
//{
//	//����ָ�������Ӧ��
//	//������ - �������ͱ����ļӡ������ˡ���
//	//a&b a^b a|b a>>b a<<b a<b
//
//	int input = 0;
//	do
//	{
//		menu();
//		int x = 0; 
//		int y = 0;
//		int ret = 0;
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//
//		switch (input)
//		{
//		case 1:
//			printf("������2��������:>");
//			scanf("%d %d", &x, &y);
//			ret = Add(x, y);
//			printf("ret = %d\n", ret);
//			break;
//		case 2:
//			printf("������2��������:>");
//			scanf("%d %d", &x, &y);
//			ret = Sub(x, y);
//			printf("ret = %d\n", ret);
//			break;
//		case 3:
//			printf("������2��������:>");
//			scanf("%d %d", &x, &y);
//			ret = Mul(x, y);
//			printf("ret = %d\n", ret);
//			break;
//		case 4:
//			printf("������2��������:>");
//			scanf("%d %d", &x, &y);
//			ret = Div(x, y);
//			printf("ret = %d\n", ret);
//			break;
//		case 0:
//			printf("�˳�����\n");
//			break;
//		default:
//			printf("ѡ���������ѡ��\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}//�ú���ָ�����飬���Լ򻯴���
//��������һ�����ܾ�Ҫ����һ��case

//��
int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)//Sub���Ǽ���
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)//Sub���Ǽ���
{
	return x / y;
}

void menu()
{
	printf("******************************\n");
	printf("****** 1. add   2. sub *******\n");
	printf("****** 3. mul   4. div *******\n");
	printf("********** 0.exit ************\n");
	printf("******************************\n");
}

int main()
{
	//����ָ�������Ӧ��
	//������ - �������ͱ����ļӡ������ˡ���
	//a&b a^b a|b a>>b a<<b a<b

	int input = 0;
	do
	{
		menu();

		//pfArr���Ǻ���ָ������
		//ת�Ʊ� - ��C��ָ�롷
		int (*pfArr[5])(int, int) = { NULL, Add, Sub, Mul, Div };//����ָ������
		int x = 0;
		int y = 0;
		int ret = 0;
		printf("��ѡ��:>");

		scanf("%d", &input);
		if (input >= 1 && input <= 4)
		{
			printf("������2��������:>");
			scanf("%d %d", &x, &y);
			ret = (pfArr[input])(x, y);
			printf("ret = %d\n", ret);
		}
		else if (input == 0)
		{
			printf("�˳�����\n");
			break;
		}
		else
		{
			printf("ѡ�����������ѡ��\n");
		}
	} while (input);//��inputΪ0ʱ���ж�Ϊ�٣�ѭ����ֹ���ʲ���Ҫ�صؼ�break;
	return 0;
}