#include <iostream>
#include <cstring>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
int n;
while(cin>>n){
int num=0;
for(int i=1;i<10&&i<=n;++i)num++;
for(int i=100;i<1000&&i<=n;++i)num++;
for(int i=10000;i<100000&&i<=n;++i)num++;
cout<<num<<endl;
}
}
