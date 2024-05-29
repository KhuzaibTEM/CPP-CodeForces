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
    int lim,count,counter,n;
    counter = 0;
    cin >> lim;
    cin >> count;

    vti list;
    vti list2;
    REP(i,1,lim) {
        cin >> n;
        list.push_back(n);
        list2.push_back(i);
    }
    while (counter < lim - 1) {
        if (list[0] > count) {
            list[0] -= count;
            list.push_back(list[0]);
            list2.push_back(list2[0]);
            list.erase(list.begin());
            list2.erase(list2.begin());
        } else {
           list.erase(list.begin());
           list2.erase(list2.begin());
           counter++;
        }
    }
    cout << list2[0] << endl;
}
