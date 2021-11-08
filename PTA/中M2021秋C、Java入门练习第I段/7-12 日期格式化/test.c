#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
    //需要用字符类型，字符串，字符数组
    //将前5个与后五个字符的位置产生交换
    char arr[11] = { 0 };// \0可能占一个位置，所以定义时数组元素的个数要加1
    gets(arr);//输入字符串的用法，arr是要输入字符串的地址

    int i = 0;
    char temp = 0;
    //移动03-15-2017的位置
    //得-201703-15
    for (i = 0; i < 5; i++)
    {
        temp = arr[i];
        arr[i] = arr[i + 5];
        arr[i + 5] = temp;
    }
    //移动-2017的位置
    for (i = 0; i < 4; i++)
    {
        temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
    }
    //得2017-03-15
    printf("%s", arr);

    return 0;
}