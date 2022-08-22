#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <set>
#include <cmath>
#include <utility>
using namespace std;
int main() {
int N;
cin>>N;
int ans=0;
if(N<=9)
ans=N;
else if(10<=N && N<=99)
ans=9;
else if(100<=N && N<=999)
ans=9+(N-99);
else if(1000<=N && N<=9999)
ans=909;
else if(10000<=N && N<=99999)
ans=909+(N-9999);
else if(N==100000)
ans=90909;
cout<<ans<<endl;
}
