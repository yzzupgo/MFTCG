#include <bits/stdc++.h>
using namespace std;
int main(){
int N,t,cnt=0;
cin>>N;
if(0<N&&N<10) cout<<N<<endl;
else if(10<=N&&N<100)cout<<9<<endl;
else if(100<=N &&N<1000) cout<<9+N-99<<endl;
else if(1000<=N&&N<10000) cout<<9+900<<endl;
else if(10000<=N&&N<100000) cout<<9+900+N-9999<<endl;
else if(N==100000)cout<<9+900+90000<<endl;
}
