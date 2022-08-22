#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
int x , y;
cin >> x >> y ;
if((y - 2 * x) % 2 == 0){
if((4 * x - y) % 2 == 0)
cout << "Yes";
else
cout << "No";
}
else{
cout << "No";
}
}
