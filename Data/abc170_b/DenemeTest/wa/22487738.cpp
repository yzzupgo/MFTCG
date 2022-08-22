#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define lli long long int
#define all(x) x.begin(),x.end()
#define pb(x) push_back(x)
#define MAX(a,b,c) max(a,max(b,c))
#define MIN(a,b,c) min(a,min(b,c))
#define fast ios_base::sync_with_stdio(false); cin.tie(0);
#define endline "\n"
int main(){
fast
int x,y;
cin >> x >> y;
if((y-(2*x))%2 == 0){
if((y-(2*x))/2 <= x){
cout << "Yes" << endline;
}
else{
cout << "No" << endline;
}
}
else{
cout << "No" << endline;
}
return 0;
}
