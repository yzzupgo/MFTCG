#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0;i<(n);i++)
typedef long long ll;
int main(){
int x,y;
cin >> x >> y;
for(int i=0;i<=x;i++){
int ytmp = 2*i + 4*(x-i);
if( ytmp==y ){
cout << "Yes" << endl;
return 0;
}
}
cout << "No" << endl;
return 0;
}
