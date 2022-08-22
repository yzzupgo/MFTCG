#include<iostream>
#include<vector>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
#include<queue>
#include<stack>
#include<algorithm>
#include<string>
#include<math.h>
#include <iomanip>
#include <numeric>
#define _USE_MATH_DEFINES
using namespace std;
int main()
{
int x,y;
cin>>x>>y;
for(int i=0;i<=x;i=i+1)
{
if(y==i*2 + (x-i)*4){cout<<"Yes"<<endl;return 0;}
}
cout<<"No"<<endl;
}
