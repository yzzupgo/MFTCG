#include<map>
#include<list>
#include<queue>
#include<iostream>
#include<unordered_set>
#include<set>
#include<vector>
#include<cmath>
#define ull unsigned long long
#define ll long long
#define mp make_pair
#define imei(...) "[ "<< #__VA_ARGS__ <<" = "<< __VA_ARGS__ <<" ] "
using namespace std;
int main(int argc, char *argv[])
{
int x, y;
cin >> x >> y;
if ((y - 2 * x)%2 == 0) {
int c = x - ((y-2*x)/2);
if (c < 0)
cout << "No\n";
else
cout << "Yes\n";
} else {
cout << "No\n";
}
return 0;
}
