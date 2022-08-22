#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)
  
int main(){
  vector<int> a(5);
  int last=0,sum=0;
  rep(i,5){
    cin >> a[i];
    if(last<10-(a[i]%10)) last = a[i];
    else if(a[i]%10!=0 && a[i]%10<last%10) last = a[i];
    //cout << last << endl;
  }
  rep(i,5){
    if(a[i]%10==0) sum += a[i];
    else sum += (a[i]/10)*10+10;
    //cout << sum << endl;
  }
  cout << sum + last - (last/10)*10 -10;
}