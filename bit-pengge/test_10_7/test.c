#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//while ѭ��
//int main()
//{
//	while (1)
//		printf("hehe\n");//ѭ����������һ�������
//	//��ѭ��
//
//	return 0;
//}

//break �� continue���÷�

//int main()
//{
//	int i = 1;
	//��whileѭ���У�break�������õ���ֹѭ��
	
	//��whileѭ���У�continue����������������ѭ��continue����Ĵ���
	//ֱ��ȥ�жϲ��֣����Ƿ������һ��ѭ��
	//while (i <= 10)
	//{
	//	if (5 == i)
	//		continue;//1 2 3 4��ӡ������ѭ����

	//	printf("%d ", i);
	//	i++;
	//}
	
	//while (i <= 10)
	//{
	//	if (5 == i)
	//		break;//��i==5ʱ�����������ѭ����
	//	
	//	printf("%d ", i);
	//	i++;
	//}
//	return 0;
//}

//getchar
//stdin ��׼����
//EOF - end of file - �ļ������ı�־

//int main()
//{
//	int ch = getchar();
//	//printf("%c\n", ch);
//	putchar(ch);//���һ���ַ�
//
//	return 0;
//}

int main()
{
	int ch = 0;
	//ctrl + z - getchar �Ͷ�ȡ����

	while ((ch = getchar()) != EOF)//��������ں���ʽ������˵��getchar()��ȡ���������ַ�
	{
		putchar(ch);
	}
	return 0;
}