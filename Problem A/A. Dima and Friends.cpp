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
    int lim,n,total = 0,counter = 1,final = 0;
    vti list = {1,2,3,4,5};

    cin >> lim;
    REP(i,0,lim - 1){
        cin >> n;
        total += n;
    }

    while (counter - total <= 5){
        if (counter - total <= 5 && counter - total > 0) {
            list.pop_back();
        }
        counter += lim + 1;
    }
    cout << list.size() << endl;
}
