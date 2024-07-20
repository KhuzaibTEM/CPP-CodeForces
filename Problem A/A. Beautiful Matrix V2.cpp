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
typedef vector<int> vti;
typedef vector<str> vts;
 
int main(){
    int matrix[6][6];
    REP(i,1,5){
        REP(j,1,5){
            cin >> matrix[i][j];
            if (matrix[i][j] == 1){
                int row = abs(3 - i);
                int col = abs(3 - j);
                cout << row + col << endl;
                break;
            }
        }
    }
}
