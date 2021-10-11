#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>


//#include<string.h>

//上节课回顾
//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "abc";
//
//	strcpy(arr1, arr2);
//
//	printf("%s\n", arr1);
//
//	return 0;
//}

//函数的自定义
//比较最大值
//int get_max(int x, int y)
//{
//	int z = 0;
//	if (x > y)
//	{
//		z = x;
//	}
//	else
//	{
//		z = y;
//	}
//	return z;//返回z - 返回较大值
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//函数的调用
//	int max = get_max(a, b);
//
//	printf("max = %d\n", max);
//
//	return 0;
//}

//写一个函数，交换

//函数返回类型的地方写出: void，表示这个函数不返回任何值，也不需要返回

//swap在被调用的时候，实参传给形参，其实形参是实参的一份临时拷贝
//改变形参，不能改变实参
//此处交换了就交换了，交换后打印就行，不需要返回

//void Swap(int x, int y)
//{
//	int tmp = x;
//	x = y;
//	y = tmp;
//}//写出问题了//地址不同，导致交换后，主函数中的a，b的值没有发生变化
////a和b的空间与x和y的空间是两块独立的空间
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//写一个哈函数 - 交换2个整型变量的值
//	printf("交换前: a =%d b=%d\n", a, b);
//	Swap(a, b);//传值调用？//改变形参的值不会影响实参
//	printf("交换后: a =%d b=%d\n", a, b);
//
//	return 0;
//}

//上面的写法出错，回想指针的概念
//int main()
//{
//	int a = 10;//4个字节的空间
//
//	int* pa = &a;//pa就是一个指针变量
//	*pa = 20;
//
//	printf("%d\n", a);
//
//	return 0;
//}


//此处按照指针的用法，进行相应的修改
//此处交换了就交换了，交换后打印就行，不需要返回
//void Swap(int*pa, int*pb)
//{
//	int tmp = *pa;
//	*pa = *pb;//指针只是一种指代，实际上访问的就是指针指向的变量
//	*pb = tmp;
//}//这样通过指针，就产生了联系
////return 不能同时返回两个值
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//写一个哈函数 - 交换2个整型变量的值
//	printf("交换前: a =%d b=%d\n", a, b);
//	Swap(&a, &b);//传址调用？//改变形参的值会影响实参
//	printf("交换后: a =%d b=%d\n", a, b);
//
//	return 0;
//}


//写一个函数判断一个数是不是素数
//回顾作业题：打印100 - 200之间的素数

//老师写法
//#include<math.h>
//int is_prime(int n)
//{
//	//2 -> n-1 之间的数字
//	int j = 0;
//	for (j = 2; j <=sqrt(n); j++)//优化
//	{
//		if (n % j == 0)//满足这个关系式就代表不是素数
//			return 0;
//	}
//	return 1;//不能同时返回两个值//但可以两种情况各返回一个值
//}
//
//int main()
//{
//	//100 - 200之间的素数
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//判断i是否为素数
//		if (is_prime(i) == 1)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}


//老师举例 - 有的人写法
//不建议这样写代码
//int is_prime(int n)
//{
//	//2 -> n-1 之间的数字
//	int j = 0;
//	for (j = 2; j < n; j++)
//	{
//		if (n % j == 0)//满足这个关系式就代表不是素数
//		{
//			//printf("%d 不是素数\n");
//			return 0;
//		}	
//	}
//	printf("%d 是素数\n", n);
//	return 1;//不能同时返回两个值//但可以两种情况各返回一个值
//}//函数的功能不够单一，如果有人只是为了判断，而不是打印，那么这个函数就不能用了
////设计函数的时候，建议只完成一个功能即可
//
//int main()
//{
//	//100 - 200之间的素数
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//判断i是否为素数
//		if (is_prime(i) == 1)
//		{
//			//count++;
//			//printf("%d ", i);
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}


//写一个函数判断一年是不是闰年
//回顾：作业题：打印1000 - 2000之间的闰年


//is_leap_year
//如果判断是闰年返回1
// 不是闰年，返回0；

//一个函数不写返回类型，默认返回int类型
//int is_leap_year(int n)
//{
//	if (((n % 4 == 0) && (n % 100 != 0)) || (n % 400 == 0))
//		return 1;
//	else//一般情况下，还是建议加上else，增加易读性
//	    return 0;
//}

//简化
//int is_leap_year(int n)
//{
//	return(((n % 4 == 0) && (n % 100 != 0)) || (n % 400 == 0));
//	//直接返回表达式的值，本来if判断的就是0为假，非0为真
//	//并且和或者 运算符 是判断两边是 0or1 来输出真假
//	//所以直接返回这个表达式，是没有问题的
//}
//
//int main()
//{
//	int y = 0;
//	int count = 0;
//	for (y = 1000; y <= 2000; y++)
//	{
//		if (is_leap_year(y)==1)
//		{
//			count++;
//			printf("%d ", y);
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}

//写一个函数，实现一个整型有序数组的二分查找

//int binary_search(int* a, int k)//a[]实际上是指针//故这样求不出数组长度

int binary_search(int a[], int k, int s)
{
	int left = 0;//定义左右下标
	int right = s - 1;

	while (left <= right)//成立则说明，左下标和右下标中间是有元素的
	{   //循环内，仅为一次二分查找
		int mid = (left + right) / 2;//通过下标找到中间元素
		if (a[mid] > k)
		{
			right = mid - 1;
		}
		else if (a[mid] < k)
		{
			left = mid + 1;
		}
		else
		{
			return mid;
		}
	}
	return -1;//找不到的情况
}

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int key = 7;
	int sz = sizeof(arr) / sizeof(arr[0]);
    //找到了就返回找到位置的下标
	//找不到就返回 -1//为什么不能返回0 - 0是第一个元素的下标 - 此处不能和下标冲突
	//数组arr传参，实际传递的不是数组本身
	//仅仅传过去了数组首元素的地址
	//想用什么参数，一般在外面求好了再传进函数里

	int ret = binary_search(arr,key,sz);//这个英文单词的意思就是二分查找//这样命名比较直观
	//需要传进的参数：整个数组，要查找的元素，数组长度
	if (-1 == ret)
	{
		printf("找不到\n");
	}
	else
	{
		printf("找到了，下标是: %d\n", ret);
	}
	return 0;
}
