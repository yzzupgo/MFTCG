#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

vector<int> v(5);
vector<int> mod(5);

int main(){
    for(int i = 0; i < 5; i++){
        cin >> v[i];
        mod[i] = v[i]%10;
    }

    int index = -1;
    int mi = 150;
    for (int i = 0; i< 5; i++){
        if (mod[i] < mi && mod[i] != 0){
            index = i;
            mi = mod[i]; 
        }
    }

    for (int i = 0; i < 5; i++){
        if (i != index && mod[i] != 0){
            v[i] += (10 - mod[i]);
            cout << v[i] << endl;
        }
    }    

    int res = 0;
    for (int i = 0; i < 5; i++){
        res += v[i];
    }

    cout << res << endl;
}