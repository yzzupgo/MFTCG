#include<bits/stdc++.h>
#define mins(a,b) a=min(a,b)
#define maxs(a,b) a=max(a,b)
template < typename T > std::string to_string( const T& n )
  {
    std::ostringstream stm ;
    stm << n ;
    return stm.str() ;
  }
using namespace std;

const long long INF=9000000000000000;
int main(){
  int a[5];
  int ans=0,x=10;
  for(int i=0;i<5;i++){
    cin>>a[i];
    if(a[i]%10!=0){
    x=min(x,a[i]%10);
    a[i]/=10;
    a[i]=(a[i]+1)*10;
    }
    ans+=a[i];
  }
  if(x!=10)
  cout<<ans-(10-x)<<endl;
  else
  cout<<ans<<endl;
}
