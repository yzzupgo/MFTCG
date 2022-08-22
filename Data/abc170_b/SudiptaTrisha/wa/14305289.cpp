#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
int x,y;
cin>>x>>y;
int temp = y - (x*2);
if(temp == 0 || temp == 2 || temp == 4){
cout<<"Yes"<<endl;
}
else cout<<"No"<<endl;
}
