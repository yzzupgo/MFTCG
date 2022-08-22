#include<iostream>
using namespace std;
int main() {
long long n;
cin >> n;
long long k = 0;
for (int i = 1; i <= n; i++)
{
if (i>=0&&i<10)
{
k++;
}
else if (i>99)
{
k++;
}
}
cout << k-1;
}
