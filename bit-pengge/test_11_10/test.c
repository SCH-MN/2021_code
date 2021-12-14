#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//ģ��qsortʵ��һ��ð�������ͨ���㷨
//�Լ���ð������
void Swap(char* buf1, char* buf2, int width)//ע��Ϊʲô������Ҫ����width//���˿�ȣ����԰����ֽڽ��н���
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}//Ҫע�⺯�����ŷ�˳��
int cmp_int(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}
void print_arr(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
void bubble_sort(void* base,
	             int sz,
	             int width,
	             int (*cmp)(const void* e1, const void* e2)//����Ҫ�Ĳ��֣������������ʵ���˱Ƚϸ������͵�����ʱ���Ƚϵ�ͨ����
                //���Ǻ���ָ��ĸ߼�Ӧ��
                )
{
	int i = 0;
	//����
	for (i = 0; i < sz - 1; i++)
	{
		//һ�˵�����
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			//����Ԫ�رȽ�
			//arr[j] arr[j+1]
			if (cmp( (char*)base + j * width, (char*)base + (j + 1) * width) > 0)//����0�ͽ����������������������Ľ��
			{
				//����
				Swap( (char*)base + j * width, (char*)base + (j + 1) * width, width);
			}
		}
	}
}
void test3()
{
	//�������ݵ�����
	int arr[] = { 1,3,5,7,9,2,4,6,8,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	//����
	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
	//��ӡ
	print_arr(arr, sz);
}
int main()
{
	test3();

	return 0;
}
//���д�Ĵ���Ҳ��������ṹ�壬���������򣬰���������ȵ�

//const����*�ұߣ�ָ����������Ͳ��ܱ��޸�
//const����*��ߣ�ָ��ָ������ݲ��ܱ��޸�

//ͨ�ú�������֮һ�����ھ�

//void* - �޾�������ָ�룬���Դ���������͵ĵ�ַ��ʲô���ĵ�ַ�����Խ���