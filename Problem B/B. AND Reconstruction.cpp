#include <bits/stdc++.h>
using namespace std;
 
#define REP(i,a,b) for (ll i = a; i <= b; i++)
#define REV(i,a,b) for (ll i = a; i >= b; i--)
#define elif else if
#define lb lower_bound
#define ub upper_bound
 
//#define or ||          \\                //    ||    ||    \\    //
//#define and &&          \\      /\      //     ||    ||     \\  //
//                         \\    //\\    //      ||____||      \\//
//                          \\  //  \\  //       ||____||       //
//                           \\//    \\//        ||    ||      //
//                            \/      \/         ||    ||     //
 
typedef string str;
typedef long long ll;
typedef long double ld;
typedef vector<int> vti;
typedef vector<str> vts;


vector<vector<ll>> v_arr(int lim, vector<pair<ll, vector<ll>>> &testCases) {
    vector<vector<ll>> ans;

    for (const auto &c : testCases) {
        ll arr_s = c.first;
        const vector<ll> &v = c.second;

        vector<ll> result(arr_s, 0);
        result[0] = v[0];
        bool flag = true;

        REP(i,1,arr_s - 2) {
            result[i] = v[i - 1] | v[i];
            if ((result[i - 1] & result[i]) != v[i - 1]) {
                flag = false;
                break;
            }
        }

        result[arr_s - 1] = v[arr_s - 2];
        if (flag && (result[arr_s - 2] & result[arr_s - 1]) != v[arr_s - 2]) flag = false;
        if (flag) ans.push_back(result);
        else ans.push_back({-1});
    }

    return ans;
}

int main() {
    int lim;
    cin >> lim;

    vector<pair<ll, vector<ll>>> testCases(lim);
    REP(i,0,lim - 1) {
        ll arraySize;
        cin >> arraySize;
        vector<ll> v(arraySize - 1);
        REP(j,0,arraySize - 2) cin >> v[j];
        testCases[i] = {arraySize, v};
    }
    vector<vector<ll>> ans = v_arr(lim, testCases);

    
    for (const auto &result : ans) {
        if (result.size() == 1 && result[0] == -1) cout << -1 << endl;
        else {
            for (size_t k = 0; k < result.size(); k++)  cout << result[k] << (k + 1 == result.size() ? '\n' : ' ');
        }
    }
}
