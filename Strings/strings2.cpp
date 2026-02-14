#include <iostream>
#include <string>
#include <cctype>

using namespace std;

// Function should be outside main
bool isPalindrome(string s) {

    int st = 0;
    int end = s.length() - 1;

    while (st < end) {

        // Skip non-alphanumeric from start
        if (!isalnum(s[st])) {
            st++;
            continue;
        }

        // Skip non-alphanumeric from end
        if (!isalnum(s[end])) {
            end++;
            continue;
        }

        // Compare after converting to lowercase
        if (tolower(s[st]) != tolower(s[end])) {
            return false;
        }

        st++;
        end--;
    }

    return true;
}

int main() {

    string s = "A man, a plan, a canal: Panama";

    if (isPalindrome(s)) {
        cout << "Palindrome" << endl;
    }
    else {
        cout << "Not Palindrome" << endl;
    }

    return 0;
}
