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



int solve() {
    return 0;
}

int main() {
    int lim;
    cin >> lim;
    REP(i,1,lim) {
        ll temp, default1 = 0, default2 = 0, ans1, ans2, abs_ans1, abs_ans2;
        int size;
        cin >> size;
        REP(j,1,size) {
            cin >> temp;
            ans1 = default1 + temp;
            ans2 = default2 + temp;
            abs_ans1 = abs(default1 + temp);
            abs_ans2 = abs(default2 + temp);
            default1 = max(max(ans1,ans2), max(abs_ans1,abs_ans2));
            default2 = min(min(ans1,ans2), min(abs_ans1,abs_ans2));
        }
        cout << max(abs(default1), abs(default2)) << endl;
    }
}
