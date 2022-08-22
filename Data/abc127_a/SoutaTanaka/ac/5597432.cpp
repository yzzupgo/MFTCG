#include <bits/stdc++.h>
using namespace std;
int main(){
long long a = 0, b = 0, c, n;
string s;
cin >> a >> b;
if (a <= 12 && 5 < a){
cout << b / 2 << endl;
return 0;
}else if(12 < a){
cout << b << endl;
return 0;
}else{
cout << 0 << endl;
}
return 0;
}
