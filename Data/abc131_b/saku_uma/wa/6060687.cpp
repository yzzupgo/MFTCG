#include<iostream>
#include<string>
#include<vector>
#include<math.h>
#include<cmath>
#include<stack>
#include <algorithm>
#include <functional>
using namespace std;
int main() {
int n, l,a;
cin >> n>>l;
if (l >= 0) { a = l * (n-1)+ n * (n - 1) / 2; }
else if(l+n-1<=0){ a = l * (n - 1) + n * (n - 1) / 2 - n; }
else { a = l * n + n * (n - 1) / 2; }
cout<<a;
return 0;
}
