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

const int N = 1e9 + 7;

int main() {
    
    int lim;
    cin >> lim;

    REP(i,1,lim) {
        str str1;
        cin >> str1;

        ll ans = 0;
        vector<ll> total(str1.size() + 1);
        vector<ll> counter(2 * str1.size() + 2);

        REP(j,0, str1.size() - 1) total[j + 1] = total[j] + (str1[j] == '1' ? 1 : -1);
        REP(k,0,2 * str1.size() + 1) counter[k] = 0;
        REP(l,1,str1.size()) {
            counter[total[l - 1] + str1.size()] += l;
            ans = (ans + (ll)counter[total[l] + str1.size()] * (str1.size() - l + 1)) % N;
        }
        cout << ans << endl;
    }
}
