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
        ll size, ans = 0;
        str seq;
        stack<ll> s;
        cin >> size >> seq;

        for (ll i = 0; i <= size - 1; i += 2) {
            if (seq[i] == '_') {
                if (i == 0 || seq[i - 1] == ')') {
                    seq[i] = '(';
                } else {
                    seq[i] = ')';
                }
            }
        }
        REP(j,0,size - 1) {
            if (seq[j] == '(') s.push(j);
            elif (seq[j] == ')') {
                if (!s.empty()) {
                    ans += j - s.top();
                    s.pop();
                }
            }
        }
        cout << ans << endl;
    }
}
