#include <stdio.h>
#include <algorithm>
#include <functional>
#include <iostream>
using namespace std;
int main() {
int a;
int b;
int ans=0;
cin >> a >> b;
ans=a+b;
ans= std::max(ans,a-b);
ans= std::max(ans,a*b);
cout << ans << endl;
return 0;
}
