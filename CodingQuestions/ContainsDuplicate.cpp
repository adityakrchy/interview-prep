// Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[arr[i]]++;
    }

    for (auto i : mp)
    {
        if (i.second > 1)
        {
            cout << "true";
        }
       
    }
}