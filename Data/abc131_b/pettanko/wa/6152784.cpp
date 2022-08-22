#include <bits/stdc++.h>
#include <algorithm>
#include <string>
#include <math.h>
#include <cstdlib>
#include <cmath>
#include <vector>
#include <queue>
using ll = long long;
using namespace std;
int main() {
int N;cin>>N;
int L;cin>>L;
int ans;
if(L>=0){
ans=(2*L+N)*(double(N-1)/2);
}else if(L+N>=0){
ans=(2*L+N-1)*double(N/2);
}else{
ans=(2*L+N-2)*(double(N-1)/2);
}
cout<<ans<<endl;
return 0;
}
