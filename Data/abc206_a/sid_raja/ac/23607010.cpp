#include<bits/stdc++.h>
using namespace std;
#define vs vector<string>
#define pii pair<int,int>
#define vi vector<int>
#define mii map<int,int>
#define umii unordered_map<int,int>
#define dqi deque<int>
#define pqL priority_queue<int,vector<int>,less<int>>
#define pqG priority_queue<int,vector<int>,greater<int>>
#define printKickstartSingle(T,ans) cout<<"Case #"<<T<<": "<<ans<<endl;
#define printKickstartArray(T,arr) cout<<"Case #"<<T<<": "; for(auto ele:arr) cout<<ele<<" "; cout<<endl;
#define REP(i,a,b) for(int i=a;i<b;i++)
#define all(arr) arr.begin() , arr.end()
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);
void solve() {
int N;
cin >> N;
int val = (int)floor(1.08 * (double)N);
string ans = ":(";
if(val == 206) {
ans = "so-so";
} else if(val < 206) {
ans = "Yay!";
}
cout << ans << endl;
}
void solve2() {
int N;
cin >> N;
int start = 0;
int count = 0;
int num = 0;
while(start < N) {
start += num;
num++;
count++;
}
cout << count - 1 << endl;
}
void solve3() {
int n;
int i;
cin >> n;
vi arr;
REP(i, 0, n) {
int ele;
cin >> ele;
arr.push_back(ele);
}
unordered_map<int, int>dic;
for(auto ele : arr) {
dic[ele]++;
}
long long ans = 0;
for(auto ele : dic) {
ans += (long long)(n - ele.second) * ele.second;
}
cout << ans / 2 << endl;
}
int main() {
fastIO
solve();
return 0;
}
