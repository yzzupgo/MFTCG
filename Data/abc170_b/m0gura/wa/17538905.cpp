#include<iostream>
#define rep(i,n) for (int i = 1; i <= n; i++)
using namespace std;
int main(){
int cnt=0;
int x, y;
cin >> x >> y;
rep(i,x-1){
if(4*x-2*i == y) cnt++;
}
if(cnt == 0) cout << "No" << endl;
else cout << "Yes" << endl;
return 0;
}
