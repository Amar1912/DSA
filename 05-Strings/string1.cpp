#include <iostream>
#include <cstring>

using namespace std;

int main() {

    char str1[50] = "Hello";
    char str2[50] = "World";
    char str3[50];

    // 1. strlen() → Find length
    cout << "Length of str1: " << strlen(str1) << endl;

    // 2. strcpy() → Copy string
    strcpy(str3, str1);
    cout << "After strcpy, str3: " << str3 << endl;

    // 3. strcat() → Concatenate (Join)
    strcat(str2, str1);
    cout << "After strcat, str1: " << str2 << endl;

    // 4. strcmp() → Compare strings
    int result = strcmp(str1, str2);

    if (result == 0)
        cout << "str1 and str2 are Equal" << endl;
    else if (result > 0)
        cout << "str1 is Greater than str2" << endl;
    else
        cout << "str1 is Smaller than str2" << endl;

    // 5. strncpy() → Copy limited characters
    strncpy(str3, str2, 3);
    str3[3] = '\0';   // Important!
    cout << "After strncpy, str3: " << str3 << endl;

    // 6. strncat() → Join limited characters
    char temp[50] = "Hi ";
    strncat(temp, str2, 3);
    cout << "After strncat: " << temp << endl;

    // 7. strchr() → Find first character
    char *p1 = strchr(str1, 'o');

    if (p1 != NULL)
        cout << "First 'o' found at: " << p1 << endl;

    // 8. strrchr() → Find last character
    char *p2 = strrchr(str1, 'o');

    if (p2 != NULL)
        cout << "Last 'o' found at: " << p2 << endl;

    // 9. strstr() → Find substring
    char *p3 = strstr(str1, "lo");

    if (p3 != NULL)
        cout << "Substring found: " << p3 << endl;

    // 10. strtok() → Split string
    char data[50] = "C++-Java-Python-DSA";

    cout << "Tokens:" << endl;

    char *token = strtok(data, "-");

    while (token != NULL) {
        cout << token << endl;
        token = strtok(NULL, "-");
    }

    // 11. cin.getline() → Input string
    char name[50];

    cout << "Enter your name: ";
    cin.getline(name, 50);

    cout << "You entered: " << name << endl;

    // 12. strcmpi() / stricmp() (Compiler Dependent)
    // Not standard in all compilers

    // 13. memset() → Fill memory
    char arr[10];
    memset(arr, 'A', 5);
    arr[5] = '\0';

    cout << "After memset: " << arr << endl;

    // 14. memcpy() → Copy memory
    char src[] = "CopyMe";
    char dest[20];

    memcpy(dest, src, strlen(src) + 1);

    cout << "After memcpy: " << dest << endl;

    return 0;
}
