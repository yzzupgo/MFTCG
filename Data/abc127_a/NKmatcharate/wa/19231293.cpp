#include <iostream>
using namespace std;
int main(){
int old, money; cin >> old >> money;
if(old >= 13) cout << money << endl;
else if(old >= 12 && old <= 6) cout << money / 2 << endl;
else cout << 0 << endl;
}
