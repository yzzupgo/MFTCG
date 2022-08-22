#include <iostream>
int main()
{
int N;
std::cin >> N;
std::cout << std::endl;
int num = 0;
for (int i = 1; i <= N; ++i)
{
for (int j = 1; j <= N; j *= 100)
{
for (int k = 1; k != 10; ++k)
{
if (i / j == k)
{
num++;
break;
}
}
}
}
std::cout << num << std::endl;
return 0;
}
