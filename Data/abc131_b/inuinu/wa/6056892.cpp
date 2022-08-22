#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
int main(){
int n,l;
cin>>n>>l;
int sum=0;
if(l>=0){
sum+=((l+l+n-1)*n/2);
}else if(l+n-1<0){
sum+=((l+l+n-1)*n/2)-(l+n-1);
}else{sum+=((l+l+n-1)*n/2);}
cout<<sum<<endl;
}
