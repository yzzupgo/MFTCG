#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0;i<(n);i++)
typedef long long ll;
int main(){
int x,y;
cin >> x >> y;
if(y%2==0 and (2*x - y/2 ) >0 )
cout << "Yes" << endl;
else{
cout << "No" << endl;
}
return 0;
}
