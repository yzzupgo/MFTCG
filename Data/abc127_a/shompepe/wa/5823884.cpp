#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
typedef long long ll;
int main(){
int a, b;
cin >> a >> b;
if(a <= 5) cout << b << endl;
else if(a <= 12) cout << b/2 << endl;
else cout << b << endl;
}
