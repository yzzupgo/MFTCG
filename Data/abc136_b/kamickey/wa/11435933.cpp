#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;
int main(){
int n, cnt=0, num=0;
cin >> n;
for(int i=0; i<n; i++){
int n=i;
num = 0;
while(n){
n /= 10;
num++;
}
if(num % 2 == 1) cnt++;
}
cout << cnt << endl;
return 0;
}
