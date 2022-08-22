#include <bits/stdc++.h>
using namespace std;
vector<int> forintinput(int n) {
vector<int> x;
for(int i = 0;i < n;i++){
int ia;
cin >> ia;
x.push_back(ia);
}
return x;
}
int main(){
int x,y;
cin >> x >> y;
if(x * 2 <= y && x * 4 >= y && y % 2 == 0){
cout << "Yes" << endl;
}else{
cout << "No" << endl;
}
}
