#include <iostream>
#include<cmath>
#include <algorithm>
using namespace std;
int main()
{
int heads, legs;
cin >> heads >> legs;
int sum = 2*heads;
if(sum>legs)cout << "No";
else
{
sum = 0;
for(int i = 1; i <= heads; i++)
{
sum+=2;
if(sum==legs){cout << "Yes";return 0;}
}
cout << "No";
}
}
