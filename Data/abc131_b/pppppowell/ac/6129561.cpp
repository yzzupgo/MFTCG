#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
int N,L;
cin >> N >> L;
int sum=0;
vector<int> vec(N);
for(int i=1; i<=N; i++){
vec[i-1]=L+i-1;
sum+=vec[i-1];
}
int min=vec[0];
for(int i=0; i<N-1; i++){
if(abs(vec[i]) > abs(vec[i+1])){
min=vec[i+1];
}
}
sum-=min;
cout << sum <<endl;
return 0;
}
