#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)
int main(){
int n;
cin >> n;
int count=0;
for(int i=1;i<=n;i++){
if(1<=i && i<=9) count++;
else if(100<=i && i<=999) count++;
else if(10000<=i && i<= 99999) count++;
}
cout << count;
}
