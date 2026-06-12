#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int k, n;
        cin >> n >> k;
        int ans = 0;
        while (k > 0) {
            if (k >= (2 * n)) {
                ans = ans + k + (k - (2 * n) + 1);
                k = k - (2 * n);
            }
            else {
                ans = ans + k;
                break;
            }
            
        }
        cout << ans << endl;
    }

}