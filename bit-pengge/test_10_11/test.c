#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//C�������κ�һ���������Ƿǳ���Ҫ��

//f(x) = 2*x+1;
//f(x, y) = x+y;

#include<string.h>

//strcpy - �����ַ���

//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "hello bit";
//
//	strcpy(arr1, arr2);
//	printf("%s\n", arr1);//��ӡarr1����ַ��� %s - ���ַ����ĸ�ʽ��ӡ
//
//	return 0;
//}//debug - ����Ա���԰汾//release - ��ʽ�����汾 - Ҳ�ǲ�����Ա���Եİ汾

//memory - ���� -�ڴ�
//memset - �ڴ����� - �����ڴ��
//ѧ�º�����ȫ��������C�����ĵ�ѧ - �ż�����һЩӢ����� - ʵ�ڲ���Ҳ���Է���
//ѧ���ѯ���ߵ�ʹ��

//size_t
int main()
{
	char arr[] = "hello bit";//��helloȫ������x
	memset(arr, 'x', 5);//�˴�memset�������ǰ�arr�ռ��ǰ5���ַ��滻��x
	printf("%s\n", arr);

	return 0;
}

//Ȼ���⺯�������ܸ����е��£������Զ��庯���ǳ���Ա����Ҫ���յ�

//�Զ��庯���Ƿǳ���Ҫ��

//p.s. ͼ�ο⣬����ʵ�ֽ��� - ���磺mfc��qt - C/C++��صĽ����
//��ѧ�ڹ���ѧ��ʽ