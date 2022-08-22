#include <iostream>
#include <cmath>
using namespace std;
int main()
{
int n;
cin >> n;
int keta = static_cast<int>(log10(n));
int amari = n % static_cast<int>(pow(10, keta));
int sum = 0;
for (int i = 0; i < keta; i++)
{
if (i % 2 == 0)
sum += pow(10, i) * 9;
}
if(keta ==0)
cout << n;
else if(keta % 2 == 0)
cout << sum +amari+1;
else if(keta% 2 == 1)
cout << sum;
}
