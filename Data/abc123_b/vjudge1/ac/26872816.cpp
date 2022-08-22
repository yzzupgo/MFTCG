#include<bits/stdc++.h>
using namespace std;
bool so(int a, int b)
{ int first = a%10;  int second = b%10;   if(first>0&&second>0){return first>second;}
  if(second==0){return false;}    if(first==0){return true;}  }
int main()
{ ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    vector<int>v(5);
    for(int i = 0; i < 5; i++){cin>>v[i];}
    sort(v.begin(),v.end(),so);
    int ans = v[4];
    //for(int i = 0 ; i < 5 ; i++){cout << v[i] << " ";} cout << endl;
    for(int i = 0; i < 4; i++)
    {int x = v[i]%10; if(x!=0){ans+= v[i]-x+10;}else{ans+=v[i];}}
    cout<<ans<<endl;
}