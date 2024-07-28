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


vector<ll> solve_case(ll n, vector<ll>& arr) {
    vector<ll> sum;
    
    while (*max_element(arr.begin(), arr.end()) > 0) {
        if (sum.size() >= 40) return {-1};

        vector<ll> zero_check;
        for (int x : arr) {
            if (x != 0) zero_check.push_back(x);
        }

        if (zero_check.size() > 1 && (zero_check[0] % 2) != (zero_check[1] % 2)) return {-1};  
        
        ll min_val = *min_element(arr.begin(), arr.end()), max_val = *max_element(arr.begin(), arr.end()), x = (min_val + max_val) / 2;
        sum.push_back(x);
        for (ll& abs_val : arr) abs_val = abs(abs_val - x);
    }
    
    vector<ll> ans;
    ans.push_back(sum.size());
    ans.insert(ans.end(), sum.begin(), sum.end());
    
    return ans;
}

int main() {
    int lim;
    cin >> lim;

    vector<pair<ll, vector<ll>>> lim_case(lim);
    REP(i,0,lim - 1) {
        ll n;
        cin >> n;
        vector<ll> arr(n);
        for (ll& x : arr) cin >> x;

        vector<ll> ans = solve_case(n, arr);

        if (ans[0] == -1) cout << -1 << endl;
        else {
            cout << ans[0] << endl;
            REP(j,1,ans.size() - 1) cout << ans[j] << " ";
            cout << "\n";
        }
    }
}
