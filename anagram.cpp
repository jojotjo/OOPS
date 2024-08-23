//Check whether two Strings are anagram of each other
//Given two strings s1 and s2 consisting of lowercase characters, the task is to check whether the two given strings are anagrams of each other or not.
//An anagram of a string is another string that contains the same characters, only the order of characters can be different.
//For example, “act” and “tac” are anagrams of each other.

// anagramproj.cpp : This file contains the 'main' function. Program execution begins and ends there.

// sample:
// str1 = cat
// str2 = act

#include <iostream>
#include <string>
using namespace std;

bool checkanagram(string str1, string str2) {
    int freq[26] = { 0 };                      
    if (str1.length() != str2.length()) {
        return false;
    }
    for (int i = 0;i < str1.length();i++) {
        freq[str1[i] - 'A']++;
    }
    for (int i = 0;i < str2.length();i++) {
            freq[str2[i] - 'A']--;
    }
    for (int i = 0;i < 26;i++) {
        if (freq[i] != 0) {
            return false;
        }
        return true;
    }
}

int main()
{
    string str1 = "KEY";
    string str2 = "EKY";
    if (checkanagram(str1, str2))
        cout << "true" << endl;
    else
        cout << "false" << endl;

    return 0;
}





