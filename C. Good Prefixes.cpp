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
        ll size,total = 0,ans = 0,max_num = 0;
        cin >> size;

        ll arr[size];
        REP(j,0,size - 1) {
            cin >> arr[j];
            total += arr[j];
            max_num = max(max_num,arr[j]);
            if (total - max_num == max_num) {
                ans++;
            }
        }
        cout << ans << endl;
    }
}
