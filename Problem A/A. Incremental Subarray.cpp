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
    REP(i, 1, lim) {
        ll max, max_in_ar = 0, len_ar, count = 0;
        bool flag = false;
        cin >> max >> len_ar;

        vector<ll> v(len_ar);
        REP(j, 0, len_ar - 1) {
            cin >> v[j];
            if (max_in_ar < v[j]) max_in_ar = v[j];

            if ((v[j] == 1 && v[j - 1] >= 1 && j >= 1)) flag = true;
        }
        if (flag) cout << 1 << endl;
        else cout << max - max_in_ar + 1 << endl;
    }
}
