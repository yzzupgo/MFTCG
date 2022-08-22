#include<bits/stdc++.h>
using namespace std;
int main(){
int n,l;
cin>>n>>l;
vector<int> tst(n);
for(int i=0;i<n;++i) tst[i]=l+i;
sort(tst.begin(),tst.end());
int res=0;
for(int i=1;i<n;++i) res+=tst[i];
cout<<res<<endl;
return 0;
}
