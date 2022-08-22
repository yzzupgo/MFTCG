#include <bits/stdc++.h>
using namespace std;
int main(){
int x ,y;
cin >> x >> y;
for (int i = 0; i < x; i++){
if (2 * x <= y && y <= 4 * x){
cout << "Yes" << endl;
}
else {
cout << "No" << endl;
}
}
return 0;
}
