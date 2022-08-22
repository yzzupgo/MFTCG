#include<iostream>
#include<algorithm>
using namespace std;

int maxtime(int x){
  return (x+10-1)/10*10;
}

int remtime(int x){
  return maxtime(x)-x;
}

int main(){
  int a,b,c,d,e;
  cin>>a>>b>>c>>d>>e;
  int sum=maxtime(a)+maxtime(b)+maxtime(c)+maxtime(d)+maxtime(e);
  sum-=max({remtime(a),remtime(b),remtime(c),remtime(d),remtime(e)});
  cout<<sum<<endl;
  return 0;
}