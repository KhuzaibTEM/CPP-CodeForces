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
    int lim,n,m;
    str rounds;
 
    char arr[7] = {'A','B','C','D','E','F','G'};
 
    cin >> lim;
 
    REP(i,1,lim) {
        multiset<int> s;
        ll total = 0;
        cin >> n >> m;
        cin >> rounds;
        REP(j,0,n - 1) {
            s.insert(rounds[j]);
        }
        REP(k,0,6) {
            if (s.count(arr[k]) < m) {
                total += m - s.count(arr[k]);
            }
        }
        cout << total << endl;
    }
}
