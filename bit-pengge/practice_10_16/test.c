#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//return ���У�ֻ�ܷ���һ��

//������Խ��������������������ݷ��ظ�������
//void test(int arr[])
//{
//	arr[0] = 1;
//	arr[1] = 2;
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	test(arr);
//	printf("%d\n", arr[0]);
//	printf("%d\n", arr[1]);
//	return 0;
//}

//��ָ�� ���ش���������������
//void test(int* p1,int *p2)//ֻҪ��*���У��ո���Ϊ�˷��㿴
//{
//	*p1 = 1;
//	*p2 = 2;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	test(&a,&b);
//	printf("%d\n", a);
//	printf("%d\n", b);
//	return 0;
//}

//ȫ�ֱ��� ���ش���������������
//int a;
//int b;
//void test()
//{
//	a = 1;
//	b = 2;
//}
//int a = 0;
//int b = 0;//������ں��棬����֮ǰһ��Ҫ����
//int main()
//{
//	test();
//	printf("%d\n", a);
//	printf("%d\n", b);
//	return 0;
//}

//���ű��ʽ - �� ���� �����ı��ʽ - �������ű��ʽ�Ľ�������һ�����ʽ�Ľ��
//exec((v1, v2), (c3, v4), v5, v6);
   //v2�Ľ�� //v3�Ľ��

//��7�� �����
//�����ж�����
//ʵ�ֺ����ж�year�ǲ������� - �Ͽν���

//��8�� �����
//������������
//ʵ��һ�������������������������� - �Ͽν���

//��9�� �����
//�˷��ھ���
//ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ��
//�磺����9������9*9�ھ�������12������12*12�ھ���

//1*1=1
//2*1=2 2*2=4
//3*1=3 3*2=6 3*3=9
//...

//void print_table(int n)
//{
//	int i = 0;
//	//��
//	for (i = 1; i <= n; i++)
//	{
//		//��ӡһ��
//		int j = 0;
//		for(j = 1; j <= i; j++)//��������ͬ��
//		{
//			printf("%d*%d=%d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//}//���볤�Ȳ�̫���ۣ�����Ŀ���Ѿ��ﵽ���ʲ����Ż�
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);//9
//	//����
//	print_table(n);//��ӡ��
//	//�����������Ƿǳ��ؼ��ģ�������������ֺ����Ĺ���
//	
//	return 0;
//}

//2021 - 04 -18_3-���������ף�_��ҵ
//��2�� ����Fun(2)��֤
//int Fun(int n)
//{
//	if (n == 5)
//		return 2;
//	else
//		return 2 * Fun(n + 1);
//}//�������Ĵ���������ظ������ļ���
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	
//	printf("%d", Fun(n));//Fun(2) = 16
//
//	return 0;
//}

//��3�� �����
//��ӡһ������ÿһλ
//�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ - �Ͽν���

//��4�� �����
//��׳�
//�ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳ˣ���������������⣩ - �Ͽν���

//��5�� �����
//strlen��ģ�⣨�ݹ�ʵ�֣�
//�ݹ�ͷǵݹ�ֱ�ʵ��strlen - �Ͽ�Ҳ����

//��6�� �����
//�ַ������򣨵ݹ�ʵ�֣�
//��дһ������ reverse_string(char* string) (�ݹ�ʵ��)
//ʵ�֣��������ַ����е��ַ��������У����������ӡ
//Ҫ�󣺲���ʹ��C�������е��ַ�����������
//���磺
//char arr[] = "abcdef";

//����֮����������ݱ�ɣ�fedcba
int my_strlen(char* str)
{
	int count = 0;
	while(*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}

//д��һ �ǵݹ�
//void reverse_string(char* str)
//{
//	int left = 0;
//	int right = my_strlen(str) - 1;//���ⲻ����ʹ�ÿ⺯����strlen������//��������Ҫ��һ��strlen
//	//ͨ���±��ҵ�Ԫ��//Ȼ�󽻻�
//	while (left < right)//����ʱ���������м��Ԫ��
//	{
//		char temp = str[left];
//		str[left] = str[right];
//		str[right] = tmp;
//		left++;
//		right--;
//	}
//
//}

//д���� �ǵݹ�
//void reverse_string(char* str)
//{
//	int left = 0;
//	int right = my_strlen(str) - 1;//���ⲻ����ʹ�ÿ⺯����strlen������//��������Ҫ��һ��strlen
//	//ͨ���±��ҵ�Ԫ��//Ȼ�󽻻�
//	while (left < right)//����ʱ���������м��Ԫ��
//	{
//		char tmp = *(str + left);//�ҵ��±�Ϊleft��Ԫ�أ������ò����� - str[left]//ͨ��ָ��ķ�ʽ��д��
//		*(str + left) = *(str + right);
//		*(str + right) = tmp;
//		left++;
//		right--;
//	}
//}

//д���� �ݹ�//ֻ��Ϊ����ϰ�ݹ���õݹ�ʵ�ֵ�
void reverse_string(char* str)
{
	char tmp = *str;//1
	int len = my_strlen(str);//�󳤶�
	*str = *(str + len - 1);//2
	*(str + len - 1) = '\0';//3
	//�ж�����//�ڵݹ��е����Լ�ʱ��һ��Ҫ�����������������ѭ��
	if (my_strlen(str + 1) >= 2)
	{
		reverse_string(str + 1);//4
	}

	*(str + len - 1) = tmp;//5
}

int main()
{
	char arr[] = "abcdef";

	reverse_string(arr);//����������˼���������ַ���//������arr������arr��Ԫ�صĵ�ַ
	printf("%s\n", arr);//fedcba

	return 0;
}