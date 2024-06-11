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
        str word1,word2;
        char temp1,temp2;
        cin >> word1;
        cin >> word2;
        temp1 = word1[0];
        temp2 = word2[0];
        word1[0] = temp2;
        word2[0] = temp1;
        cout << word1 << " " << word2 << endl;
    }
}
