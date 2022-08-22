#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
int main(){
int x, y;
cin >> x >> y;
if(y >= 4 && 4 * x >= y && 2 * x <= y){
cout << "Yes";
}
else if(y < 4 && 4 * x > y && 2 * x <= y){
cout << "Yes";
}
else{
cout << "No";
}
return 0;
}
