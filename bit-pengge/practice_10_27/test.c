#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//2021-04-23_��������ϰ����ҵ
//��2�� �����

//ʵ�ֺ���init() ��ʼ������ȫΪ0
//ʵ��print() ��ӡ�����ÿ��Ԫ��
//ʵ��reverse() ��������������Ԫ�ص�����

//void init(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//void print(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//void reverse(int arr[], int sz)//���� - ֻ�ǽ���������Ҫ�Ƚϴ�С
//{
//	int left = 0;
//	int right = sz - 1;
//
//	while (left < right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	print(arr, sz);
//	reverse(arr, sz);
//	print(arr, sz);
//	init(arr,sz);
//	print(arr, sz);
//
//	return 0;
//}

//��3�� �����
//��������
//������A�е����ݺ�����B�е����ݽ��н�����������һ����

int main()
{
	int arr1[] = { 1,3,5,7,9 };
	int arr2[] = { 2,4,6,8,10 };


	int sz = sizeof(arr1) / sizeof(arr1[0]);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		int tmp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = tmp;
	}

	int arr3[5] = { 0 };
	//��������������Ԫ�صĵ�ַ - 0x0012ff44
	//3 = 5;//err
	/*arr3 = arr1;
	arr1 = arr2;
	arr2 = arr3;*///����д���Ǵ����

	return 0;
}
//д�����塢ɨ�׵Ĳ��͡�