#include <iostream>
#include <vector>
#include <cstdio>
#include <queue>
#include <map>
#include<numeric>
using namespace std;
#define rep(i,n) for(int i=0; i<(n);i++)
typedef long long ll;
int main(){
int x, y; cin >> x >> y;
int sum = 2*x;
for(int i=0; i <= x; i++){
if(sum == y){
cout << "Yes" << endl;
return 0;
}else{
sum += 2;
}
}
cout << "No" << endl;
return 0;
}
