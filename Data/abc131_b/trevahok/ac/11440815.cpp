#include<vector>
#include<iostream>
using namespace std;
int main(){
int n;
int l;
cin>>n;
cin>>l;
int flag = 0;
if( l > 0 ){
flag = 1;
}
int end = 0;
if ( l +n -1 < 0)
end = 1;
int s = 0;
for(int i = flag ; i < n - end ; i ++)
{
s+= l + i;
}
cout<<s;
return 0;
}
