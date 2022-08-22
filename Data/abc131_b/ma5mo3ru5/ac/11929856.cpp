#include<iostream>
#include<iomanip>
#include<vector>
#include<map>
#include<stack>
#include<queue>
#include<string>
#include<algorithm>
#include<cmath>
#include<climits>
using namespace std;
using ll = long long;
void read();
template<typename First, typename... Rest> void read(First& first, Rest&... rest);
void write();
template<typename First, typename... Rest> void write(First first, Rest... rest);
template<typename T> void write_vec(vector<T>& v, char divider);
int main(){
int N, L;
read(N, L);
int sum = 0;
int abs_min = abs(L);
int abs_min_i = 1;
for(int i = 1; i <= N; i++){
sum += L + i - 1;
if(abs(L + i - 1) < abs_min){
abs_min = abs(L + i - 1);
abs_min_i = i;
}
}
int ans = sum - (L + abs_min_i - 1);
write(ans);
return 0;
}
void read(){
}
template<typename First, typename... Rest>
void read(First& first, Rest&... rest){
cin >> first;
read(rest...);
}
void write(){
}
template<typename First, typename... Rest>
void write(First first, Rest... rest){
cout << first << " ";
write(rest...);
}
template<typename T>
void write_vec(vector<T>& v, char divider){
for(size_t i = 0; i < v.size(); i++){
cout << v[i] << divider;
}
}
