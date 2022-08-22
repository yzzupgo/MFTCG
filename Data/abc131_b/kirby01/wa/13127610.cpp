#include <bits/stdc++.h>
using namespace std;
int main() {
int a,b,dis = 999999,total = 0;
cin >> a >> b;
vector<int> vec(a);
for(int i = 0;i < a;i++){
vec.at(i) = i + b;
total += vec.at(i);
}
for(int i = 0;i < a;i++){
if(total - (total - vec.at(i)) < dis){
dis = total - (total - vec.at(i));
}
}
cout << total - dis << endl;
}
