#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <map>
#include <set>
using namespace std;
int main(int argc, char const *argv[])
{
int a,b;
cin>>a>>b;
bool flag=0;
int x = 2*a;
int y = 4*a;
if(b >= x && b <= y && (b%2==0)){
cout<<"Yes"<<endl;
}else{
cout<<"N0"<<endl;
}
return 0;
}
