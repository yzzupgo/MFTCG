#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <tuple>
#include <cstdint>
#include <cstdio>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <deque>
#include <unordered_map>
#include <unordered_set>
#include <bitset>
#include <cctype>
using namespace std;
int main(){
int N;
cin >> N;
if(N/100000==1){
cout <<90909<< endl;
}
else if(N/10000==1){
cout << 909+N-9999 << endl;
}
else if(N/1000==1){
cout << 909 << endl;
}
else if(N/100==1){
cout << 9+N-99 << endl;
}
else if(N/10==1){
cout << 9 << endl;
}
else{
cout << N << endl;
}
}
