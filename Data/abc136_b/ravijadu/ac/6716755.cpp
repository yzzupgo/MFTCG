#include<bits/stdc++.h>
using namespace std;
int main()
{
long long N;
cin>>N;
if(N<10)
cout<<N;
else if(N<100)
cout<<9;
else if(N<1000)
cout<<(N-99)+9;
else if(N<10000)
cout<<900+9;
else if(N<100000)
cout<<(N-9999)+900+9;
else if(N=100000)
cout<<90909;
else cout<<0;
}
