// Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target. You may assume that each input would have exactly one solution, and you may not use the same element twice. You can return the answer in any order.
// Input: nums = [2,7,11,15], target = 9
// Output: [0,1]
// Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].

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

    int target;
    cin >> target;

    unordered_map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        int x = target - arr[i];
        if (m.find(x) != m.end())
        {
            cout << m[x] << " " << i << endl;
        }
        // Store the current element's index in the map
        m[arr[i]] = i;
    }
    return 0;
}