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
 
bool Checker(vector<vector<ll>>& first_grid, vector<vector<ll>>& second_grid, ll n, ll m) { 
    REV(i,n - 1,1){
        REV(j,m - 1,1){
            if (first_grid[i][j] != second_grid[i][j]) {
                ll temp = (second_grid[i][j] - first_grid[i][j] + 3) % 3;
                first_grid[i][j] = second_grid[i][j];
                first_grid[i-1][j] = (first_grid[i-1][j] + 2 * temp) % 3;
                first_grid[i][j-1] = (first_grid[i][j-1] + 2 * temp) % 3;
                first_grid[i-1][j-1] = (first_grid[i-1][j-1] + temp) % 3;
            }
        }
    }
    REP(k,0,n - 1) {
        if (first_grid[k][0] != second_grid[k][0]) return false;
    }
    REP(l,0,m - 1) {
        if (first_grid[0][l] != second_grid[0][l]) return false;
    }
    return true;
}
 
int main() {
    int lim;
    cin >> lim;
    REP(i,1,lim) {
        ll n, m;
        char num;
        cin >> n >> m;
 
        vector<vector<ll>> first_grid(n, vector<ll>(m));
        vector<vector<ll>> second_grid(n, vector<ll>(m));
 
        REP(j,0,n - 1) {
            REP(k,0,m - 1) {
                cin >> num;
                first_grid[j][k] = num - '0';
            }
        }
 
        REP(l,0,n - 1) {
            REP(o,0,m - 1) {
                cin >> num;
                second_grid[l][o] = num - '0';
            }
        }
 
        if (Checker(first_grid, second_grid, n, m)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}
