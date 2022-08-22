#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int compareAbs(int a, int b)
{
return abs(a) < abs(b) ? a : b;
}
int main()
{
int N, L;
cin >> N >> L;
int planned = (L - 1) * N + N * (N + 1) * 1 / 2;
int minimum = 300;
for(int i = 1; i <= N; ++i)
{
minimum = compareAbs(minimum, L + i - 1);
}
cout << planned - minimum << endl;
return 0;
}
