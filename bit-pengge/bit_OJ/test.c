#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//��1�� ��ѡ��
//������Ľ����ʲô
//int cnt = 0;
//
//int fib(int n)
//{
//	cnt++;//ÿ����һ��fib������cnt�����1
//	if (n == 0)
//	{
//		return 1;
//	}
//	else if (n == 1)
//	{
//		return 2;
//	}
//	else
//		return fib(n - 1) + fib(n - 2);//��һ���ݹ麯�� - �ݹ麯������������ܶ����޲���
//}
//
//void main()
//{
//	fib(8);//67
//	printf("%d", cnt);
//}


//��2�� ��ѡ��
//�� ����Ľ��
//int main()
//{
//	int x = 1;
//	do
//	{
//		printf("%2d\n", x++);//��ӡ1Ȼ���1
//	} while (x--);//2Ϊ�棬Ȼ���1
//	return 0;
//}
//�ó�������Ľ���ǣ����޵�1.0��������ѭ��


//��3�� ��ѡ��
//ִ��֮��Ľ����ʲô
//int main()
//{
//	int i = 1;
//	int j;
//	j = i++;
//	printf("%d %d", i, j);
//	return 0;
//}


//��4�� ��ѡ��
//���³����k������ֵ��
//int main()
//{
//	int i = 10;
//	int j = 20;
//	int k = 3;
//	k *= i + j;//������������ȼ�//*=���ȼ�С��+
//
//	printf("%d", k);
//	return 0;
//}


//��5�� ��ѡ��
//���³��������������Ϊ
//#include<stdlib.h>
//
//int a = 1;
//void test()
//{
//	int a = 2;
//	a += 1;
//}
//int main()
//{
//	test();
//	printf("%d\n", a);//1
//	return 0;
//}


//��10�� ��ѡ��
//ִ�����´����ֵ
//int main()
//{
//	int a = 0;c = 0;
//
//	do
//	{
//		--c;//c=-1
//		a = a - 1;//a=-1
//	} while (a > 0);
//
//	return 0;
//}


//��12�� ��ѡ��
//����forѭ����ִ�д����� 4��
//int main()
//{
//	int x = 0;
//	int y = 0;
//	                  //ͬʱΪ��ʱ������뵽ѭ��
//	for (x = 0, y = 0; (y = 123) && (x < 4); x++)
//	{
//		;
//	}//1 1 1 1
//
//	return 0;
//}


//ACM�����1
//����С������
//������A��������B����С��������ָ�ܱ�A��B��������С��������ֵ
//���һ���㷨��������A��B����С������


//����һ���Ƚ���
//int main()
//{
//	int a = 0;
//	int b = 0;
//
//	//printf("�������������֣�");//��ʾ�Ƕ����
//	//����
//	scanf("%d %d", &a, &b);
//	//���ҳ�A��B�����ֵ
//	//m������С������
//	int m = a > b ? a : b;//ȡA��B�еĽϴ�ֵ
//	while (1)
//	{
//		if (m % a == 0 && m % b == 0)//�����������������С������
//		{
//			printf("%d\n", m);//��ӡ��С������
//			break;
//		}
//		m++;//�������m+1��һ��������
//	}
//
//	return 0;
//}

//���������ٶȸ���һЩ
//int main()
//{
//	int a = 0;
//	int b = 0;
//	//����
//	scanf("%d %d", &a, &b);
//	int i = 1;
//	for (i = 1;; i++)//Ҳ����д��whileѭ���ĸ�ʽ
//	{
//		if (a * i % b == 0)
//		{
//			printf("%d\n", a * i);//a*i������С������
//			break;
//		}
//
//	}
//
//	return 0;
//}
//��Щ�Ͻ�����Ŀ�����Χ���ñ�д����ʱ�������
//շת�����
//ͨ����⽫����ʵ�ֳ���


//ACM�����2
//�����ַ���
//��һ�仰�ĵ��ʽ��е��ã���㲻���á�
//����I like bejing�������������Ϊ��beijing like I
void reverse(char* left, char* right)
{
	while (left<right)
	{
		char tmp = 0;
		tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}

int main()
{
	char arr[100] = { 0 };
	//scanf("%s", arr);//�������������ַ����������ո�ͻ�ֹͣ
	//�����ַ���
	gets(arr);//��ȡһ��
	//���䷽����������ת��
	//1.�ַ������巭ת
	// gnijieb ekil I
	int len = strlen(arr);
	reverse(arr,arr+len-1);//дһ������
	//arr+len-1�����һ��
	 
	//2.ÿ����������
	//beijing like I
	char* start = arr;
	while (*start)//ֻҪ*start����'\0',�Ϳ��Լ���ѭ��
	{
		char* end = start;
		while (*end != ' ' && *end != '\0')//ֻҪend�����ڿո���ô���������
		{                                //��endΪ'\0'ʱ���ͽ�����
			end++;
		}
		//����һ������
		reverse(start, end - 1);
		if (*end == ' ')
			start = end + 1;//startҪ�����ո�
		else
			start = end;//Ϊ�˱�������'\0',��Ҫ��һ����������
	}	
	printf("%s", arr);
	return 0;
}