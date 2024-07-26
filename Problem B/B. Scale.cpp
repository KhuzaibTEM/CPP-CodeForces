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
        ll n, k;
        cin >> n >> k;

        vector<vector<char>> v(n);
        REP(j,0,n - 1) {
            str row;
            cin >> row;
            for (char c : row) {
                v[j].push_back(c);
            }
        }
        for (ll l = 0; l <= n - 1; l += k) {
            for (ll m = 0; m <= n - 1; m += k) {
                cout << v[l][m];
            }
            cout << "\n";
        }
    }
}
