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
        ll size,ans = 0, count = 0;
        bool flag = false;
        str first_str,second_str;
        cin >> size >> first_str >> second_str;

        REP(j,0,size - 1) {
            if(first_str[j] == '.' || second_str[j] == '.') flag = true;
        }
        if(!flag) {
            cout << 0 << endl;
            continue;
        }

        vector<ll> v(size + 2, 0);
        REP(k,0,size - 1) {
            if(first_str[k] == '.') count++;
            if(second_str[k] == '.') count++;
            v[k] = count;
        }
        REP(l,1,size - 2) {
            ll left = v[l - 1], right = v[size - 1] - left - 2;
            if(first_str[l] == '.' && second_str[l - 1] == 'x' && second_str[l + 1] == 'x' && left > 0 && right > 0 && second_str[l] == '.') ans++;
            if(second_str[l] == '.' && first_str[l - 1] == 'x' && first_str[l + 1] == 'x' && left > 0 && right > 0 && first_str[l] == '.') ans++;
        }
        cout << ans << endl;
    }
}
