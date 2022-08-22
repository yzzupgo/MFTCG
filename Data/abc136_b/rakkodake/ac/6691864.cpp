#include<iostream>
#include<math.h>
#include <algorithm>
#include<float.h>
#include <limits>
#include <vector>
#include <numeric>
#define rep(i,a,n) for(int (i) = (a);(i) < (n);(i)++)
#define urep(i,a,n) for(int (i) = (a);(i) > (n);(i)--)
#define MOD 1000000007
#define ll long long
using namespace::std;
int main(){
int N;
cin>>N;
if(N<10) cout<<N;
else if(N<100) cout<<9;
else if(N<1000) cout<<9+(N-99);
else if(N<10000) cout<<9+900;
else if(N<100000) cout<<9+900+(N-9999);
else cout<<9+900+90000;
}
