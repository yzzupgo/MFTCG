#include<bits/stdc++.h>
using namespace std;
#define all(a) (a).begin(),(a).end()
typedef long long ll;
ll mod=1000000007;
int main() {
int n; cin >> n;
int tmp=n;
int digit =0;
while(tmp>0){
++digit;
tmp/=10;
}
int cnt =0;
for(int i=digit;i>0;--i){
if(i%2==0) continue;
if(i==1){
cnt +=min(n,9);
} else if(i==digit){
cnt += n-(int)pow(10,i-1)+1;
} else {
cnt += 9*(int)pow(10,i-1);
}
}
cout << cnt << endl;
return 0;
}
