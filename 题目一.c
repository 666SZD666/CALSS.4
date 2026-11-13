//编写一个C程序，从键盘输入一个正整数，
//直接在`main`函数中计算并输出该整数中所有偶数位数字的和
//（例如：输入`1234`，偶数位数字是`2`和`4`，输出`6`）
#include <stdio.h>

int main()
{
    int n;
    int sum = 0;

    printf("请输入一个正整数：");
    scanf("%d", &n);

    int p;
    for (p = 1; n > 0; p++)
    {
        int first = n % 10;
        if (p % 2 == 0)
        {
            sum += first;
        }
        n /= 10; 
    }

    printf("偶数位数字之和：%d\n", sum);

    return 0;
}
