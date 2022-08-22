#include <bits/stdc++.h>
using namespace std;
typedef pair<int,int> ii;
typedef tuple<int,int,int> iii;
#define ll long long
#define miniiPQ priority_queue<ii,vector<ii>,greater<ii> >
#define minPQ priority_queue<int,vector<int>,greater<int> >
#define PQ priority_queue<int>
#define iiPQ priority_queue<ii>
#define US unordered_set<int>
#define UMS unordered_multiset<int>
#define UM unordered_map<int>
#define ST stack<int>
void m1(){
int x,y;
cin >> x >> y;
if(y%2==0) cout << "No";
else if(y >= 2 *x && y <= 4*x) cout << "Yes";
else cout << "No";
}
int main(){
m1();
}
