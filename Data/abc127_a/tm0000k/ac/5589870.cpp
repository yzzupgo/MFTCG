#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <map>
#include <vector>
#include <stack>
#include <queue>
#include <tuple>
using namespace std;
typedef long long ll;
int dx[4] = {0,0,1,-1};
int dy[4] = {1,-1,0,0};
const int INF = 1<<29;
int main(){
int A,B;
cin >> A >> B;
if(A>=13){
cout << B << endl;
}else if(A<=5){
cout << 0 << endl;
}else{
cout << B/2 << endl;
}
return 0;
}
