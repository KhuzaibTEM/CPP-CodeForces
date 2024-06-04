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
    ll lim,n,x;

    cin >> lim;
    REP(i,1,lim) {
        cin >> n;

        ll arr[n + 1], arr2[n + 1];
        REP(j,2,n) {
            cin >> x;
            arr[j] = x;
            if (j == 2) arr2[j - 1] = x + 1;
            if (arr2[j - 1] <= x && j > 2) {
                while (true) {
                    if (arr2[j - 1] <= x) arr2[j - 1] += arr2[j - 2];
                    else break;
                }
            }
            arr2[j] = arr2[j - 1] + x;
        }
        REP(k,1,n) {
            cout << arr2[k] << " ";
        }
        cout << "\n";
    }
}
