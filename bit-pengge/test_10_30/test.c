#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//�ṹ�����
//�ṹ��Ķ���ͳ�ʼ��
//struct B
//{
//	char c;
//	short s;
//	double d;
//};
//
//struct Stu//�´��������� �൱��int
//{
//	//��Ա����
//	struct B sb;//�ṹ��ĳ�Ա����������һ���ṹ��
//	char name[20];//����
//	int age;//����
//	char id[20];
//}s1,s2;//s1��s2Ҳ�ǽṹ�����
////s1��s2��ȫ�ֱ���

//int main()
//{
//	//s�Ǿֲ�����
//	struct Stu s = { {'w',20,3.14} ,"����",30,"202005034" };//����
//				 //�����ʹ����˶���
//				 
//	//�ṹ���Ա�ķ���
//	//. ->
//	//printf("%c\n", s.sb.c);
//	//printf("%s\n", s.id);
//
//	struct Stu* ps = &s;
//	printf("%c\n", (*ps).sb.c);
//	printf("%c\n", ps->sb.c);//ֻ��ָ�����ʹ��->
//
//	return 0;
//}


//�ṹ�崫����������д��
//struct B
//{
//	char c;
//	short s;
//	double d;
//};
//struct Stu//�´��������� �൱��int
//{
//	//��Ա����
//	struct B sb;
//	char name[20];//����
//	int age;//����
//	char id[20];
//};
//void print1(struct Stu t)//t���β�
//{
//	printf("%c %d %lf %s %d %s\n", t.sb.c, t.sb.s, t.sb.d, t.name, t.age, t.id);
//}
//void print2(struct Stu* ps)
//{
//	printf("%c %d %lf %s %d %s\n", ps->sb.c, ps->sb.s, ps->sb.d, ps->name, ps->age, ps->id);
//}
//int main()
//{
//	//s�Ǿֲ�����
//	struct Stu s = { {'w',20,3.14} ,"����",30,"202005034" };//����
//	//дһ��������ӡs������
//	//�ṹ�崫����������д��
//	print1(s);//��ֵ���� - ���ı���
//	print2(&s);//��ַ���� - ����һ���ṹ������ĵ�ַ
//	//��ַ���ø���
//	//1.��ַ��ʡ�ռ䣨��ֵ������Ҫ������ͬ��С�Ŀռ䣩��Ч�ʸ���
//	//2.ps���Ըı��������е�s
//
//	return 0;
//}

//����ѹջ
//��������Ҳ��ѹջ����
int Add(int x, int y)//ÿһ���������ö������ڴ��ջ���Ͽ���һ��ռ�
{
	int z = 0;
	z = x + y;
	return z;
}
int main()
{
	int a = 3;
	int b = 5;
	int c = 0;
	c = Add(a, b);


	return 0;
}

//��չ������ - ����ջ֡�Ĵ���������