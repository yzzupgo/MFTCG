#include <iostream>
#include <sstream>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;
int arr[1001] = {0};
int main()
{
int a, b;
cin >> a >> b;
if(b-2*a<a*2 && (b-2*a)%2 == 0 && b>=a*2)
{
cout << "Yes";
}
else
{
cout << "No";
}
}
