#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < n; i++)
#define ll long long
using namespace std;
int main()
{
int a, b;
cin >> a >> b;
if(13<=a){
cout << b << endl;
}else if(a<=5){
cout << 0 << endl;
}else{
cout << b/2 << endl;
}
}
