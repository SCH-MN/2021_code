#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//�ַ�����������ģ��ʵ��
//��������

//strstr - ��һ���ַ�����������һ���ַ���
//#include<string.h>
//#include<assert.h>
//char* my_strstr(const char* str1,const char* str2)//�˴��Ƚ��ѣ��漰��ָ��ĸ������ã������ظ�����Ƶ136
//{
//	//�������Ĺ���ּ�ڲ��ң������ı�ֵ���ʼ���const��ȽϺ�
//	//��Ϊ�������ָ�룬�ٲ��˽����ã����ȶ���assert
//	assert(str1 && str2);
//	//ǣ����һ���س�������
//	//���ü�¼str1��ʵʱλ��
//	const char* s1 = NULL;
//	const char* s2 = NULL;
//	const char* cp = str1;
//
//	if (*str2 == '\0')
//	{
//		return (char*)str1;
//	}
//	while (*cp)
//	{
//		s1 = cp;
//		s2 = str2;
//		while (*s1 && *s2 && (*s1 == *s2))//��Ӧ���ǵ�s1��s2��������
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return (char*)cp;
//		}
//		cp++;
//	}
//	return NULL;
//}
//int main()
//{
//	char arr1[] = "abbbcdef";
//	char arr2[] = "bbc";
//	//��arr1�в����Ƿ����arr2����
//	//char* ret = strstr(arr1, arr2);
//	char* ret = my_strstr(arr1, arr2);
//	
//	
//	//������ڣ����ص��ǵ�һ���ҵ�ʱ��λ��
//	//��������ڣ����ص��ǿ�ָ��
//	if (ret == NULL)
//	{
//		printf("û�ҵ�\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ�%s\n", ret);
//	}
//	return 0;
//}

//KMP - �ַ��������㷨
//����CSDN���� - ����Ա�������

//zpw@bitedu.tech
//zpw - ������
//bitedu - ����
//tech - ��׺

//198.168.3.122
//198
//168
//3
//122

//strtok - �и��ַ��� - ���ͨ�� ��ָ���ҵ���һ�ε�λ��
//��ϸ�� - ��Ƶ136
//#include<string.h>
//int main()
//{
//	char arr[] = "zpw@bitedu.tech0 hehe";
//	char* p = "@. ";
//	char tmp[30] = { 0 };
//    strcpy(tmp, arr);
//
//	char* ret = NULL;
//
//	for (ret = strtok(tmp, p);ret != NULL; ret = strtok(NULL, p))//NULL�ڴ˴���������һ���ж�����
//	{
//		printf("%s\n", ret);
//	}
//
//	return 0;
//}

//strtok�м��书�� - �ڲ���һ����̬��������ÿ�μ�ס��һ�β���ָ����λ��

//strerror - �Ѵ�����ת���ɴ�����Ϣ
//ʹ�ÿ⺯����ʱ��
//���ÿ⺯��ʧ�ܵ�ʱ�򣬶������ô�����
//
//int errno;//5//����һ��ȫ�ֵĴ�����
#include<string.h>
#include<errno.h>
int main()
{
	//printf("%s\n", strerror(0));
	//printf("%s\n", strerror(1));
	//printf("%s\n", strerror(2));
	//printf("%s\n", strerror(3));
	//printf("%s\n", strerror(4));
	//printf("%s\n", strerror(5));
	FILE* pf = fopen("test.txt", "r");//�Զ�����ʽ��һ���ļ�
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));
		return 1;
	}
	//...
	fclose(pf);
	pf = NULL;

	return 0;
}