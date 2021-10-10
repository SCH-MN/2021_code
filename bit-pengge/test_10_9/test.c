#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//do while循环
//do 语句特点 循环至少执行一次
//int main()
//{
//	int i = 1;
//	do
//	{
//		if (i == 5)
//			break;//输出到4结束 //一个break 只能跳一次循环
//			continue;//输出到4 死循环
//		
//		printf("%d ",i);
//		i++;
//	} while (i<=10);
//
//	return 0;
//}

//while for do while
//计算n的阶乘
//要产生1到n的数字 n！-  1->n
// 
// 我写的
// 
//int main()
//{
//	int  n = 0, i = 0;
//	scanf("%d", &n);
//	for (i = n - 1; i > 0; i--)
//	{
//		n = n * i;
//	}
//	printf("%d", n);
//
//	return 0;
//}

//老师写的

//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;//ret可能是英文阶乘的缩写
//
//	scanf("%d", &n);
//	for (i = 1; i <=n; i++)//感觉i++类型的for循环比i--类型的要好
//	{
//		ret *= i;
//	}
//	printf("%d", ret);
//
//	return 0;
//}

//计算 1！+2！+3！+.....+10!

//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;//ret可能是英文阶乘的缩写//否定，应该不是阶乘的缩写
//	int sum = 0;
//	//1！+2！+3！=9
//	//3！ = 3*2*1 = 3*2！
//	//2!=2*1
//	
//	//for (n = 1; n <= 3; n++)
//	//{
//	//	for (i = 1; i <= n; i++)
//	//	{
//	//		ret *= i;//效率比较低，每求一个阶乘都要从1开始乘
//	//	}
//	//	sum += ret;
//
//	//	ret = 1;//ret要在每次求阶乘前，把ret初始为1//非常重要
//	//}
//	
//	for (n = 1; n <= 3; n++)
//	{
//		ret *= n;//每次阶乘的结果都会保留，下次接着用
//		sum += ret;
//
//	}//时间复杂度更低，只有一层循环
//
//	printf("%d", sum);
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;//要查找的数字
//	//在arr这个有序数组中查找k（7）的值
//	int sz = sizeof(arr) / sizeof(arr[0]);//数组元素的个数
//
//	int left = 0;//要记住，数组的下标是从0开始的
//	int right = sz - 1;
//	
//
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;//中间坐标要在循环里面，不能只求一次
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("找到了，下标是：%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}

//welcome to bit!!!!!!
//#################### 

//w##################!
//we################!!
//...
//welcome to bit!!!!!!

//#include<string.h>
//#include<windows.h>
//int main()
//{
//	char arr1[] = "welcome to bit!!!!!!";
//	char arr2[] = "####################";
//	int left = 0;
//	int right = strlen(arr1)-1;//求出长度后减1
//	//sizeof()计算内存字节，也可用来交叉使用计算数组元素个数
//	//strlen()计算字符串长度
//
//	while (left <= right)//如果还想往下拉元素，就要满足这个条件
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		
//		Sleep(1000);//停顿一下，单位是毫秒//睡眠1秒钟
//		system("cls");//清空屏幕
//
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);//起到一种动画的效果
//
//	return 0;
//}//是一种非常有趣的代码

//#include<string.h>
////strlen - len 是 length的缩写
////strcmp - cmp 是 compare的缩写
//
//int main()
//{
//	int i = 0;
//	//假设正确的密码是字符串"123456"
//
//	char password[20] = { 0 };
//
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码:>");
//		scanf("%s", password);//数组名本来就是地址
//		//if (password == "123456")//err - 两个字符串的比较，不能使用==，应该使用strcmp
//		if(strcmp(password,"123456")==0)
//		{
//			printf("登陆成功\n");
//			break;
//		}
//		else
//		{
//			printf("密码输入错误\n");
//		}
//	}
//	if (i == 3)
//		printf("三次密码均错误，退出程序\n");
//
//	return 0;
//}

//猜数字游戏实现
//1、自动产生一个1 - 100之间的随机数
//2、猜数字
//  a.猜对了，就会恭喜你，游戏结束
//  b.你猜错了，就会告诉你猜大了，还是猜小了，继续猜，知道猜对
//3、游戏一个一直玩，除非退出游戏
//
//如何从无到有想出来的过程

#include<stdlib.h>
#include<time.h>

void menu()//封装menu函数
{
	printf("******************************\n");
	printf("*********  1.paly  ***********\n");
	printf("*********  0.exit  ***********\n");
	printf("******************************\n");
}

//RAND_MAX
//time_t
void game()//封装game函数
{
	//猜数字游戏的实现
	//1、生成随机数
	// rand()函数返回了一个 0 - 32767之间的数字
	// 库函数rand()//发现每次返回的数都是一样的
	//在使用rand之前需要调用srand函数

	//需要输入一个一直变化的值//时间 - 时间戳 - 库函数time()
	//强制转换类型，这样srand就可以接收了

	//srand转移到main函数之下，起点至设置一次就行了

	int ret = rand()%100+1;//%100的余数是0 - 99，然后+1，范围就是1 - 100
	//ret到底是什么名称的缩写//猜测应该是乱用的
	
	//printf("%d\n",ret);//测试用	
	
	//2、猜数字
	int guess = 0;
	while (1)//用一个死循环，只有猜对了才能跳出去
	{
		printf("请猜数字:>");
		scanf("%d", &guess);
		if (guess < ret)
		{
			printf("猜小了\n");//此处的提示不能写反了，否则就没法实现了
		}
		else if (guess > ret)
		{

			printf("猜大了\n");
		}
		else
		{
			printf("恭喜你，猜对了\n");
			break;
		}
	}
}


int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));//设置起点？//为什么要用空指针NULL
	//起点只设置一次就行了
	do
	{
		menu();//打印菜单，非库函数，要自己实现
		printf("请选择:>");
		scanf("%d,&input",&input);
		switch (input)
		{
		case 1:

			game();

			//printf("猜数字\n");//游戏中此处应该是一个猜数字的具体函数
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，重新选择\n");
			break;
		}
	} while (input);
	return 0;
}//这个题真棒，运用了很多已学知识的总结