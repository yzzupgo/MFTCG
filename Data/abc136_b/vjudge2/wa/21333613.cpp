#include<iostream>
using namespace std;
int main() {
long long n;
cin >> n;
long long k = 0;
for (int i = 0; i <= n; i++)
{
if (i>=0 && i<10)
{
k++;
}
else if (i>=100)
{
k++;
}
}
cout << k-1;
}
