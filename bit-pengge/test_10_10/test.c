#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//goto������û�У�����

//int main()
//{
//flag:
//	printf("hehe\n");
//	printf("haha\n");
//
//	goto flag;//ȥflag����//��ѭ����
//	return 0;
//}//goto ����ʹ��������//��������ʹ��

//�ػ�����
//ֻҪ�������������Ծ���1�����ڹػ���������룺��������ȡ���ػ���
//
//shutdown -s -t 60
//shutdown -a
//

#include<string.h>
#include<stdlib.h>
//int main()
//{
//	//�ػ�
//	//C�����ṩ��һ��������system() - ִ��ϵͳ����
//
//	char input[20] = { 0 };//����������Ϣ//�������������Ǹ���ַ
//	system("shutdown -s -t 60");//system - stdlib.h
//	
//again:
//	printf("��ע�⣬��ĵ��Ծ���1�����ڹػ���������룺��������ȡ���ػ�\n");
//	scanf("%s",input);//�������������Ǹ���ַ
//
//	if (strcmp(input, "������") == 0)//�����ַ����Ƚ��ǲ���ʹ�� == ��Ӧ��ʹ��strcmp() - string compare
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		printf("�������,�ٸ���һ�λ���\n");
//		goto again;
//	}
//
//	return 0;
//}

//��whileѭ��������goto���
int main()
{
	//�ػ�
	//C�����ṩ��һ��������system() - ִ��ϵͳ����

	char input[20] = { 0 };//����������Ϣ//�������������Ǹ���ַ
	system("shutdown -s -t 60");//system - stdlib.h

	while (1)
	{
		printf("��ע�⣬��ĵ��Ծ���1�����ڹػ���������룺��������ȡ���ػ�\n");
		scanf("%s", input);//�������������Ǹ���ַ

		if (strcmp(input, "������") == 0)//�����ַ����Ƚ��ǲ���ʹ�� == ��Ӧ��ʹ��strcmp() - string compare
		{
			system("shutdown -a");
			break;
		}
		else
		{
			printf("�������,�ٸ���һ�λ���\n");
		}
	}
	return 0;
}

//ֻ�ж��Ƕ��ѭ����������ѭ����ʱ��
//��goto���������������

//goto ���ֻ����һ����������ת�����ܿ纯��

//void test()
//{
//flag:
//	printf("test\n");
//}
//
//int main()
//{
//	goto flag;//�纯���ǲ��е�//ֻ�ж��Ƕ����������ʱ���Ž���ʹ��
//	return 0;                 //ƽʱһ���ܴ���ʹ��棬�ܲ��þͲ���
//}