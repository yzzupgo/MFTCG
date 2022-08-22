#include<iostream>
using namespace std;
int main()
{
int n;
cin >> n;
int sum;
if (n == 100000) sum = 90909;
else if (n > 10000) sum = n - 9999 + 900 + 9;
else if (n > 100) sum = n - 99 + 9;
else sum = n;
cout << sum << endl;
return 0;
}
