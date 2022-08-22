#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
int N, L;
cin >> N >> L;
int planned = (L - 1) * N + N * (N + 1) * 1 / 2;
int minimum = 101;
for(int i = 1; i <= N; ++i)
{
minimum = min(minimum, abs(L + i - 1));
}
cout << planned - minimum << endl;
return 0;
}
