#include<bits/stdc++.h>
using namespace std;
int main(){
int N,L,sum=0,a[210];
cin>>N>>L;
for(int i=0;i<N;i++){
a[i]=L+i;
sum+=a[i];
}
int low=sum;
for(int i=0;i<N;i++){
if(low>a[i]) low=a[i];
}
cout<<sum-low<<endl;
}
