#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
int main(){
string s;cin >> s;
int si = stoi(s);
int cnt = 0;
for(int i = 1; i <= si; i++){
s = to_string(i);
if(s.size()%2 != 0)cnt++;
}
cout << cnt << endl;
}
