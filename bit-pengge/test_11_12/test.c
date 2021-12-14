#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//二维数组？
int main()
{
	int a[3][4] = { 0 };

	printf("%d\n", sizeof(a));//48 - 3*4*sizeof(int)
	printf("%d\n", sizeof(a[0][0]));//4 a[0][0] - 是第一行第一个元素
	printf("%d\n", sizeof(a[0]));//16 - sizeof(a[0])数组名a[0]单独放在sizeof内部，
	                             //a[0]表示的整个第一行，计算的就是第一行的大小
	printf("%d\n", sizeof(a[0]+1));//4 a[0]作为数组名并没有单独放在sizeof内部，
	                               //也没取地址，所以a[0]就是第一行第一个元素的地址
	                               //a[0]+1就是第一行第二个元素的地址
	printf("%d\n", sizeof(*(a[0]+1)));//4 - 解释：*(a[0]+1)是第一行第二个元素
	printf("%d\n", sizeof(a+1));//4 - 解释：a是二维数组的数组名，并没有取地址
	                            //也没有单独放在sizeof内部，所以a就表示二维数组首元素的地址，即：第一行的地址
	                            //a+1就是二维数组第二行的地址
	printf("%d\n", sizeof(*(a+1)));//16 解释：a+1是第二行的地址，所以*(a+1)表示第二行
	                               //所以计算的就是第2行的大小
	printf("%d\n", sizeof(&a[0]+1));//4 解释：a[0]是第一行的数组名，
	                                //&a[0]取出的就是第一行的地址，&a[0]+1就是第二行的地址
	printf("%d\n", sizeof(*(&a[0]+1)));//16 &a[0]+1是第二行的地址
	                                   //*(&a[0]+1)是第二行
	printf("%d\n", sizeof(*a));//16 及时：a作为二维数组的数组名，没有&，没有单独放在sizeof内部
	                           //a就是首元素的地址，即第一行的地址，所以*a就是第一行，计算的是第一行的大小
	printf("%d\n", sizeof(a[3]));//16 sizeof内部的表达式是不算的，即使没有，也可以按照类型算出大小
	                             //解释：a[3]其实是第四行的数组名（如果有的话）
	                             //所以其实不存在，也能通过类型计算大小的

	return 0;
}

//int main()
//{
//	short s = 5;
//	int a = 4;
//	printf("%d\n", sizeof(s = a + 6));//2
//	printf("%d\n", s);//sizeof内部的表达式不参与运算
//	                  //加速sizeof内放了个越界的表达式，因为不运算，所以也不会报错
//
//	return 0;
//}