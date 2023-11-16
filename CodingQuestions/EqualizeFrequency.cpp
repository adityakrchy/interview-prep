// You are given a 0-indexed string word, consisting of lowercase English letters. You need to select one index and remove the letter at that index from word so that the frequency of every letter present in word is equal.

// Return true if it is possible to remove one letter so that the frequency of all letters in word are equal, and false otherwise.

// Note:

// The frequency of a letter x is the number of times it occurs in the string.
// You must remove exactly one letter and cannot choose to do nothing.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string word = "aabb";
    unordered_map<char, int> mp;
    for (int i = 0; i < word.length(); i++)
    {
        mp[word[i]]++;
    }

    unordered_map<char, int>::iterator it;

    int max = 1;

    for (it = mp.begin(); it != mp.end(); it++)
    {
        if(it->second > max){
            max = it->second;
        }
    }

    int count = 0;
    for (it = mp.begin(); it != mp.end(); it++)
    {
        if(it->second != max){
            count++;
        }
    }

    if(count > 1){
        cout<<"false";
    }
    else{
        cout<<"true";
    }
}