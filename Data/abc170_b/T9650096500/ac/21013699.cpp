#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<cmath>
#include<iomanip>
#include<map>
#include<stack>
#include<queue>
using namespace std;
using P = pair<int,int>;
using ll = long long;
const long double EPS = 1e-10;
int main(){
int X,Y;
cin >> X >> Y;
if((Y-2*X) >= 0 && (Y-2*X) % 2 == 0 && (Y-2*X) / 2 <= X)
cout << "Yes" << endl;
else
cout << "No" << endl;
}
