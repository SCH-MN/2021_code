#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//ģ��ʵ��strcpy
//#include<string.h>

//��-��
//void my_strcpy(char* dest, char* src)
//{
//	while (*dest != '\0')
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest = *src;
//}
//��һ�Ż�:
//void my_strcpy(char* dest, char* src)
//{
//	while (*dest != '\0')
//	{
//		*dest++ = *src++;//hello�Ŀ���
//	}
//	*dest = *src;//\0 �Ŀ��� 
//}
//��һ���Ż�
//void my_strcpy(char* dest, char* src)
//{
//	while (*dest++ = *src++)//�����жϣ��ֵ���ֵ���ʽ//\0 ��ASCII��ֵΪ0,0Ϊ�٣�ѭ����ֹ
//	{
//		;//hello�Ŀ���
//	}	
//}

//NULL��ָ���ǲ��ܽ��н����ò���
//#include<assert.h>
//void my_strcpy(char* dest, char* src)
//{
//	assert(src != NULL);//����//�������Ϊ�٣����Ծͻᱨ�����ṩ�ο���Ϣ
//	assert(dest != NULL);//�Գ���Ա�Ѻ�
//
//	while (*dest++ = *src++)//�����жϣ��ֵ���ֵ���ʽ//\0 ��ASCII��ֵΪ0,0Ϊ�٣�ѭ����ֹ
//	{
//		;//hello�Ŀ���
//	}
//}

//�����޶���������ֹ������
//#include<assert.h>
//��srcָ������ݿ���Ž�destָ��Ŀռ���
//�ӱ����Ͻ���ϣ��destָ������ݱ��޸ģ�srcָ������ݲ�Ӧ�ñ��޸�
//
//strcpy ����⺯�� ��ʵ���ص���Ŀ��ռ����ʼ��ַ
//
//char* my_strcpy(char* dest,const char* src)//��const����ʾ���д���
//{
//	assert(src != NULL);
//	assert(dest != NULL);
//	char* ret = dest;
//	while (*dest++ = *src++)//��С��д���� - �������//const���Է�ֹ���ִ���ĳ���
//	{
//		;//hello�Ŀ���
//	}
//	//return dest;//?? - �����ǲ��е�
//	return ret;//����Ŀ��ռ����ʼ��ַ
//}
//
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = a = b + 3;//��ֵ�Ǵ������������
//	
//	char arr1[20] = "xxxxxxxxxx";
//	char arr2[] = "hello";
//
//	//my_strcpy(arr1, arr2);//ģ��ʵ��strcpy
//
//	//strcpy(arr1, arr2);//1.Ŀ��ռ����ʼ��ַ 2.Դ�ռ����ʼ��ַ
//	//printf("%s\n", arr1);
//	printf("%s\n", my_strcpy(arr1, arr2));//��ʽ����
//
//
//	return 0;
//}


//const���Զ��庯�����βε�Ӧ��
//int main()
//{
//	//����1
//	//int num = 10;
//	//int* p = &num;
//	//*p = 20;
//	//printf("%d\n", num);
//
//	//����2
//	//const ���α�������������ͱ���Ϊ�����������ܱ��޸ģ����Ǳ����ϻ��ǳ�����
//	const int num = 10;
//	//num = 20;//err
//
//	int* const p = &num;
//	int n = 100;
//	//const����ָ�������ʱ��
//	//const�������*���ұߣ����ε���ָ�����p,��ʾָ��������ܱ��ı�
//	*p = 20;//����ָ��ָ������ݣ����Ա��ı�       
//	p = &n;
//
//
//	const int* p = &num;
//	//int const* p = &num;//������ͬ
//	int n = 100;
//	//const����ָ�������ʱ��
//	//const�������*����ߣ����ε���*p,��ʾָ��ָ������ݣ��ǲ���ͨ��ָ�����ı��
//	//*p = 20;	
//	p = &n;//����ָ����������ǿ����޸ĵ�
//
//
//
//	printf("%d\n", num);
//
//	return 0;
//}

//�к� Ů������Ƥ
//int const * const * const p//ͷ�Է籩

//�Լ����֣�ģ��ʵ��
//strlen �����ַ������ȵ� - һ��Ҫ�Լ�����д
//my_strlen
//1.const
//2.assert

//
//
//
//��׳��
//³����
//
//size_t - unsigned int

//�����ⲿ����
extern size_t my_strlen(const char* str);

int main()
{
	char arr[] = "abc";
	int len = my_strlen(arr);
	printf("%d\n", len);

	return 0;
}

//__cdecl ��������Լ��
//�����Դ��� - �﷨����
//�����Դ��� 
//����ʱ���� - ������� - ��������

//����˼ά��ͼ���߻�һ��ͼ