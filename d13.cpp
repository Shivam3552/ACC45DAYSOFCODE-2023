#include<iostream>
using namespace std;

int main() {
    int t;
    cin >> t;  // Number of test cases

    int i = 0;

    while (i < t) {
        int pair = 0, k;
        long long n;
        cin >> n;  // Read the integer n for the current test case

        if (n % 2 == 0) {
            pair = (n * n) / 2;
        } else {
            k = (n / 2);
            pair = 2 * ((k + 1) * (n - k - 1));
        }

        cout << pair << endl;  // Print the result for the current test case

        i++;  // Move to the next test case
    }

    return 0;
}
