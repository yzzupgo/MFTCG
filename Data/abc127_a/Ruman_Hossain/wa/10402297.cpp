#include <bits/stdc++.h>
using namespace std;
const unsigned int MOD = 1000000007;
#define ll long long
#define PI 3.1416
string day[]={"SUN","MON","TUE","WED","THU","FRI","SAT"};
int main() {
int n,k;
while(cin>>n>>k){
if(n==0)cout<<"0"<<endl;
else if(n<=12)cout<<k/2<<endl;
else cout<<k<<endl;
}
return 0;
}
