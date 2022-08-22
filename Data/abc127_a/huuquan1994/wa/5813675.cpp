#include <bits/stdc++.h>
using namespace std;
int main()
{
freopen("input.txt", "r", stdin);
int A, B;
while(cin>>A>>B){
if(A>=13)
cout<<B<<endl;
else if (A<13 && A>=6)
cout<<B/2<<endl;
else
cout<<0<<endl;
}
return 0;
}
