#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <stack>
#include <queue>
#include <list>
#include <string>
#include <numeric>
#include <math.h>
#include <set>
#include <map>
#include <fstream>
#include <sstream>
#include <iterator>
#include <complex>
using namespace std;
long long gcd(long long a,long long b){return b?gcd(b,a%b):a;}
long long lcd(long long a,long long b){return a*b / gcd(a,b) / gcd(a,b);}
int main()
{
int x,y;
cin>>x>>y;
if(2*x <= y && y <= 4*x && y % 2 == 0)
{
cout<<"Yes"<<endl;
}
else
{
cout<<"No"<<endl;
}
}
