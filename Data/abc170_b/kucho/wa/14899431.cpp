#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(0);
int x, y;
cin >> x >> y;
if(y >= 4 && x >= y / 4 && x <= y / 2){
cout << "Yes";
}
else if(y < 4 && x > y / 4 && x <= y / 2){
cout << "Yes";
}
else{
cout << "No";
}
return 0;
}
