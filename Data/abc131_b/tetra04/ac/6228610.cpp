#include<iostream>
#include<stdio.h>
#include<math.h>
#include<algorithm>
#include<vector>
#include<string>
#include<cstdlib>
using namespace std;
int main()
{
int n, l, x = 1000, s;
cin >> n >> l;
for (int i = 0; i < n; i++) {
if (abs(l+i)<abs(x)){
x = l + i;
}
}
s = n * l + (n * (n - 1)) / 2 - x;
cout << endl << s << endl;
}
