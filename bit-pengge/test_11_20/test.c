#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//memcpy����Ӧ�ÿ������ص����ڴ�
//memmove�������Դ����ڴ��ص������
//#include<string.h>
//int main()
//{
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	//memcpy(arr1 + 2, arr1, 20);//1 2 1 2 1 2 1 8 9 10
//	memmove(arr1 + 2, arr1, 20);//1 2 1 2 3 4 5 8 9 10
//
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//
//	return 0;
//}
//���dest����src��ߣ���ôֻ�ܴ�ǰ����´
//���dest�����м䣬��ôֻ�ܴӺ���ǰ��
//�䵽src��β���ĺ��棬��ô��ǰ���󣬴Ӻ���ǰ������

//���ǿ���дһ�ּ򵥵� - �򵥵ķֽ�
//dest��src��� - ��ǰ����
//dest��src�ұ� - �Ӻ���ǰ

//ģ��ʵ��memmove
#include<assert.h>
void* my_memmove(void* dest,void* src, size_t num)
{
	void* ret = dest;
	assert(dest && src);
	if (dest < src)
	{
		//ǰ->��
		while (num--)//�˴���num--��ν������֮��
		{
			*(char*)dest = *(char*)src;
			dest = (char*)dest + 1;
			src = (char*)src + 1;
		}
	}
	if (dest > src)
	{
		//��->ǰ
		*((char*)dest + num) = *((char*)src + num);
	}

	return ret;
}
int main()
{
	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
	my_memmove(arr1, arr1+2, 20);//1 2 1 2 3 4 5 8 9 10

	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr1[i]);
	}

	return 0;
}
//memcpy - ֻҪʵ���˲��ص������Ϳ�����
//VS�е�ʵ�ּȿ��Կ������ص���Ҳ���Կ����ص��ڴ� - VS�еĳ����������
//��׼��û��ǿ��Ҫ��memcpy���Կ����ص��ڴ�

//ͨ������£������ص��ڴ潻��memmove�Ϳ�����