#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//�ַ��������ַ�������
//�������� - ��
//strcat - �ַ���׷��
//#include<string.h>
//#include<assert.h>
//ģ��ʵ��
//char* my_strcat(char* dest,const char* src)
//{
//	char* ret = dest;//��Ϊ���Ҫ���������ַ����������ʼ��ʱ���ȴ�һ��
//	//��ΪҪ�õ�������ָ�룬��������֮ǰ�ȶ���һ��
//	assert(dest && src);//NULL == 0�����������ж�Ϊ�٣�����Ի������ʾ
//	
//	//1.�ҵ�Ŀ���ַ����е�\0
//	while (*dest)//��*destΪ\0ʱ���ж�Ϊ�٣�����ѭ��
//	{
//		dest++;
//	}
//	//2.Դ����׷�ӹ�ȥ������\0
//	while (*dest++ = *src++)//����ֵ���ʽ���������У�����ͬʱ���жϵ�����
//	{
//		;
//	}
//	return ret;//����Ŀ��ռ����ʼ��ַ
//}
//int main()
//{
//	char arr1[20] = "hello ";//ϣ���ں���׷���ַ�
//	char arr2[] = "world";
//
//	//strcat(arr1,"world");//�ַ���׷��(����)
//	//ʹ��ǰҪ��֤Ŀ��ռ����㹻�Ŀռ����׷�ӽ�ȥ�ַ���
//	//strcat(arr1, arr2);
//	//׷�ӵ��ַ����б��뱣֤��\0����Ϊ�Ḳ��ԭ���ַ�����\0
//	//���ص���Ŀ��ռ������
//
//	//my_strcat(arr1, arr2);//�������Ż�����������
//
//	printf("%s\n", my_strcat(arr1, arr2));
//	return 0;
//}
//ģ��ʵ�ֵ�Ŀ�ģ�
//1.����д���������
//2.�˽��˺���ʵ�ֵ�ԭ���Ų����ô�

//strcat�ܷ��Լ����Լ�׷�ӣ� - ѧ�����ͨ�׵Ľ���ԭ��
//int main()
//{
//	char arr[20] = "abcd";
//	strcat(arr, arr);//?// \0���������Ҳ���������״̬
//	//Ҫ���Լ����Լ�׷�ӣ�������strncat
//	printf("%s\n", arr);
//
//	return 0;
//}

//ѧϰҲ�벻��������
//������˹�˵��ݽ�����

//strcmp - �ַ����ȽϺ���
//����ʾ��
//int main()
//{
//	char* p = "obc";
//	char* q = "abcdef";

	//if (p > q)
	//{
	//	printf(">\n");
	//}
	//else
	//{
	//	printf("<=\n");
	//}
	//�����ǱȽϲ���ʲô��
	//p q�зŵĶ��ǵ�ַ - �Ƚϵ��ǵ�ַ

	//if ("obc" > "abcdef")//������ʽ�±ȽϵĻ��ǵ�ַ��Ҳ�ǲ��е�
	//{

	//}

	//strcmp - �ַ����Ƚϴ�С - �Ƚ϶�Ӧ�ַ���ASCII��ֵ
	//���������ַ����ĵ�ַ
	//����int
	//int ret = strcmp("abbb", "abq");//<0 - -1
	//int ret = strcmp("aqq", "aaa");//>0 - 1
//	int ret = strcmp("aaa", "aaa");//0
//
//	printf("%d\n", ret);
//
//
//	return 0;
//}

//�ַ����ĳ��ʹ���һ������
#include<string.h>
#include<assert.h>
//ģ��ʵ��strcmp
//����һ
//int my_strcmp(const char* s1,const char*s2)
//{
//	assert(s1 && s2);//ʹ��ǰ����һ��
//	while (*s1 == *s2)
//	{
//		if (*s1 == '\0')
//		//if (*s1 == '\0' || *s2 == '\0') - ����д���Բ��Ի��д���֤
//		{
//			return 0;
//		}
//		s1++;
//		s2++;
//	}//�������ڣ�������ѭ�����д�С�ıȽ�
//	if (*s1 > *s2)
//	{
//		return 1;
//	}
//	else
//	{
//		return -1;
//	}
//}

//����һ�Ż���
//int my_strcmp(const char* s1, const char* s2)
//{
//	assert(s1 && s2);//ʹ��ǰ����һ��
//	while (*s1 == *s2)
//	{
//		if (*s1 == '\0')
//			//if (*s1 == '\0' || *s2 == '\0') - ����д���Բ��Ի��д���֤
//		{
//			return 0;
//		}
//		s1++;
//		s2++;
//	}//�������ڣ�������ѭ�����д�С�ıȽ�
//	return *s1 - *s2;//��׼ֻ�涨�˲����ʱ���ش���orС��0�����֣���һ��������1 -1
//}//����Ȥ�Ļ�����VS2019��strcmp�⺯����һ��Դ���룬�ḻ��ʶ
//int main()
//{
//	char* p = "abcdef";
//	char* q = "abbb";//a��ASCII��ֵ��С
//	//int ret = strcmp(p, q);
//	int ret = my_strcmp(p, q);
//
//	if (ret > 0)
//	{
//		printf("p>q\n");
//	}
//	else if (ret < 0)
//	{
//		printf("p<q\n");
//	}
//	else
//	{
//		printf("p==q\n");
//	}
//	return 0;
//}

//strcpy - �ַ�������
//strcat - �ַ���׷��
//strcmp - �ַ����Ƚ�
//���Ȳ������Ƶ��ַ�������

//strncpy
//strncat
//strncmp
//���������Ƶ��ַ�������

//����һ��strncpy - ������һ����������
//int main()
//{
//	char arr1[20] = "abcdefghi";
//	char arr2[] = "qwer";
//
//	strncpy(arr1, arr2, 4);//�����˳��ȵ����ƣ��˴���4ָ����arr2���ַ�������
//	//strncpy(arr1, arr2, 6);//������ĳ��ȳ�����arr2���ַ������ȣ���ô����Ŀ�λ����\0����
//	//strcpy(arr1, arr2);//�����������ȫ�������ַ�����ʱ�򣬲��ῼ��Ŀ���ַ����Ĵ�С
//	printf("%s\n", arr1);//qwcdef
//	
//	return 0;
//}

//����һ��strncat - 
//int main()
//{
//	char arr1[20] = "hello ";
//	               //hello wor\0
//	char arr2[] = "world";
//	strncat(arr1, arr2, 10);//������Ĳ������ȳ�����arr2�ĳ��ȣ�Ҳֻ��׷�ӵ�\0Ϊֹ������strncpyҪ���
//	                        //strncpy���Ĳ��������Ƕ��٣���ô��Ҫ���㿽����
//	printf("%s\n", arr1);
//
//	return 0;
//}

//����һ��strncmp -
int main()
{
	char* p = "abcdef0";
	char* q = "abcqwert";

	//int ret = strcmp(p, q);
	int ret = strncmp(p, q, 4);//���յĲ����Ǽ������ͱȽ�ǰ�����ַ�

	printf("%d\n", ret);
	return 0;
}