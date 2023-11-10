// Given an integer array nums, find the subarray with the largest sum, and return its sum.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];

    int maxSum = INT_MIN;

    for(int i = 0; i<n; i++){
        for(int j = i; j<n; j++){
            int sum = 0;
            for(int k = i; k<=j; k++){
                sum += arr[k];
                maxSum = max(maxSum, sum);
            }
        }
    }

    cout<<maxSum<<endl;
}