#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); i++)
using ll = long long;
using P = pair<int,int>;
int main()
{
int a, b;
cin >> a >> b;
if(a <= 5){
cout << 0 << endl;
}
if(a >= 13){
cout << b << endl;
}
else{
cout << b / 2 << endl;
}
return 0;
}
