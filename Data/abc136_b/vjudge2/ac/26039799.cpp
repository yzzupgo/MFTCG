#include<bits/stdc++.h>
#define pb push_back
using namespace std;
int main()
{
int a,cnt=0,ans=0;
cin >> a;
string s;
for ( int i = 1 ; i <= a ; i ++ ){
s = to_string(i);
if ( s.size()%2==1)
cnt ++ ;
}
cout << cnt << endl;
}
