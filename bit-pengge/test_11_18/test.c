#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//��һ�ڿ��ܽ᣺����ʹ�ÿ⺯����Ҫ����ͷ�ļ�
//strerror - ������ת���ɴ�����Ϣ����ӡҪ��������
//#include<errno.h>
//#include<string.h>
//int main()
//{
//
//	FILE* pf = fopen("test,txt", "r");//��ֻ������ʽ�򿪸��ļ�
//	//���ļ��ɹ�ʱ���᷵��һ��ָ��
//	//���ļ�ʧ��ʱ���᷵��NULL
//	//0 "no error"
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//���ļ�
//	//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//��strerror���Ƶ�һ������
//perror - �ǳ��򵥣�ֱ��������ӡ������Ϣ
//#include<string.h>
//int main()
//{
//
//	FILE* pf = fopen("test,txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");//���ȴ�ӡ"fopen: "�ٴ�ӡ����Ķ���
//		//1.���ȰѴ�����ת��Ϊ������Ϣ
//		//2.��ӡ������Ϣ���������Զ������Ϣ��
//		return 1;
//	}
//	//���ļ�
//	//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//�ַ����ຯ��

//#include<ctype.h>
//int main()
//{
//	char ch = '2';
//
//	//int ret = isdigit(ch);
//	//isdigit - ����������ַ������ط�0��ֵ��������������ַ�������0
//
//	int ret = islower(ch);
//	//islower - �ж���ĸ��Сд
//
//	printf("%d\n", ret);
//
//	return 0;
//}

//�ַ�ת��
//tolower
//toupper
int main()
{
	char arr[20] = { 0 };
	scanf("%s", arr);
	int i = 0;
	while (arr[i] != '\0')
	{
		if (isupper(arr[i]))
		{
			arr[i] = tolower(arr[i]);
		}
		printf("%c ", arr[i]);
		i++;
	}

	return 0;
}