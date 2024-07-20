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
    ll lim,n,f,k,fav;

    cin >> lim;
    REP(i,1,lim) {
        cin >> n >> f >> k;
        if (k == 0) cout << "NO" << endl;
        else {
            ll arr[n];
            multiset<ll> s;
            REP(j,0,n - 1) {
                cin >> arr[j];
                s.insert(arr[j]);
            }
            fav = arr[f - 1];
            ll count = sizeof(arr) / sizeof(arr[0]);
            sort(arr, arr + count, greater<ll>());

            if (fav > arr[k - 1]) cout << "YES" << endl;
            elif (fav < arr[k - 1]) cout << "NO" << endl;
            else {
                if (fav == arr[k] && k < count) cout << "MAYBE" << endl;
                else cout << "YES" << endl;
            }
        }
        
    }
}
