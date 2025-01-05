#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

// Function to check if two strings are anagrams
bool areAnagrams(string str1, string str2) {
    // If lengths are different, they can't be anagrams
    if (str1.length() != str2.length()) {
        return false;
    }

    // Sort both strings
    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());

    // Compare sorted strings
    return str1 == str2;
}

int main() {
    string str1, str2;

    cout << "Enter the first string: ";
    cin >> str1;

    cout << "Enter the second string: ";
    cin >> str2;

    if (areAnagrams(str1, str2)) {
        cout << "The strings are anagrams of each other." << endl;
    } else {
        cout << "The strings are not anagrams of each other." << endl;
    }

    return 0;
}