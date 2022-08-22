#include <bits/stdc++.h>
using namespace std;
int main() {
int N,L,x;
cin >>N>>L;
if(L<0&&N+L-1>0){
x=0;
}
if(L<0&&N+L-1<0){
x=N+L-1;
}
if(L>0){
x=L;
}
cout<<N*(2*L+N-1)/2-x<<endl;
}
