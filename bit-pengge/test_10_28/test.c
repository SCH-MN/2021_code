#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//ָ�����2
//Ұָ�� - ָ��ָ���λ���ǲ���֪��
//int main()
//{
	//�����p����һ��Ұָ��
	//int* p;//p��һ���ֲ���ָ�����,�ֲ���������ʼ���Ļ���Ĭ�������ֵ
	//*p = 20;//�Ƿ������ڴ���
	
	//2.Խ����� - �������
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i <= 10; i++)
//	{
//		*p = i;
//		p++;
//	}
//	return 0;
//}
//ָ��ָ��Ŀռ��ͷ� - Ҳ�����Ұָ��

//test()
//{
//	int a = 10;
//	return &a;
//}//����a��������������
//
//int main()
//{
//	int* p = test();
//	*p = 20;
//
//	return 0;
//}

//int main()
//{
//	int a = 0;//��ʼ������ϰ��
//	printf("a = %d\n", a);
//
//	return 0;
//}

//int main()
//{
	//��ǰ��֪��pӦ�ó�ʼ��Ϊ ʲô��ַ��ʱ��ֱ�ӳ�ʼ��ΪNULL
	//int* p = NULL;
	//��ȷ֪����ʼ����ֵ
	//int a = 10;
	//int* ptr = &a;

	//C���Ա����ǲ��������ݵ�Խ����Ϊ��
//	int* p = NULL;
//
//	if (p != NULL)
//	*p = 10;
//
//	return 0;
//}

//ָ������
//ָ��Ĺ�ϵ����
//#define N_VALUES 5
//int main()
//{
//	float values[N_VALUES];
//	float* vp;
//	//ָ��+-������ָ��Ĺ�ϵ����
//	for(vp = &values[0]; vp < &values[N_VALUES];)
//	{
//		//��ַ�ɵ͵��߱仯
//		*vp++ = 0;
//		//ָ��+����
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int* pend = arr + 9;
//	while (p<=pend)//�ñȽϵĹ�ϵ���㣬�ж��ǲ��ǵ������
//	{
//		printf("%d\n", *p);
//		p++;
//	}
//	return 0;
//}

//ָ�� - ָ��
//ָ���ȥֵ
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	char c[5];
//	//ָ���ָ�����
//	//ǰ�᣺����ָ��ָ��ͬһ��ռ�
//	printf("%d\n", &arr[9] - &c[0]);//>�ӡ�char *������int *�������Ͳ�����
//
//	//printf("%d\n", &arr[9] - &arr[0]);
//	//ָ��-ָ��õ�������ָ��֮���Ԫ�ظ���
//	return 0;
//}

#include<string.h>
//������д��
//int my_strlen(char* str)//strlen������ʵ��
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//�ݹ�ķ���

//ָ�� - ָ��ķ���
int my_strlen(char* str)
{
	char* start = str;
	while (*str != '\0')
	{
		str++;
	}
	return str - start;//ָ���������ָ����Ԫ�ظ���
}

int main()
{
	//strlen();//���ַ�������
	//�ݹ� - ���ݹ�ʱ���������ģ��ʵ��strlen���� - my_strlen
	//int len = strlen("abc");

	char arr[] = "abc";
	int len = my_strlen("abc");//����ȥ�����ַ������ӷ�a�ĵ�ַ - ��һ���ַ�ָ��������

	printf("%d\n",len);

	return 0;
}
