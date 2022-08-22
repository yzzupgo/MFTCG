#include<bits/stdc++.h>
using namespace std;
int main(){
int x, y;
bool a = false;
cin >> x >> y;
for(int i = 0; i<=x; i++){
if(2*i + 2*x == y)
a = true;
}
if(a)
cout << "Yes" << endl;
else
cout << "No" << endl;
}
