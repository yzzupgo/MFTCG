#include<bits/stdc++.h>
using namespace std;
#define ll long long
void fast(){
ios_base::sync_with_stdio(0);
cin.tie(nullptr); cout.tie(nullptr);
}
int a [100000+5];
int main(){ fast();
int x, y; cin >> x >> y;
if( x*2 == y || x*3 == y )
cout << "Yes";
else{
int t = x;
while( x*3 > y ){
x--;
}
if( (x*3)+((t-x)*2) == y )
cout << "Yes\n";
else
cout << "No\n";
}
}
