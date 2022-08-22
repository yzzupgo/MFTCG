#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main(){
int A,B; cin>>A>>B;
int a=A*(A-1)/2+B*A;
if(B>=0)cout<<a-B<<endl;
else if(A+B>=0)cout<<a<<endl;
else cout<<a-B-A+1<<endl;
}
