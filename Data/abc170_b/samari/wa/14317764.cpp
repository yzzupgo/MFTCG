#include <bits/stdc++.h>
using namespace std;
int main() {
int x, y;
cin >> x >> y;
if((4*x-y)%2 == 0 && y < 4*x && 4*x < 2*y){
cout << "Yes"<<endl;
}
else{
cout <<"No" <<endl;
}
}
