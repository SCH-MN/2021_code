#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//��7�� �����
//��������ż��
//��Ŀ������һ���������飬ʵ��һ������
//�����������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣�
//���е�ż��λ������ĺ�벿��

void move(int arr[],int sz)
{
	int left = 0;
	int right = sz - 1;

	while (left<right)
	{
		//��ǰ������һ��ż��
		while ((left < right) && (arr[left] % 2 == 1))//Ҫ���ǵ���ֹԽ��
		{
			left++;
		}
		//�Ӻ���ǰ��һ������
		while ((left < right) && (arr[right] % 2 == 0))
		{
			right--;

		}
		//
		if (left < right)
		{
			int tmp = arr[left];
			arr[left] = arr[right];
			arr[right] = tmp;
		}
	}
}
void print(int arr[],int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)//����ѭ����ӡ����
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
}
int main()
{
	//���κ����ݶ��ܹ�����������ʳ 
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);

	move(arr, sz);//�ƶ�����
	print(arr, sz);//��ӡ����

	return 0;
}