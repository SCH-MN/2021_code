#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//ָ����ָ�������ָ��

//����ָ������� - ����
//ȡ������ָ������ĵ�ַ

//��������
//int arr[5];
//int (*p1)[5] - &arr;

//����ָ�������
//int* arr[5]
//int* (*p2)[5] - &arr;
//p2��ָ������ָ�����顿��ָ��

//����ָ������
//&����ָ������
//
//int(*p)(int, int);//����ָ��
//int(*p2[4])(int, int);//����ָ�������
//int(* (*p3)[4])(int, int) = &p2;//ȡ�����Ǻ���ָ������ĵ�ַ
//p3����һ��ָ�򡾺���ָ������顿��ָ�� - �������������

//int main()
//{
//	int arr[10];
//	//����Ԫ������ - int
//	//arr����������� int[10]
//	return 0;
//}

//�ص�����
//

//֮ǰд���ļ�����(switch����) - ���ݱ���֪ʶ�����޸�
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)//Sub���Ǽ���
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)//Sub���Ǽ���
//{
//	return x / y;
//}
//
//void menu()
//{
//	printf("******************************\n");
//	printf("****** 1. add   2. sub *******\n");
//	printf("****** 3. mul   4. div *******\n");
//	printf("********** 0.exit ************\n");
//	printf("******************************\n");
//}
//
//int Calc(int (*pf)(int, int))//���յ���ʵ���Ǻ���
//{
//	int x = 0;
//	int y = 0;
//	printf("������2��������>:");
//	scanf("%d %d", &x, &y);
//	return pf(x, y);
//}//�ص����� - ͨ��ָ��ȥ���ú���
////�������Լ򻯴��룬��������
////�ص�������Ҫ�õ�����ָ��
//
//int main()
//{
//	//����ָ�������Ӧ��
//	//������ - �������ͱ����ļӡ������ˡ���
//	//a&b a^b a|b a>>b a<<b a<b
//
//	int input = 0;
//	do
//	{
//		menu();
//		int x = 0; 
//		int y = 0;
//		int ret = 0;
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//
//		switch (input)
//		{
//		case 1:
//			ret = Calc(Add);//дһ������
//			printf("ret = %d\n", ret);
//			break;
//		case 2:
//			ret = Calc(Sub);
//			printf("ret = %d\n", ret);
//			break;
//		case 3:
//			ret = Calc(Mul);
//			printf("ret = %d\n", ret);
//			break;
//		case 4:
//			ret = Calc(Div);
//			printf("ret = %d\n", ret);
//			break;
//		case 0:
//			printf("�˳�����\n");
//			break;
//		default:
//			printf("ѡ���������ѡ��\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}

//qsort���� - ���������ʵ��

//���� - ð������
//void bubble_sort(int arr[], int sz)//ð�������㷨//����д�����ĺ�������ͨ��
//{
//	int i = 0;
//	//ð������ĵ�����
//	for (i = 0; i < sz - 1; i++)
//	{
//		//һ��ð������
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				//����
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//void print_arr(int  arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//int main()
//{
//	//����
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	print_arr(arr, sz);//����ǰ�ȴ�ӡ�������
//	bubble_sort(arr, sz);
//	print_arr(arr, sz);
//
//	return 0;
//}

//����дһ��ð�������������������ַ���
//bubble_sort_str();
//strcmp

//ʹ��qsort
#include <stdlib.h>
//void qsort(void* base,//base�д�ŵ��Ǵ����������е�һ������ĵ�ַ
//	       size_t num,//��������Ԫ�صĸ���
//	       size_t size,//���������е�һ��Ԫ�صĴ�С��λ���ֽ�
//	       int (*compar)(const void*, const void*)//�Ƚϴ����������е�2��Ԫ�صĺ���
//           );//4������

//
//qsort - �⺯�� - ������
//
//int cmp_int(const void* e1, const void* e2)//ɧ������������е�һ���ֻ���Ҫ�Լ����ո�ʽдһ�����ǳ����������ܲ���������һ��
//{
//	return *(int*)e1 - *(int*)e2;//��qsort���������һ�������Ľ��չ���
//  //�����ǽ���ֻҪ�ı�˴��߼��ϵ�˳�򼴿�
//}
//void print_arr(int  arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//int main()
//{
//	//����
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	//����
//	qsort(arr,sz,sizeof(arr[0]),cmp_int);
//	//��ӡ
//	print_arr(arr, sz);
//	return 0;
//}

//qsort��ʹ��
struct Stu
{
	char name[20];
	int age;
};

int sort_by_age(const void* e1, const void* e2)
{
	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
}
int sort_by_name(const void* e1, const void* e2)
{
	return ((struct Stu*)e1)->name - ((struct Stu*)e2)->name;
}
void test2()
{
	//ʹ��qsort��������ṹ������
	struct Stu s[3] = { {"zhangsan,30"},{"lisi",34},{"wangwu",20} };
	//abcq
	//adc
	//
	int sz = sizeof(s) / sizeof(s[0]);
	//��������������
	qsort(s, sz, sizeof(s[0]), sort_by_age);
	//��������������
	qsort(s, sz, sizeof(s[0]), sort_by_name);

}
int main()
{
	test2();

	//Ҫ����֤����Ļ����Լ�дһ����ӡ�ַ����ĺ���
	return 0;
}