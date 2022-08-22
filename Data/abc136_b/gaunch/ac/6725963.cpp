#include <iostream>
using namespace std;
int main() {
int N;
scanf("%d", &N);
if (N < 10)
{
printf("%d", N);
} else if (10 <= N && N <= 99)
{
printf("9");
} else if (100 <= N && N <= 999)
{
printf("%d", 9 + N - 100 + 1);
} else if (1000 <= N && N <= 9999)
{
printf("909");
} else if (10000 <= N && N <= 99999)
{
printf("%d", 909 + N - 10000 + 1);
} else if (N == 100000)
{
printf("90909");
}
}
