#include<bits/stdc++.h>
using namespace std;
int main(){
int n,l;
cin>>n>>l;
vector<int> tst(n);
for(int i=0;i<n;++i) tst[i]=l+i;
int tmpsum=0;
for(int i=0;i<n;++i) tmpsum+=tst[i];
int tmp=1000000000;
int res;
for(int i=0;i<n;++i){
int sum=tmpsum-tst[i];
if(abs(sum-tmpsum)<tmp){
tmp=abs(sum-tmpsum);
res=sum;
}
}
cout<<res<<endl;
return 0;
}
