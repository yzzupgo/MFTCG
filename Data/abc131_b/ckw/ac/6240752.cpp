#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <climits>
using namespace std;
int main(){
int N,L;cin>>N>>L;
int dif = INT_MAX;
int inde;
for(int i=1; i<N+1; i++){
int tmp = abs(L + i - 1);
if(dif > tmp){
dif = tmp;
inde = i;
}
}
cout << N*L + (N*(N+1))/2 - N - L - inde + 1 << endl;
return 0;
}
