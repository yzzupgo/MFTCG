#include<iostream>
#include<string>
using namespace std;
int main(){
int ans = 0;
int N; cin >> N;
for(int i = 1; i <= N; ++i){
if(to_string(i).size() % 2)++ans;
}
cout << ans << endl;
}
