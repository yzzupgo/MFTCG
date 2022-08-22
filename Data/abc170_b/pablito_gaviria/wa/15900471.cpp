#include <iostream>
#include<vector>
#include<queue>
#include<algorithm>
#include<numeric>
#include<stack>
#include<string>
#include<climits>
#include<cmath>
#include<iomanip>
#include<unordered_map>
#include<set>
#define MAX 2147483647
typedef long long int lli;
using namespace std;
int main(){
int x,y;
cin>>x>>y;
if(y%2!=0)cout<<"No"<<"\n";
else{
if(y>4*x)cout<<"No"<<"\n";
else{
cout<<"Yes"<<"\n";
}
}
}
