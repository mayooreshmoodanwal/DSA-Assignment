// #include <iostream>
// #include <numeric> 
// using namespace std;

// int main() {
//     int t;
//     cin>>t;
//     while(t--){
//         int a,b,c;
//         cin>>a>>b>>c;
//         if(a==b){
//             cout<<0<<endl;
//         }
//         else if(std::gcd(a,c)==std::gcd(b,c)){
//             cout<<1<<endl;
//         }
//         else if(std::gcd(a,c+1)==std::gcd(b,c+1)){
//             cout<<2<<endl;
//         }
//         else {
//             cout<<3<<endl;
//         }
//     }

// }


#include <iostream>
using namespace std;

int gcd(int a, int b){
    while(b){
        int t = a % b;
        a = b;
        b = t;
    }
    return a;
}

int main() {
    int t;
    cin >> t;

    while(t--){
        int a,b,c;
        cin >> a >> b >> c;

        if(a == b){
            cout << 0 << endl;
        }
        else if(gcd(a,c) == gcd(b,c)){
            cout << 1 << endl;
        }
        else if(gcd(a,c+1) == gcd(b,c+1)){
            cout << 2 << endl;
        }
        else{
            cout << 3 << endl;
        }
    }
}