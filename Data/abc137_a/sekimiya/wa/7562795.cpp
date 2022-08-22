#include <iostream>
#include <stdlib.h>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
int N;
vector<string> v;
cin >> N;
for(int i=0; i<N; i++) {
string x;
cin >> x;
v.push_back(x);
sort(v[i].begin(),v[i].end());
};
long long ans_n = 0;
for(long long i=0; i<N; i++){
string tmp_i = v[i];
for(long long j=i+1; j<N; j++){
string tmp_j = v[j];
if(tmp_i == tmp_j){
ans_n ++;
}
}
}
cout << ans_n << endl;
}
