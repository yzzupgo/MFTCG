#include <bits/stdc++.h>
#include <ctime>
#include <cstdlib>
#define rep(i,N) for (long i = 0; i < (N); i++)
#define swap(a,b) (a += b, b = a - b, a -= b)
using namespace std;
int main()
{
int N;
cin >> N;
if (N < 10)
{
cout << N << endl;
}
else if (10 <= N && N < 100)
{
cout << 9 << endl;
}
else if (100 <= N && N < 1000)
{
cout << N - 90 << endl;
}
else if (1000 <= N && N < 9999)
{
cout << N - 90 - N % 1000-1 << endl;
}
else if (N >= 9999 && N < 100000)
{
cout << N - 90 - 9000 << endl;
}
else if (N == 100000)
{
cout << N - 9091 << endl;
}
}
