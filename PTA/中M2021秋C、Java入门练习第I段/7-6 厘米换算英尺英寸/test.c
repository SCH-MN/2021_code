#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//����˼·����Ҫ��һЩ��ʽ����ʾӢ��foot��Ӣ��inch֮��Ĺ�ϵ��Ȼ��ֱ������
/*����ԣ�������ʽ��˺������㡣ԭ������ɵ�Ź�ʽ��˼�Ǹ��㼸Ӣ�ߺͼ�Ӣ�磬
���Ǻ�������Ӧ�����ױ���5Ӣ��6Ӣ�磬���Ƕ�Ӧ��5+6/12�� Ӣ�磬
����Ϊ1Ӣ�ߵ���12Ӣ�磬����inch/12,��6/12������Ӧ��5+6/12��0.3048��.
������6/12�䵱С�����־Ͳ�˵�ˣ�Ȼ��ͼ���
*/
int main()
{
    float num = 0;
    int intOfFoot = 0;//Ӣ�ߵ���������//integer ����
    int intOfInch = 0;

    //������ֵ
    scanf("%f", &num);
    //С�����ֲ��ã�ֱ�����Ӽ���
    intOfFoot = num / 100.0 / 0.3048;
    intOfInch = (num / 100.0 / 0.3048 - intOfFoot) * 12;//��Ϊ1foot=12inch;����inch/12<1;footΪ�������֣�inch/12ΪС������
    printf("%d %d", intOfFoot, intOfInch);//��12Ӣ���1Ӣ��

    return 0;
}