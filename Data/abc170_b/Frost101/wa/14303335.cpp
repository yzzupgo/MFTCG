#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
ll X,Y;
cin>>X>>Y;
if(Y%2!=0){
cout<<"No"<<endl;
return 0;
}
else{
ll gg=Y/2;
ll hh=Y/4;
if(X>=hh&&X<=gg){
cout<<"Yes"<<endl;
}
else{
cout<<"No"<<endl;
}
}
return 0;
}
