#include <bits/stdc++.h>
using namespace std;
int main() {
int num;
int hoot_num;
cin >> num >> hoot_num;
int b = 4*num - hoot_num;
if(b >=0 && b%2 == 0){
cout << "Yes" << endl;
}else{
cout << "No" << endl;
}
}
