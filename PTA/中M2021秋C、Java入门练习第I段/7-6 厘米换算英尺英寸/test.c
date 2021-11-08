#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//本题思路：需要用一些公式来表示英尺foot和英寸inch之间的关系，然后分别求出来
/*你麻痹，对它公式百撕不得骑姐。原来他的傻屌公式意思是给你几英尺和几英寸，
他们合起来对应多少米比如5英尺6英寸，就是对应（5+6/12） 英寸，
（因为1英尺等于12英寸，所以inch/12,即6/12）即对应（5+6/12）0.3048米.
很明显6/12充当小数部分就不说了，然后就简单了
*/
int main()
{
    float num = 0;
    int intOfFoot = 0;//英尺的整数部分//integer 整数
    int intOfInch = 0;

    //输入数值
    scanf("%f", &num);
    //小数部分不用，直接无视即可
    intOfFoot = num / 100.0 / 0.3048;
    intOfInch = (num / 100.0 / 0.3048 - intOfFoot) * 12;//因为1foot=12inch;所以inch/12<1;foot为整数部分，inch/12为小数部分
    printf("%d %d", intOfFoot, intOfInch);//满12英寸进1英尺

    return 0;
}