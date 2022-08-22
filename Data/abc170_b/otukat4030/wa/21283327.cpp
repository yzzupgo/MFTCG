#include<iostream>
using namespace std;
int main(){
int X, Y;
cin >> X >> Y;
if(4*X-Y>=0 && (4*X-Y)%2==0 && 4*X-Y<=X) cout << "Yes" << endl;
else cout << "No" << endl;
return 0;
}
