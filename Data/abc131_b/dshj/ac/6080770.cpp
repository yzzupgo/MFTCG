#include<iostream>
#include<cmath>
#include<string>
#include<vector>
#include<numeric>
using namespace std;
int main(){
int N, L;
int sum;
vector<int> vec;
cin >> N >> L;
for(int i=1; i<=N ; i++ ){
vec.push_back(i+L-1);
}
int absmin=99999;
for(auto itr = vec.begin(); itr != vec.end(); ++itr) {
if(abs(*itr) < abs(absmin)){
absmin = *itr;
}
}
sum = accumulate(vec.begin(), vec.end(), 0);
if(absmin == 0){
cout << sum;
}else if(absmin < 0){
cout << sum-absmin;
}else{
cout << sum-absmin;
}
return 0;
}
