#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//ָ�������(��)

//������1
//int main()
//{
//	int a[5] = { 1,2,3,4,5 };
//	int* ptr = (int*)(&a + 1);
//	printf("%d,%d", *(a + 1), *(ptr - 1));
//
//	return 0; 
//}
//��������Ľ����ʲô�� 2,5

//������2
//���ڻ�ûѧ�ṹ�壬�����֪�ṹ��Ĵ�С��20���ֽ�
//struct Test
//{
//	int Num;
//	char* pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}* p;//�ṹ��ָ�����p
////����p ��ֵΪ0x100000�����±��ʽ��ֵ�ֱ�Ϊ���٣�
////��֪���ṹ��Test���͵ı�����С��20���ֽ�
//int main()
//{
//	printf("%p\n", p + 0x1);//0x100014
//	printf("%p\n", (unsigned long)p + 0x1);//0x100001//0x1 - 16���Ƶ�1
//	printf("%p\n", (unsigned int*)p + 0x1);//0x100004
//
//	return 0;
//}
//ָ�����;�����ָ�������

//������3
//int main()
//{
//	int a[4] = { 1,2,3,4 };
//	int* ptr1 = (int*)(&a + 1);
//	int* ptr2 = (int*)((int)a + 1);//֪ʶ�㣺С�δ洢����˴洢
//	//ptr2�Ƚϸ��ӣ�����ϸ˼��
//
//	printf("%x,%x", ptr1[-1], *ptr2);
//	return 0;
//}

//������4
int main()
{
	int a[3][2] = { (0,1),(2,3),(4,5) };//�˴��õ�С������ �����ű��ʽ
	int* p;
	p = a[0];
	printf("%d", p[0]);//p[0]�ȼ���*(p+0)
	return 0;
}