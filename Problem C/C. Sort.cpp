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


int main() {
    int lim;
    cin >> lim;

    REP(i,1,lim) {
        ll n, q;
        str num1, num2;

        cin >> n >> q >> num1 >> num2;

        vector<vector<ll>> prefix1(n + 1, vector<ll>(26, 0));
        vector<vector<ll>> prefix2(n + 1, vector<ll>(26, 0));

        REP(j, 0, n - 1) {
            prefix1[j + 1] = prefix1[j];
            prefix2[j + 1] = prefix2[j];
            prefix1[j + 1][num1[j] - 'a']++;
            prefix2[j + 1][num2[j] - 'a']++;
        }

        while (q--) {
            ll l, r, ans = 0;
            cin >> l >> r;
            --l; --r;

            vector<ll> v1(26, 0), v2(26, 0);

            REP(k, 0, 25) {
                v1[k] = prefix1[r + 1][k] - prefix1[l][k];
                v2[k] = prefix2[r + 1][k] - prefix2[l][k];
                ans += abs(v1[k] - v2[k]);
            }

            cout << ans / 2 << endl;
        }
    }
}
