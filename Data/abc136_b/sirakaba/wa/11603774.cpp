#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;
int main(){
int n;
cin >> n;
int res = 0;
rep(i,n+1){
if(i%2 != 0) res++;
}
cout << res << endl;
}
