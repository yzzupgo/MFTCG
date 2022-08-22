#include <bits/stdc++.h>
using namespace std;
int main(){
int x, y;
cin >> x;
cin >> y;
int leg = 0;
for (int i=0; i!=x; ++i){
leg = 4*i + 2*(x-i);
if(leg == y){
cout << "Yes" << endl;
return 0;
}
}
cout << "No" << endl;
return 0;
}
