#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//��ʽ����ת��
//����ת�� - ���ֽڳ��ģ����ȸ��ߵķ���ת��
//int main()
//{
//	int a = 4;
//	float f = 4.5f;
//	a + f;
//
//	return 0;
//}

//������������
//1.�����������ȼ�
//2.�������Ľ����
//3.�Ƿ������ֵ˳��
//int main()
//{
//	int a = 4;
//	int b = 5;
//	//int c = a + b * 7;//���ȼ������˼���˳��
//	int c = a + b + 7;//���ȼ��������ã�����Ծ�����˳��
//
//	return 0;
//}

//�������
//int fun()
//{
//	static int count = 1;//static���κ󣬴����˲��ᱻ����
//	return ++count;
//}
//
//int main()
//{
//	int answer;
//	//2 - 3 * 4
//	answer = fun() - fun() * fun();//���õ�˳�򲻶�
//	printf("%d\n", answer);//������٣�
//	return 0;
// }

int main()
{
	int i = 1;
	int ret = (++i) + (++i) + (++i);//VS12//linux gcc-10
	printf("%d\n", ret);//�漰���Ĵ���
	return 0;
}//�п���д��������û��Ψһȷ����ֵ - ���ִ�������������

//��ҵҪ��ʱ�����