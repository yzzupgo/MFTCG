#include <iostream>
using namespace std;
int main ()
{
int n ;
cin >> n ;
if (n < 10)
cout<< n;
else if (n / 10 < 10)
cout<< 9;
else if (n / 100 < 10)
cout<<9 + n - 99;
else if (n / 1000 < 10)
cout<< 9 + 900;
else if (n / 10000 < 10)
cout<< 909 + n - 9999;
else
cout<< 90909;
}
