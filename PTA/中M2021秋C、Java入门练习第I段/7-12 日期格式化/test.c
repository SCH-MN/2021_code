#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
    //��Ҫ���ַ����ͣ��ַ������ַ�����
    //��ǰ5���������ַ���λ�ò�������
    char arr[11] = { 0 };// \0����ռһ��λ�ã����Զ���ʱ����Ԫ�صĸ���Ҫ��1
    gets(arr);//�����ַ������÷���arr��Ҫ�����ַ����ĵ�ַ

    int i = 0;
    char temp = 0;
    //�ƶ�03-15-2017��λ��
    //��-201703-15
    for (i = 0; i < 5; i++)
    {
        temp = arr[i];
        arr[i] = arr[i + 5];
        arr[i + 5] = temp;
    }
    //�ƶ�-2017��λ��
    for (i = 0; i < 4; i++)
    {
        temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
    }
    //��2017-03-15
    printf("%s", arr);

    return 0;
}