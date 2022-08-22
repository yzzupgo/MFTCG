#include <bits/stdc++.h>
using namespace std;
int main() {
int x, y;
cin >> x >> y;
int total = 0;
std::string isok = "No";
for (int i=0; i<x; i++){
total = 2 * (x- i) + 4 * (i);
if(total == y){
isok = "Yes";
break;
}
}
std::cout << isok << std::endl;
}
