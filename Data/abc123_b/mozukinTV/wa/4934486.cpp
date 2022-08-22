#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    vector<int> a(5), b(5);
    vector<pair<int,int>> AB(5);
    for(int i = 0; i< 5; ++i){
        cin >> a[i];
        b[i] = a[i] % 10;
        if(b[i] == 0) b[i]  = 10;
        AB[i] = make_pair(b[i], a[i]);
    }
    sort(AB.begin(),AB.end());
    int time = 0;
    for(int i = 4; i >= 0; --i){
        if(AB[i].first != 0 && i != 0) time += (AB[i].second/10 + 1) * 10;
        else time += AB[i].second;
    }

    cout << time << endl;
    
}