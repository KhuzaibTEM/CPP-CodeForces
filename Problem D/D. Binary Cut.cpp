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
    ll lim,total,count;
    str x;
    bool checker_0;

    cin >> lim;
    REP(i,1,lim) {
        total = 1;
        count = 0;
        checker_0 = true;
        cin >> x;
        REP(j,0,x.size() - 1) {
            if (x[j] == '1') {
                if (x[j + 1] == '0' && j < x.size() - 1) total++;
                elif (!checker_0 && (x[j + 1] != '1' && j < x.size() - 1)) total++;
            }
            elif (x[j] == '0') {
                if (checker_0 && x[j + 1] == '1' && j < x.size() - 1) {
                    count++;
                    if (count == 2) checker_0 = false;
                }
                if (!checker_0 && x[j + 1] == '1' && j < x.size() - 1) total++;
            }
            
        }
        cout << total << endl;
    }
}
