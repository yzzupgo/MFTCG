#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,cnt=0;
cin>>n;
for(int i=1;i<n;i++){
string s = to_string(i);
int len=s.length();
if(len%2==1){
cnt++;
}
}
cout<<cnt;
return 0;
}
