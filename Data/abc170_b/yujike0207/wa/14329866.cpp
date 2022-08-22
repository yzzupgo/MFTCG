#include<bits/stdc++.h>
using namespace std;
int main(){
int x,y;
cin >> x >> y;
if(y % 4 == 0 && x*2 <= y && x*4 >= y && (y/2) >= x && x >= (y/4)){
cout << "Yes" << endl;
}
else if(y % 4 == 2 && x*2 <= y && x*4 >= y && ((y/2) >= x >= ((y/4)+1)) ){
cout << "Yes"<< endl;
}
else {
cout << "No" << endl;
}
}
