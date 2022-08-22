#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
#include <queue>
#include <unordered_map>
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
typedef long long ll;
using namespace std;
template<class T>
vector<T> make_vec(size_t a){
return vector<T>(a);
}
template<class T, class... Ts>
auto make_vec(size_t a, Ts... ts){
return vector<decltype(make_vec<T>(ts...))>(a, make_vec<T>(ts...));
}
int main(){
int x,y; cin>> x >> y;
rep(i, x) {
if((x-i)*2 + i*4 == y) {
cout << "Yes" << endl;
return 0;
}
}
cout << "No" << endl;
return 0;
}
