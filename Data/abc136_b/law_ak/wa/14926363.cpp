#include <bits/stdc++.h>
using namespace std;
int main() {
int N;
cin >> N;
int i;
int count = 0;
for(i=1;i<N;i++){
string s = to_string(i);
int size = s.size();
if(size % 2 == 1){
count++;
}
}
cout << count << endl;
}
