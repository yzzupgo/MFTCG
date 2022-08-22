#include <bits/stdc++.h>
using namespace std;
int main(){
int x , y;
cin >> x >> y;
for (int k1 = 0; k1 <= x; k1++){
int k2 = x - k1;
if (k1 * 2 + k2 * 4 == y){
cout << "Yes"<<endl;
return 0;
}
}
cout << "No"<<endl;
return 0;
}
