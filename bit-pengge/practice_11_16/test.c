#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//2021-05-28_����ָ�������_��ҵ
// 
// 
// 
// 
//��5�� �����
//�ַ�������
//��Ŀ��ʵ��һ�����������������ַ����е�k���ַ�
//���磺
//ABCD����һ���ַ��õ�BCDA
//ABCD���������ַ��õ�CDAB
//#include<string.h>
//void string_left_rotate(char* str, int k)
//{
//	int i = 0;
//	int n = strlen(str);
//	for (i = 0; i < k; i++)
//	{
//		//ÿ������תһ���ַ�
//		char tmp = *str;//1
//		//2.�����n-1���ַ���ǰŲ��//����Ų���ķ����෴
//		int j = 0;
//		for (j = 0; j < n - 1; j++)
//		{
//			*(str + j) = *(str + j + 1);
//		}
//		//3.tmp�������
//		*(str + n - 1) = tmp;
//	}
//}
//int main()
//{
//	char arr[10] = "ABCDEF";
//	//char* p = "ABCDEF";//err,����д���Ǵ����
//	int k = 2;
//	//left_move();//������һ����Ȥ������//Ӣ��ˮƽ���Ǻ���Ҫ��
//	string_left_rotate(arr,k);
//	printf("%s\n", arr); 
//
//	return 0;
//}
//��������������ת��
//1.�������
//2.�ұ�����
//3.��������
//#include<string.h>
//#include<assert.h>
////������ת��
//void reverse(char* left, char* right)
//{
//	assert(left);//������ʹ��ָ��ǰ����һ�µ�ϰ��
//	assert(right);
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//void string_left_rotate(char* str, int k)
//{
//	assert(str);
//
//	int n = strlen(str);
//	reverse(str, str + k - 1);//��
//	reverse(str+k, str + n - 1);//��
//	reverse(str, str + n - 1);//����
//}
//int main()
//{
//	char arr[10] = "ABCDEF";
//	int k = 4;
//	string_left_rotate(arr, k);
//	printf("%s\n", arr);
//	return 0;
//}

//��6�� �����
//�ַ�����ת���
//��Ŀ��дһ���������ж�һ���ַ��Ƿ�Ϊ��һ���ַ�����ת֮����ַ���
//���磺����s1=AABCD��s2=BCDAA������1
//����s1=abcd��s2=ABCD������0

//AABCD����һ���ַ��õ�ABCDA
//AABCD���������ַ��õ�BCDAA
//AABCD����һ���ַ��õ�DAABC
#include<string.h>
int is_string_rotate(char* str1, char* str2)
{
	int i = 0;
	int n = strlen(str1);
	for (i = 0; i < n; i++)
	{
		//ÿ������תһ���ַ�
		char tmp = *str1;//1
		//2.�����n-1���ַ���ǰ�ƶ�
		int j = 0;
		for (j = 0; j < n - 1; j++)
		{
			*(str1 + j) = *(str1 + j + 1);
		}
		//3.tmp�������
		*(str1 + n - 1) = tmp;

		if (strcmp(str1, str2) == 0)//�Ƚ��ַ����ĺ���
		{
			return 1;
		}
	}
	return 0;
}
int main()
{
	char arr1[] = "AABCD";
	char arr2[] = "BCDAA";
	int ret = is_string_rotate(arr1, arr2);
	if (ret = 1)
	{
		printf("yes\n");
	}
	else
	{
		printf("no\n");
	}
	return 0;
}