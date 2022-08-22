#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;
typedef long long ll;
#define rep(i,n) for (int i=0;i < (int)(n);i++)
int main(){
int n,l;
string s;
cin >> n >> l;
int ans = 200;
int tmp =0;
int sum=0;
for (int i=1;i <=n;i++){
if ( ans > abs(i+l-1)){
ans=abs(i+l-1);
tmp=i+l-1;
}
sum+=(i+l-1);
}
cout << sum-tmp << endl;
return 0;
}
