# include <algorithm>
# include <iostream>
# include <cmath>
# include <string>
# include <vector>

using namespace std;

int timeNeeded(int time){
    if (time%10==0){
        return time;
    }else{
        return time - (time%10) + 10;
    }
}

int main() {
    int a, min=10, min_idx=-1, res;
    vector<int> time, mod;
    for (int i=0; i<5; i++){
        cin >> a;
        time.push_back(a);
        if ((a%10)!=0 && ((a%10)<min)){
            min = (a%7);
            min_idx = i;
            // cout << "min idx " << min_idx << endl;
        }
    }

    if (min_idx==-1){
        res = 0;
        for(int i=0; i<5; i++){
            res += time[i];
        }
    }else{
        // cout << "min idx " << min_idx << endl;
        res = time[min_idx];
        // cout <<  "cur is " << res << endl;
        for(int i=0; i<5; i++){
            if (i != min_idx) {
                res += timeNeeded(time[i]);
                // cout << "cur is " << res << endl;
            }
        }        
    }

    cout << res << endl;

    return 0;
}
