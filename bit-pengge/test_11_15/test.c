#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//�ַ��������ַ�������
//��������
//#include<string.h>
//#include<assert.h>
////1.�������汾
//int my_strlen(const char* str)//��������Ŀ��ֻ��Ϊ�����ַ����ĳ��ȣ�����ı��ַ���������const����Ӱ�ȫ
//{
//	int count = 0;//������
//	assert(str != NULL);//��ȻҪ��ָ����н����ã���ô��ʹ��֮ǰ����һ�¶��ԣ������ȫ
//
//	while (*str != '\0')//ֻҪ�����ڵ��������㣬�ͻ�һֱѭ��
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
////2.�ݹ�İ汾
////3.ָ��-ָ��İ汾
//int main()
//{
//	char arr[] = "abc";
//	//char arr[] = { 'a','b','c' };//�Ҳ���/0�������һ�������
//
//	//int len = strlen(arr);
//	//strlen���ܣ���ָ����λ�ÿ�ʼ��������/0ͣ��������/0�����볤����
//	int len = my_strlen(arr);//��Ȼ֪���˹��������ʵ�֣���ô���Լ�ģ����дһ������
//
//
//	printf("%d\n", len);
//	
//	return 0;
//}

//#include<string.h>
//int main()
//{
//	//if (strlen("abc") - strlen("abcdef")>0)//>
//	if (my_strlen("abc") - my_strlen("abcdef") > 0)//<=,��Ϊ��my_strlen�ķ���������int
//	{
//		printf(">\n");
//	}
//	else
//	{
//		printf("<=\n");
//	}
//	return 0;
//}
//strlen()�����ķ���ֵ���޷��������������е�3-6�Ľ������һ���൱����޷�������
//�⺯�����Խ�������������

//strcopy���������C�������õķǳ��㷺
#include<string.h>
int main()
{
	//char arr[20] = { 0 };
	char arr[20] = "##########";
	
	//arr = "hello";//err
	//char* p = "hello";
	//strcpy(arr, "hello");//string copy
	//���ԣ�������ԭ������û���в���
	char arr2[] = { 'a','b','c' };
	strcpy(arr, arr2);//������\0ʱ�����Ѿ�Խ����ʺþ���
	
	//Ҳ���ܿ����������鳤�ȵ����ݣ������������
	//�����ַ���Ҳ�����ԣ�Ŀ��һ���ǿ��޸ĵ�

	printf("%s\n", arr);

	return 0;
}
//Ҫѧ��ģ��ʵ��