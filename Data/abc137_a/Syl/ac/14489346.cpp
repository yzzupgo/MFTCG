#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;
int main(){
int a, b;
cin >> a >> b;
int t = a+b, h = a-b, k=a*b;
if(t >= h && t >= k){
cout << t << endl;
}else if(h >= t && h >= k){
cout << h << endl;
}else{
cout << k << endl;
}
return 0;
}
