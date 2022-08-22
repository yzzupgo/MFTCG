#include<bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);++i)
using namespace std;
int main(){
int n,l;cin >> n >> l;
int a[n],ans = 0,mini = 100000000,mi = 0;
int all = 0;
rep(i,n){
int a = l+i;
all += a;
if(mini > abs(a)){mini = abs(a);mi = a;}
}
cout << all - mi << endl;
return 0;
}
