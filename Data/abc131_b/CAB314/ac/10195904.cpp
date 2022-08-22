#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i < (int)(n);i++)
#define rep2(i,s,n) for (int i = s; i < (int)(n);i++)
#define ALL(vec) (vec).begin(),(vec).end()
#define lli long long int
#define pi 3.1415926535897932384626433832795
#define MAX_INF 9223372036854775807
#define MIN_INF 9223372036854775807+1
int main()
{
int N,L;
cin >>N>>L;
if(L*(N+L-1)<=0)
cout <<((N+L+L-1)*N)/2<<endl;
else if(L<0)
cout<<((N+L+L-1)*N)/2-L-N+1<<endl;
else
cout <<((N+L+L-1)*N)/2- L << endl;
}
