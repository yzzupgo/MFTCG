#include<iostream>
#include<iomanip>
#include<vector>
#include<map>
#include<queue>
#include<algorithm>
#include<cmath>
#include<cassert>
using namespace std;
typedef long long ll;
int N;
int main(){
cin >> N;
int k = 1;
ll d = 1;
ll ans = 0;
while(N>d){
if(k%2==1){
ans += min(N-d+1, 9*d);
}
d *= 10;
k++;
}
cout << ans << endl;
return 0;
}
