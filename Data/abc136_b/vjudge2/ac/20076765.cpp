#include <iostream>
using namespace std;
int main()
{
int n;
cin >> n;
int num = 1;
int counter = 0;
while (num <= n)
{
int c = 0;
int temp = num;
while (temp != 0)
{
temp /= 10;
c++;
}
if (c % 2 != 0)
counter++;
num++;
}
cout << counter << endl;
return 0;
}
