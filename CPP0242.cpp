// https://www.geeksforgeeks.org/longest-span-sum-two-binary-arrays/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int dsnp(int arr1[], int arr2[], int n)
{
    int maxLen = 0;
    for (int i = 0; i < n; i++)
    {
        int sumArr1 = 0, sumArr2 = 0;
        for (int j = i; j < n; j++)
        {
            sumArr1 += arr1[j];
            sumArr2 += arr2[j];
            if (sumArr1 == sumArr2)
            {
                int len = j - i + 1;
                if (len > maxLen)
                    maxLen = len;
            }
        }
    }
    return maxLen;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;
        int a1[n], a2[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a1[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> a2[i];
        }
        cout << dsnp(a1, a2, n) << endl;
    }
}