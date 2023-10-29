#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    int p = 0;

    while (p < t)
    {
        int n, k, sum, girls = -1;
        cin >> n >> k;
        int a[n];

       
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        
        for (int i = 0; i <= n - k; i++) 
        {
            sum = 0;
           
            for (int j = i; j < (i + k); j++)
            {
                sum = sum + a[j];
            }

            if (girls < sum)
            {
                girls = sum;
            }
        }

        cout << girls << endl;

        p++;
    }
}
