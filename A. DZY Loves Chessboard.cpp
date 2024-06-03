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
    int n,m;
    str input;
    cin >> n >> m;

    if (m == 0) cout << "\n";
    else {
        REP(i,1,n) {
            cin >> input;
            REP(j,0,m - 1) {
                if (i % 2 == 0) {
                    if (j % 2 == 0 && input[j] == '.') cout << "B";
                    elif (input[j] == '.') cout << "W";
                    else cout << "-";
                }
                else {
                    if (j % 2 == 0 && input[j] == '.') cout << "W";
                    elif (input[j] == '.') cout << "B";
                    else cout << "-";
                }
            }
            cout << "\n";
        }
        
    }
}
