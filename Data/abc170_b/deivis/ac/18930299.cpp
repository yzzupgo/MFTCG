#include <bits/stdc++.h>
using namespace std;
int main() {
int x,y;
cin >> x >> y;
int min=2*x;
if((y-min)<0){
cout << "No\n";
}else if((y-min)%2!=0){
cout << "No\n";
}else{
if((x-((y-min)/2))>=0){
cout << "Yes\n";
}else{
cout << "No\n";
}
}
return 0;
}
