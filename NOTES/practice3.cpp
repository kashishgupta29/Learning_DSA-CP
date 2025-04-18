#include <bits/stdc++.h>
using namespace std;

pair<int,int> calFreq(const vector<int> &a, int K) {
    unordered_map<int,int> f;
    for(int num : a) {
        f[num]++;
    }
    int Kf = f[K]; 
    int maxFreq = 0;
    for (auto &it : f) {
        maxFreq = max(maxFreq, it.second);
    }
    return {Kf, maxFreq};
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        auto [Kf, maxFreq] = calFreq(a, k);

        if (Kf == maxFreq) {
            cout << 0 << "\n";
            continue;
        }

        vector<vector<int>> prefix(21, vector<int>(n+1, 0));
        for(int val = 1; val <= 20; val++){
            for(int i = 0; i < n; i++){
                prefix[val][i+1] = prefix[val][i] + (a[i] == val);
            }
        }

        bool canMakeKMostFreqWithOneOp = false;

        for(int L = 1; L <= n - 1; L++){
            int newKf = prefix[k][n] - prefix[k][L];
            int newMax = 0;
            for(int val = 1; val <= 20; val++){
                int freqVal = prefix[val][n] - prefix[val][L];
                newMax = max(newMax, freqVal);
            }
            if(newKf == newMax) {
                canMakeKMostFreqWithOneOp = true;
                break;
            }
        }

        if(!canMakeKMostFreqWithOneOp){
            for(int R = 1; R <= n - 1; R++){

                int newKf = prefix[k][n - R];
                int newMax = 0;
                for(int val = 1; val <= 20; val++){
                    int freqVal = prefix[val][n - R];
                    newMax = max(newMax, freqVal);
                }
                if(newKf == newMax) {
                    canMakeKMostFreqWithOneOp = true;
                    break;
                }
            }
        }

        if (canMakeKMostFreqWithOneOp) {
            cout << 1 << endl;
        } else {
            cout << 2 << endl;
        }
    }
    return 0;
}
