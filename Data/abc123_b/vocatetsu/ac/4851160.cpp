#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
#define pb push_back
#define fr(i,n) for(int i=0;i<n;i++)
#define Fr(i,n) for(int i=0;i++<n;)
#define ifr(i,n) for(int i=n-1;i>=0;i--)
#define iFr(i,n) for(int i=n;i>0;i--)

int main() {
  int ans=0;
  int a[5];
  int b[5];
  fr(i,5){
    cin >> a[i];
    b[i] = a[i]%10;
    a[i] = (a[i]+9)/10;
    a[i]*=10;
    ans+=a[i];
  }
  int c=10;
  fr(i,5){
    if(c>b[i] && b[i]!=0) c=b[i];
  }
  cout << ans-10+c << endl;
}