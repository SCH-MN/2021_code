#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//Debug��Release
//����֪ʶ
//Release�汾��һЩ�Ż� - ��ʹRelesse��Debug�汾���ֲ�ͬ

int main()
{
	int i = 0;
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	
	//�л���release�汾��i�ĵ�ַ�ͻ���������ַ��ǰ�棬�����ͱ���������ѭ��������Խ����ѭ��
	printf("%p\n", &i);//%p - ��ӡ��ַ
	printf("%p\n", &arr[9]);
	
	//for (i = 0; i <= 12; i++)
	//{
	//	arr[i] = 0;//Խ����� - ������ѭ�� - Ralease�汾�Ὣi���ڵ͵�ַ�� - ����ѭ���Ż���
	//	printf("hehe\n");               // - Debug�汾�Ὣi���ڸߵ�ַ�ϼ�ӵ���Խ��Ŀ���
	//}
	return 0;
}