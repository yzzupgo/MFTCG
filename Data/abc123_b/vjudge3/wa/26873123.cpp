#include<bits/stdc++.h>
#define ll long long
using namespace std;
// ios_base :: sync_with_stdio(false);
// cin.tie(NULL);

///////////////////////// Restaurant ///////////////
bool sortbysec(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a.second < b.second);
}

void solve() {
    vector<pair<int , int>> v(5);
    for(int i = 0 ; i < 5 ; i++) {
        cin >> v[i].first;
        v[i].second = 0;
    }
    for(int i = 0 ; i < 5 ; i++) {
        if(v[i].first % 10) {
            int near = v[i].first + (10 - v[i].first%10);
            v[i].second = near;
        }
    }
    sort(v.begin() , v.end() , sortbysec);
    int totalTime = 0;
    for(int i = 0 ; i < 5 ; i++) {
        if(v[i].second == 0) {
            totalTime += v[i].second;
        }
    }
    for(int i = 0 ; i < 5 ; i++) {
        if(v[i].second != 0) {
            totalTime += v[i].second;
            if(totalTime % 10) {
                int neartotal = totalTime + (10 - totalTime%10);
                totalTime += (neartotal - totalTime);
            }
        }
    }

    cout << totalTime << endl;

}

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);

    solve();

	return 0;
}