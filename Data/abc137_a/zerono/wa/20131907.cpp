#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(void){
int a,b;
cin >> a,b;
int res = 0;
res = max(a+b,a-b);
res = max(res, a*b);
cout << res << endl;
return 0;
}
