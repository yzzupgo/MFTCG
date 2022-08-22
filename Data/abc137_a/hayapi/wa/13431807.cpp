#include <bits/stdc++.h>
using namespace std;
#include<cstdlib>
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)
typedef long long ll;
int main(){
int a,b;
cin >> a >> b;
cout << max(a*b, max(a-b, a*b));
}
