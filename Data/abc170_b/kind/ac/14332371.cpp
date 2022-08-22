#include<bits/stdc++.h>
using namespace std;
int main(){
int x,y;
cin >> x >> y;
if(y%2==1 || 4*x<y || 2*x>y)
cout << "No" << endl;
else
cout << "Yes" << endl;
}
