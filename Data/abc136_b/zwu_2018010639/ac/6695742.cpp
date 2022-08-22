#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin >> n;
int cnt=0,k=n;
while(k){
k /= 10;
cnt++;
}
if(cnt==1) cout << n << endl;
if(cnt==2) cout << "9" << endl;
if(cnt==3) cout << 9+n-99 << endl;
if(cnt==4) cout << "909" << endl;
if(cnt==5) cout << 909+n-9999 << endl;
if(cnt==6) cout << "90909" << endl;
return 0;
}
