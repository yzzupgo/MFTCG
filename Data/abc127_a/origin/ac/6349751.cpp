#include<iostream>
#include<vector>
#include<string>
#include<map>
using namespace std;
map<char,int> a;
int main(){
int a,b;
cin >> a >> b;
if(a > 12) cout << b << endl;
else if(a <= 12 & a > 5) cout << b/2 << endl;
else cout << 0 << endl;
}
