#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
int a;
int b;
cin >> a >> b;
vector <int> tmp(3);
tmp.push_back(a+b);
tmp.push_back(a-b);
tmp.push_back(a*b);
int max = * max_element(tmp.begin(), tmp.end());
cout << max <<endl;
}
