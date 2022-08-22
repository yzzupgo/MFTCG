#include <iostream>

int main(void)
{
    int a, b, c, d, e, sum, min, flag = 0;
    std::cin >> a >> b >> c >> d >> e;
    if (a % 10 == 0)
    {
        flag++;
    }
    if (b % 10 == 0)
    {
        flag++;
    }
    if (c % 10 == 0)
    {
        flag++;
    }
    if (d % 10 == 0)
    {
        flag++;
    }
    if (e % 10 == 0)
    {
        flag++;
    }
    if (flag == 1 || flag == 5)
    {
        flag--;
    }
    flag = 40 - flag * 10;
    //    std::cout << flag;
    if (a % 10 > b % 10 && b % 10 != 0)
    {
        min = b % 10;
    }
    else
    {
        min = a % 10;
    }
    if (min > c % 10 && c % 10 != 0)
    {
        min = c % 10;
    }
    if (min > d % 10 && d % 10 != 0)
    {
        min = d % 10;
    }
    if (min > e % 10 && e % 10 != 0)
    {
        min = e % 10;
    }
    std::cout << a - a % 10 + b - b % 10 + c - c % 10 + d - d % 10 + e - e % 10 + flag + min << std::endl;
    return 0;
}
