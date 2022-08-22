#include <bits/stdc++.h>
#define REP(i,n) for (int i=1; i<=n; i++)
#define mod 1000000007
#define pb push_back
#define ff first
#define ss second
#define ii pair<int,int>
#define vi vector<int>
#define vii vector<ii>
#define lli long long int
#define INF 1000000000
#define endl '\n'
#define mod 1000000007
const double PI=3.1415926535893238460;
typedef std::complex<double> Complex;
typedef std::valarray<Complex> CArray;
using namespace std;
#define N 101
int main()
{
int n;
cin>>n;
int dig=0;
int temp=n;
while (temp)
{
dig++;
temp/=10;
}
int answer;
if (dig<2)
answer=n;
else if (dig<3)
answer=9;
else if (dig<4)
answer=9+n-99;
else if (dig<6)
answer=9+900+n-9999;
else
answer=90909;
cout<<answer<<endl;
}
