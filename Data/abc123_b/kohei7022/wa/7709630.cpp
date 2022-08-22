typedef long long ll;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#include <bits/stdc++.h>
using namespace std;
int main() {
  vector<int>V(5);
  int sum=0;
  int min1=10;
  rep(i,5){
    cin>>V[i];
    V[i]+=9;
//    int a=V[i]/10;
    sum+=V[i]/10*10;
    cout<<sum<<endl;
    min1=min(min1,V[i]%10);
  }
  cout<<sum+min1-9<<endl;
}