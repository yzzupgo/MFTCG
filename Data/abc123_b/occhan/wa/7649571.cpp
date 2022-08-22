#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<ll,ll> P;
#define M 1000000007
int main(){
  int a,b=0,c=10;
  for(int i=0;i<5;i++){
    cin>>a;
    b+=(a-1)/10+1*10;
    if(a%10) c=min(c,a%10);
  }
  if(c!=10) b-=10-c;
  cout<<b;
}