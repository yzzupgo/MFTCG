#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<utility>
#include <algorithm>
#include <map>
using namespace std;
using ll = long long;
const ll mod = 1e9+7;
int main(){
int a,b;
cin >> a >> b;
if (a>=13){
cout << b;
}else if(6<=a){
cout << b/2;
}else {
cout << 0;
}
}
