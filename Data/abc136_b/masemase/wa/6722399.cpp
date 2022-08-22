#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <set>
#include <cmath>
#include <utility>
using namespace std;
typedef long long int ll;
int main() {
int N;
cin>>N;
int ans=0;
for(int i=1;i<N+1;++i){
string s=to_string(N);
if(s.size()%2==1)
++ans;
}
cout<<ans<<endl;
}
