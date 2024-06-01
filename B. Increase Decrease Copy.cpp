#include <bits/stdc++.h>
using namespace std;

#define REP(i,a,b) for (int i = a; i <= b; i++)
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
    ll lim,size;
    cin >> lim;

    REP(i,1,lim) {
        ll best = 0;
        ll ans = 0;
        bool flag = true;

        cin >> size;
        int arr[size];
        int arr2[size + 1];

        REP(j,0,size - 1) {
            cin >> arr[j];
        }
        REP(k,0,size) {
            cin >> arr2[k];
        }
        REP(l,0,size - 1) {
            if (arr[l] >= arr2[l]) {
                if (arr[l] >= arr2[size] && arr2[l] <= arr2[size] && flag) {
                    ans++;
                    flag = false;
                }
                elif (flag) {
                    if (arr[l] > arr2[size]) {
                        if (best == 0) best = arr2[l] - arr2[size] + 1;
                        elif (best > arr2[l] - arr2[size] + 1) best = arr2[l] - arr2[size] + 1;
                    }
                    elif (arr[l] < arr2[size]) {
                        if (best == 0) best = arr2[size] - arr[l] + 1;
                        elif (best > arr2[size] - arr[l] + 1) best = arr2[size] - arr[l] + 1;
                    }
                }
                ans += arr[l] - arr2[l];
            } 
            elif (arr[l] < arr2[l]) {
                if (arr[l] <= arr2[size] && arr2[l] >= arr2[size] && flag) {
                    ans++;
                    flag = false;
                }
                elif (flag) {
                    if (arr[l] > arr2[size]) {
                        if (best == 0) best = arr[l] - arr2[size] + 1;
                        elif (best > arr[l] - arr2[size] + 1) best = arr[l] - arr2[size] + 1;
                    }
                    elif (arr[l] < arr2[size]) {
                        if (best == 0) best = arr2[size] - arr2[l] + 1;
                        elif (best > arr2[size] - arr2[l] + 1) best = arr2[size] - arr2[l] + 1;
                    }
                }
                ans += arr2[l] - arr[l];

            }
        }
        if (flag) cout << ans + best << endl;
        else cout << ans << endl;
    }
}
