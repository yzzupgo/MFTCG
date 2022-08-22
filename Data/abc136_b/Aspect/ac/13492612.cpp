#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main() {
int N;
cin>>N;
int answer=0;
if(N>9){
answer+=9;
if(N>999){
answer+=900;
if(N>9999){
if(N!=100000)
answer+=N-9999;
else
answer+=N-10000;
}
}
else if(N>99){
answer+=N-99;
}
}
else
{
answer=N;
}
cout<<answer<<endl;
}
