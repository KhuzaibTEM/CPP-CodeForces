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
        ll in_goal1, in_goal2, end_goal1, end_goal2;
        cin >> in_goal1 >> in_goal2;
        cin >> end_goal1 >> end_goal2;
        if (in_goal1 < in_goal2) {
            if (end_goal1 < end_goal2) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
        else {
            if (end_goal1 > end_goal2) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    }
}
