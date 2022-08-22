#include<bits/stdc++.h>
using namespace std;
int main(){
int x,y;cin>>x>>y;
int b=0,bok=0,f=0;
if(y%2==0){
while(bok<y){
b++;bok=b*2;
if(((y-bok)%4==0)&&(((y-bok)/4)==x-b))
{f=1; break;}
}}
if(f)cout<<"Yes";
else cout<<"No";
}
