#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//2021-05-11_6-ָ�루���ף���_��ҵ

//��1�� ��ѡ��
//������δ����������
//int main()
//{
//	unsigned long pulArray[] = { 6,7,8,9,10 };
//	unsigned long* pulPtr;
//	pulPtr = pulArray;
//	*(pulPtr + 3) += 3;//�²⣺9���12��
//	printf("%d,%d\n", *pulPtr, *(pulPtr + 3));
//
//	return 0;
//}//���⿼���ָ�������

//��3�� ��ѡ��
//����������������
//struct stu
//{
//	int num;
//	char name[10];
//	int age;
//};
//void fun(struct stu* p)
//{
//	printf("%s\n", (*p).name);
//	return;
//}
//int main()
//{
//	struct stu students[3] = 
//	{ {9801,"shang",20},
//	  {9802,"wang",19},
//	  {9803,"zhao",18} 
//	};
//	fun(students + 1);
//
//	return 0;
//}//��ӡwang

//��8�� ��ѡ��
//�������Ҫ������ṹ���г�Աa�����ݣ����²���������ߴ��������ǣ���
//struct S
//{
//	int a;
//	int b;
//};
//int main()
//{
//	struct S a, * p = &a;
//	a.a = 99;
//	printf("%d\n",___ );//���ߴ�����������ʲô? B
//
//	return 0;
//}
//A. a.a ok
//B. *p.a err ��Ϊ.�����ȼ����ߣ��﷨��û���󣬵��ǲ���������������
//C, p->a ok
//D. (*p).a ok

//��9�� �����
//�ַ�������
//��Ŀ��дһ����������������һ���ַ���������
//�������Ե�ʱ��д��һ�������ӵ�
//#include<assert.h>
//#include<string.h>
//void reverse(char* str)
//{
//	//��һ������
//	//assert(str != NULL);
//	assert(str);//ͬ�ȹ���//�ǵõ�����Ӧ��
//
//	int len = strlen(str);//�ǵõ�����Ӧ��
//	char* left = str;
//	char* right = str + len - 1;
//
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[] = "abcdef";//fedcba
//	//char* arr[] = "abcdef";//����д���Ǵ����
//
//	reverse(arr);
//	printf("%s\n", arr);
//
//	return 0;
//}

//ֻҪ�����飬�Ϳ�����sizeof
//�ʵ���λ�ü�const���������е�λ�ö���

//��10�� �����
//��ӡ����
//��Ŀ����C��������Ļ���������ͼ��
//д�����Ĵ���Ҫ�������ԣ����Դ�ӡ8��10��13��֮���
//int main()
//{
//	int line = 0;
//	scanf("%d", &line);//����Ϊ7
//	//�ֿ���ӡ
//	//��
//	int i = 0;
//	for (i = 0; i < line; i++)
//	{
//		//��ӡһ��
//		//�ո�
//		int j = 0;
//		for (j = 0; j < line - 1 - i; j++)
//		{
//			printf(" ");//�����к��жϣ����д�ӡ�����ո�
//		}
//		//*
//		for (j = 0; j < 2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//��
//	for(i = 0; i < line - 1; i++)
//	{
//		//��ӡһ��
//		//�ո�
//		int j = 0;
//		for (j = 0; j <= i; j++)
//		{
//			printf(" ");
//		}
//		//*
//		for (j = 0; j < 2*(line-1-i)-1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//��11�� �����
//����ˮ����
//��Ŀ������ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�1ƿ��ˮ����20Ԫ�����Զ�����ˮ�����ʵ�֣�
int main()
{
	int money = 0;
	int total = 0;
	scanf("%d", &money);
	
	//������ - ���ֹ��ɺ�
	if (money > 0)
		total = 2 * money - 1;
	
	//����һ
	//int total = money;//ͳ�ƺ��˶���ƿ
	//int empty = money;
	////��ʼ�û� - ǰ��empty���ڵ���2
	//while (empty >= 2)
	//{
	//	total += empty / 2;
	//	empty = empty / 2 + empty % 2;
	//}

	printf("%d\n", total);

	return 0;
}