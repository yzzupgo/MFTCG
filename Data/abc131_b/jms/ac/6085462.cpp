#include<bits/stdc++.h>
using namespace std;
int main() {
int N,L;
cin>>N>>L;
if(L>0){
cout<<N*(2*(L)+(N-1))/2-L<<endl;
}else if(N<=abs(L)){
cout<<N*(2*(L)+(N-1))/2-(L+N-1)<<endl;
}else{
cout<<N*(2*(L)+(N-1))/2<<endl;
}
}
