#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//EOF
//int main()
//{
//	char password[20] = { 0 };
//	printf("����������:>");
//	scanf("%s", password);//������������������ǵ�ַ�����Դ˴�û��ȡ��ַ��
//	//gets���ո��ܶ�ȡ
//	
//	printf("��ȷ������(Y/N):>");
//	//��������
//	//getchar();//����'\n'����������
//	//ֻ������һ���ַ�
//	
//	//���������ж�ȶ���ַ�
//	int tmp = 0;//�ַ�Ҳ�������������洢
//	while ((tmp = getchar()) != '\n')//Ҫע��getchar��Ӧ�ó���
//	{
//		;//�����
//	}
//	
//	
//	int ch = getchar();
//	if (ch == 'Y')
//	{
//		printf("ȷ�ϳɹ�\n");
//	}
//	else
//	{
//		printf("ȷ��ʧ��\n");
//	}
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch>'9')//0-9�Ĳ���
//			continue;//ֻ��ӡ����
//
//		putchr(ch);
//	}
//	return 0;
//}

//int main()
//{
//	int i = 1;//��ʼ��
//
//	while (i <= 10)//�жϲ���
//	{
//		printf("%d ", i);
//		
//		i++;//��������
//
//	}
//	return 0;
//}

//forѭ��

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		/*if (i == 5)
//			break;*/
//		if (i == 5)
//			continue;//����5
//
//		printf("%d ", i);
//	}
//	return 0;
//}

//ѭ�����ڸı�ѭ������������
//���׳���
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//
//		printf("%d ", i);
//		int j = 0;
//		for (i = 0; j < 10; i++)
//		{
//			printf("hehe\n");
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)//��������ҿ������д��������дЧ������һЩ
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}

//int main()
//{
//	//�жϲ��ֶ��ʡ�� - �жϲ��ֺ�Ϊ�� - ��������ʡ��
//	for (;;)//��ѭ����ӡhehe
//	{
//
//		printf("hehe\n");
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			printf("hehe\n");
//		}
//	}
//	return 0;
//}

int main()
{
	int i = 0;
	int j = 0;
	for (; i < 3; i++)
	{
		for (; j < 3; j++)
		{
			printf("hehe\n");
		}
	}
	return 0;
}