#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
int N;
int L;
int sum;
cin >> N >> L;
if (L<=0 && L+N-1>=0)
{
sum = (2 * L+N - 1)*N / 2;
}
else if (L<0 && L+N-1<0)
{
sum = (2 * L + N - 2)*(N-1) / 2;
}
else { sum = (2 * L + N)*(N-1)/2; }
cout << sum << endl;
}
