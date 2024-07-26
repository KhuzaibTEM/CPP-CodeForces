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


int main(){
    int lim;
    cin >> lim;

    REP(i,1,lim) {
        ll num, ans = 0;
        cin >> num;
        if (num % 4 == 0) {
            num / 4;
            ans += num / 4;
        }
        elif (num % 2 == 0) {
            num -= 2;
            ans++;
            ans += num / 4;
        }
        cout << ans << endl;

    }
}
