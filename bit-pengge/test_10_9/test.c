#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//do whileѭ��
//do ����ص� ѭ������ִ��һ��
//int main()
//{
//	int i = 1;
//	do
//	{
//		if (i == 5)
//			break;//�����4���� //һ��break ֻ����һ��ѭ��
//			continue;//�����4 ��ѭ��
//		
//		printf("%d ",i);
//		i++;
//	} while (i<=10);
//
//	return 0;
//}

//while for do while
//����n�Ľ׳�
//Ҫ����1��n������ n��-  1->n
// 
// ��д��
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

//��ʦд��

//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;//ret������Ӣ�Ľ׳˵���д
//
//	scanf("%d", &n);
//	for (i = 1; i <=n; i++)//�о�i++���͵�forѭ����i--���͵�Ҫ��
//	{
//		ret *= i;
//	}
//	printf("%d", ret);
//
//	return 0;
//}

//���� 1��+2��+3��+.....+10!

//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;//ret������Ӣ�Ľ׳˵���д//�񶨣�Ӧ�ò��ǽ׳˵���д
//	int sum = 0;
//	//1��+2��+3��=9
//	//3�� = 3*2*1 = 3*2��
//	//2!=2*1
//	
//	//for (n = 1; n <= 3; n++)
//	//{
//	//	for (i = 1; i <= n; i++)
//	//	{
//	//		ret *= i;//Ч�ʱȽϵͣ�ÿ��һ���׳˶�Ҫ��1��ʼ��
//	//	}
//	//	sum += ret;
//
//	//	ret = 1;//retҪ��ÿ����׳�ǰ����ret��ʼΪ1//�ǳ���Ҫ
//	//}
//	
//	for (n = 1; n <= 3; n++)
//	{
//		ret *= n;//ÿ�ν׳˵Ľ�����ᱣ�����´ν�����
//		sum += ret;
//
//	}//ʱ�临�Ӷȸ��ͣ�ֻ��һ��ѭ��
//
//	printf("%d", sum);
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;//Ҫ���ҵ�����
//	//��arr������������в���k��7����ֵ
//	int sz = sizeof(arr) / sizeof(arr[0]);//����Ԫ�صĸ���
//
//	int left = 0;//Ҫ��ס��������±��Ǵ�0��ʼ��
//	int right = sz - 1;
//	
//
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;//�м�����Ҫ��ѭ�����棬����ֻ��һ��
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
//			printf("�ҵ��ˣ��±��ǣ�%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("�Ҳ���\n");
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
//	int right = strlen(arr1)-1;//������Ⱥ��1
//	//sizeof()�����ڴ��ֽڣ�Ҳ����������ʹ�ü�������Ԫ�ظ���
//	//strlen()�����ַ�������
//
//	while (left <= right)//�������������Ԫ�أ���Ҫ�����������
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		
//		Sleep(1000);//ͣ��һ�£���λ�Ǻ���//˯��1����
//		system("cls");//�����Ļ
//
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);//��һ�ֶ�����Ч��
//
//	return 0;
//}//��һ�ַǳ���Ȥ�Ĵ���

//#include<string.h>
////strlen - len �� length����д
////strcmp - cmp �� compare����д
//
//int main()
//{
//	int i = 0;
//	//������ȷ���������ַ���"123456"
//
//	char password[20] = { 0 };
//
//	for (i = 0; i < 3; i++)
//	{
//		printf("����������:>");
//		scanf("%s", password);//�������������ǵ�ַ
//		//if (password == "123456")//err - �����ַ����ıȽϣ�����ʹ��==��Ӧ��ʹ��strcmp
//		if(strcmp(password,"123456")==0)
//		{
//			printf("��½�ɹ�\n");
//			break;
//		}
//		else
//		{
//			printf("�����������\n");
//		}
//	}
//	if (i == 3)
//		printf("��������������˳�����\n");
//
//	return 0;
//}

//��������Ϸʵ��
//1���Զ�����һ��1 - 100֮��������
//2��������
//  a.�¶��ˣ��ͻṧϲ�㣬��Ϸ����
//  b.��´��ˣ��ͻ������´��ˣ����ǲ�С�ˣ������£�֪���¶�
//3����Ϸһ��һֱ�棬�����˳���Ϸ
//
//��δ��޵���������Ĺ���

#include<stdlib.h>
#include<time.h>

void menu()//��װmenu����
{
	printf("******************************\n");
	printf("*********  1.paly  ***********\n");
	printf("*********  0.exit  ***********\n");
	printf("******************************\n");
}

//RAND_MAX
//time_t
void game()//��װgame����
{
	//��������Ϸ��ʵ��
	//1�����������
	// rand()����������һ�� 0 - 32767֮�������
	// �⺯��rand()//����ÿ�η��ص�������һ����
	//��ʹ��rand֮ǰ��Ҫ����srand����

	//��Ҫ����һ��һֱ�仯��ֵ//ʱ�� - ʱ��� - �⺯��time()
	//ǿ��ת�����ͣ�����srand�Ϳ��Խ�����

	//srandת�Ƶ�main����֮�£����������һ�ξ�����

	int ret = rand()%100+1;//%100��������0 - 99��Ȼ��+1����Χ����1 - 100
	//ret������ʲô���Ƶ���д//�²�Ӧ�������õ�
	
	//printf("%d\n",ret);//������	
	
	//2��������
	int guess = 0;
	while (1)//��һ����ѭ����ֻ�в¶��˲�������ȥ
	{
		printf("�������:>");
		scanf("%d", &guess);
		if (guess < ret)
		{
			printf("��С��\n");//�˴�����ʾ����д���ˣ������û��ʵ����
		}
		else if (guess > ret)
		{

			printf("�´���\n");
		}
		else
		{
			printf("��ϲ�㣬�¶���\n");
			break;
		}
	}
}


int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));//������㣿//ΪʲôҪ�ÿ�ָ��NULL
	//���ֻ����һ�ξ�����
	do
	{
		menu();//��ӡ�˵����ǿ⺯����Ҫ�Լ�ʵ��
		printf("��ѡ��:>");
		scanf("%d,&input",&input);
		switch (input)
		{
		case 1:

			game();

			//printf("������\n");//��Ϸ�д˴�Ӧ����һ�������ֵľ��庯��
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ���������ѡ��\n");
			break;
		}
	} while (input);
	return 0;
}//���������������˺ܶ���ѧ֪ʶ���ܽ�