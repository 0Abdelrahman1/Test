#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <deque>
#include <map>
#include <set>
#include <utility>

using namespace std;

int BinarySearch(int low, int high, int value, int arr[]);
int ReversedBinarySearch(int low, int high, int value, int arr[]);

int main()
{
    int n, k; cin >> n >> k;
    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "index of k is: " << ReversedBinarySearch(0, n - 1, k, arr) << endl;

    return 0;
}



int BinarySearch(int low, int high, int value, int arr[])
{
    bool isfound = 0;
    int mid;

    while (high - low > 1)
    {
        mid = (high - low) / 2;

        if (arr[mid] == value)
        {
            isfound = 1; break;
        }
        else if (arr[mid] < value)
            low = mid;
        else if (arr[mid] > value)
            high = mid;
    }

    if (isfound) return mid;
    else return -1;
}



int ReversedBinarySearch(int low, int high, int value, int arr[])
{
    bool isfound = 0;
    int mid;

    while (high - low > 1)
    {
        mid = (high - low) / 2;

        if (arr[mid] == value)
        {
            isfound = 1; break;
        }
        else if (arr[mid] < value)
            high = mid;
        else if (arr[mid] > value)
            low = mid;
    }

    if (isfound) return mid;
    else return -1;
}



/*
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long long T; cin >> T;
    int cnt[T] = {};

    for (long long t = 0; t < T; t++)
    {
        int n; cin >> n;
        int arr1[n], arr2[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr1[i];

            arr2[i] = arr1[i];
        }

        sort (arr2 , arr2 + n);

        for (int i = 1; i < n - 1; i++)
        {
            if (arr1[i] == arr2[i])
            {
                cnt[t]++;
            }
        }
    }

    for (long long t = 0; t < T; t++)
        cout << cnt[t] << '\n';
*/
asd
\
