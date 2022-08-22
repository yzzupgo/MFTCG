#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
int N,L;
cin >> N >> L;
int sum=0,min;
vector<int> vec(N);
for(int i=1; i<=N; i++){
vec[i-1]=L+i-1;
sum+=vec[i-1];
vec[i-1]=abs(vec[i-1]);
}
min=*min_element(vec.begin(),vec.end());
sum-=min;
cout << sum <<endl;
return 0;
}
