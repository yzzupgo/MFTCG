#include <iostream>
#include <set>
#include <algorithm>
#include <vector>
#include <map>
#include <string>
using namespace std;
int main(void){
int n,l,i,su=0;
vector<int> taste;
cin >> n >> l;
taste.resize(n);
for(i=0;i<n;i++) {
taste[i] = l+i;
su += l+i;
}
if(taste[0] <= su && su <= taste[n-1]) cout << su << endl;
else if (su < taste[0]) cout << su-taste[n-1] << endl;
else cout << su-taste[0] << endl;
}
