#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//2021-05-23_�ַ�ָ���_��ҵ
//��10�� ��ѡ��
//int main()
//{
//	char str1[] = "hello bit.";
//	char str2[] = "hello bit.";//��ͬ������
//	char *str3 = "hello bit.";
//	char *str4 = "hello bit.";//�����ַ�����
//	if (str1 == str2)
//		printf("str1 and str2 are not same\n");
//	else
//		printf("str1 and str2 are not same\n");
//
//	if (str3 == str4)
//		printf("str3 and str4 are same\n");
//	else
//		printf("str3 and str4 are not same\n");
//
//	return 0;
//}

//��11�� �����
//���Ͼ���
//��Ŀ����һ�����־��󣬾����ÿ�д������ǵ����ģ�������ϵ����ǵ����ģ�
//���д�����������ľ����в���ĳ�������Ƿ����

//Ҫ��ʱ�临�Ӷ�С��O(N)

//1 2 3 4
//2 3 4 5
//4 5 6 7
//int find_num(int arr[3][3], int r, int c, int k)
//{
//	//����Ҫ��λ
//	int x = 0;
//	int y = c - 1;
//
//	while (x < r && y >= 0)
//	{
//		if (arr[x][y] < k)
//		{
//			x++;
//		}
//		else if (arr[x][y] > k)
//		{
//			y--;
//		}
//		else
//		{
//			//printf("%d %d\n", x, y);
//			return 1;//�ҵ���
//		}
//	}
//	return 0;//�Ҳ���
//}

//�Ľ���
int find_num(int arr[3][3], int* px, int* py, int k)
{
	//����Ҫ��λ
	int x = 0;
	int y = *py - 1;

	while (x < *px && y >= 0)
	{
		if (arr[x][y] < k)
		{
			x++;
		}
		else if (arr[x][y] > k)
		{
			y--;
		}
		else
		{
			*px = x;
			*py = y;//ͨ��ָ�뽫���������
			return 1;//�ҵ���
		}
	}
	return 0;//�Ҳ���
}
int main()
{
	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
	int k = 7;
	//����ҵ�����1���Ҳ�������0
	int x = 3;//��
	int y = 3;//��
	//&x,&y
	//1. �������
	//2. ����ֵ

	int ret = find_num(arr, &x, &y, k);//�ú���ʵ��
	if (ret == 1)
	{
		printf("�ҵ���\n");
		printf("�±��ǣ�%d %d\n", x, y);
	}
	else
	{
		printf("�Ҳ���\n");
	}

	//O(1)
	//N - 3 5 7
	// 
	//N - ���Ҵ�������������N�Σ�   2N 3N
	//N*N N*(N-1) -- O(n^2)

    //����һ�����֣�����˵�ң�7
	//�����ķ���������Ҫ��
	//int i = 0;
	//int j = 0;
	//for (i = 0; i < 3; i++)
	//{
	//	for (j = 0; j < 3; j++)
	//	{
	//		if (arr[i][j] == 7)
	//		{

	//		}
	//	}
	//}

	return 0;
}