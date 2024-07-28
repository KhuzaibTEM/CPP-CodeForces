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

ll sortout(ll num) {
    if (num == 1) return 1LL;
    if (num == 2) return 2LL;
    if (num == 3) return 2LL;
    if (num == 4) return 3LL;
    if (num == 5) return 3LL;
    return 4LL;
}

int main() {
    int lim;
    cin >> lim;

    REP(i,0,lim - 1) {
        ll num, ans = 1;
        cin >> num;

        ll counter_num = sortout(num);

        vector<ll> v;
        if (num == 1) v.push_back(1);
        if (num == 2) {
            v.push_back(1);
            v.push_back(2);
        }
        if (num == 3) {
            v.push_back(1);
            v.push_back(2);
            v.push_back(2);
        }
        if (num == 4) {
            v.push_back(1);
            v.push_back(2);
            v.push_back(2);
            v.push_back(3);
        }
        if (num == 5) {
            v.push_back(1);
            v.push_back(2);
            v.push_back(2);
            v.push_back(3);
            v.push_back(3);
        }
        if (num == 5) {
            v.push_back(1);
            v.push_back(2);
            v.push_back(2);
            v.push_back(3);
            v.push_back(3);
            v.push_back(4);
        }
        REP(i,1,num) {
            v.push_back(ans);
            ans = (ans % counter_num) + 1;
        }
        cout << counter_num << endl;

        REP(j,0,num - 1) {
            if (j > 0) cout << " ";
            cout << v[j];
        }
        cout << "\n";
    }
}
