#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int main(){
int N,L;
cin>>N>>L;
int A[210];
int B[210];
for (int i=0; i<N; i++) A[i]=L+i-1;
for (int i=0; i<N; i++) B[i]=abs(A[i]);
sort(B,B+N);
int D=B[0];
int sum=0;
for (int i=0; i<N; i++) sum+=A[i];
if (L+N-1<=-1) cout<<sum+D<<endl;
else cout<<sum-D<<endl;
}
