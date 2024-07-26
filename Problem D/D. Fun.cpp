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
        ll n, x, count = 0;
        cin >> n >> x;

        REP(j,1,x) {
            ll max_num1 = min(x - j, n / j);
            REP(k,1,max_num1) {
                ll max_num2 = min(x - j - k, (n - j * k) / (j + k));
                count += max(0LL, max_num2);
            }
        }
        cout << count << endl;
    }
}
