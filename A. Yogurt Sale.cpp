#include <bits/stdc++.h>
using namespace std;
 
#define REP(i,a,b) for (int i = a; i <= b; i++)
#define REV(i,a,b) for (int i = a; i >= b; i--)
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
 
 
 
int solve(){
    return 0;
}
 
int main(){
    int lim;
    cin >> lim;
    REP(i,1,lim) {
        ll no_yogurt, yogurt_p1, yogurt_p2,ans = 0;
        cin >> no_yogurt >> yogurt_p1 >> yogurt_p2;
        if (yogurt_p2 / 2 >= yogurt_p1) {
            cout << yogurt_p1 * no_yogurt << endl;
        }
        else {
            if (no_yogurt > 1) {
                ans += (no_yogurt / 2) * yogurt_p2;
                ans += (no_yogurt - (no_yogurt / 2) * 2) * yogurt_p1;
                cout << ans << endl;
            }
            else cout << yogurt_p1 << endl;
        }
    }
}
