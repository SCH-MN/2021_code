#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//ʲô����䣬�ã������ľ���һ�����
//int main()
//{
//	printf("hehe\n");
//	3 + 5;
//	;//�����
//	return 0;
//}

//int main()
//{
//	int age = 160;
//
//	if (age < 18)
//		printf("����\n");
//	else if (age >= 18 && age < 26)
//		printf("����\n");
//	else if (age >= 26 && age < 40)
//		printf("����\n");
//	else if (age >= 40 && age < 60)
//		printf("׳��\n");
//	else if (age >= 60 && age <= 100)
//		printf("����\n");
//	else
//		printf("�ϲ���\n");
//
//
//	//˫��֧�����//if elseĬ��ֻ�ܿ���һ�仰
//	/*if (age >= 18)
//		printf("����\n");
//	else
//	{
//		printf("δ����\n");
//		printf("����̸����\n");*/
////	}//һ�������ţ���һ������飬����������Ĭ�Ͽ���һ�����
//	
//	/*if (age >= 18)
//		printf("����\n");*/
//	return 0;
//}

//����else
//int main() {
//	int a = 0; 
//	int b = 2; 
//	if (a == 1) //�ʴ˴�if�����㣬ֱ�ӽ���
//		if (b == 2) 
//			printf("hehe\n");
//	    else 
//			printf("haha\n"); //else ������������ifƥ��
//	return 0;
//}//Ҫ����һ�ֺõĴ�����

//������ - 
//������C/C++���

//int test()
//{
//	if (1)
//		return 0;
//	return 1;
//}
//int main()
//{
//	test();
//	return 0;
//}

//int main()
//{
//	int num = 3;
//	//if (num = 5)//�����ͱ���˸�����䣬��ԶΪ��
//	if(5 = num)//������д�������ʱ��ز������У��޷�����//�Ƚϵ�ʱ�򽫳����������
//	   printf("hehe\n");
//	
//	return 0;
//}

//�ж�һ�����Ƿ�Ϊ����
//int main()
//{
//	int num = 15;
//	if (1 == num % 2)//�õĴ�����
//		printf("����\n");
//	return 0;
//}

////����һ������
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	if (a % 2 == 1)
//	{
//		printf("%d", a);
//	}
//	else
//	{
//		return 0;
//	}
//	return 0;
//}

//���һ��һ��֮�������
//int main()
//{
	//int i = 0;
	//for (i = 1; i <= 100; i++)
	
	//C++
	//C99֧��������д
	//for (int i = 1;i <= 100;i++)
	//{
	//	if (i % 2 == 1)
	//	{
	//		printf("%d ",i);
	//	}
	//}

	//��1��ʼÿ��+2��ֱ�����������ʡȥ�ж�
//	for (int i = 1; i <= 100; i+=2)
//	{
//			printf("%d ", i);
//	}
//	return 0;
//}

//switch���

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("����һ\n");
//		break;
//	case 2:
//		printf("���ڶ�\n");
//		break;
//	case 3:
//		printf("������\n");
//		break;
//	case 4:
//		printf("������\n"); 
//		break;
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//		printf("������\n");
//		break;
//	case 7:
//		printf("������\n");
//		break;
//	}
//	return 0;
//}

//1-5������
//6-7��Ϣ��

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//	case 7:
//		printf("��Ϣ��\n");
//		break;//break �Ƿ����Ҫ��������
//	default://Ĭ��ѡ��,�ڷ�Χ֮���ѡ��//default Ҳ���Է��ڿ�ͷ������ϰ���Ϸ��ں���
//		printf("�������\n");
//		break;
//	}
//	return 0;
//}

int main() {
	int n = 1;
	int m = 2;
	switch (n)
	{
	case 1:m++;
	case 2:n++;
	case 3:
		switch (n)
		{//switch����Ƕ��ʹ�� 
		case 1:
			n++;
		case 2:
			m++;
			n++;
			break;
		}
	case 4:
		m++;
		break;
	default:
		break;
	}
	printf("m = %d, n = %d\n", m, n);
	return 0;
}