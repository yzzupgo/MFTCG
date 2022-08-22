#include <bits/stdc++.h>
using namespace std;
int main(){
int N,t,cnt=0;
cin>>N;
t=int(log(N)/log(10));
if(t==0) cout<<N<<endl;
else if(t==1) cout<<9<<endl;
else if(t==2) cout<<9+N-99<<endl;
else if(t==3) cout<<9+N-99<<endl;
else if(t==4) cout<<9+900+N-9999<<endl;
else if(t==5)cout<<9+900+90000<<endl;
}
