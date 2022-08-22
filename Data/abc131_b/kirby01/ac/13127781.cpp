#include <bits/stdc++.h>
using namespace std;
int main() {
int a,b,dis = 999999,total = 0,eat = 0;
cin >> a >> b;
vector<int> vec(a);
for(int i = 0;i < a;i++){
vec.at(i) = i + b;
total += vec.at(i);
}
for(int i = 0;i < a;i++){
if(abs(total - (total - vec.at(i))) < dis){
dis = abs( total - (total - vec.at(i)));
eat = vec.at(i);
}
}
cout << total - eat << endl;
}
