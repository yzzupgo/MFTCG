#include <iostream>
using namespace std;
int main(){
int a,b;
cin >> a >> b;
if (b % 2 != 0){
cout << "No";
return 0;
}
if (b/2 - a >= 0 && 2 * a - b / 2 >= 0) cout << "Yes";
else cout << "No";
return 0;
}
