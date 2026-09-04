#include <iostream>
using namespace std;

bool isPalindrome(int num) {
    // Negative numbers are not palindromes (e.g., -121 reversed is 121-)
    if (num < 0) return false;
    
    int originalNum = num;
    long long reversedNum = 0; // Use long long to prevent integer overflow

    while (num > 0) {
        int lastDigit = num % 10;                  // Extract the last digit
        reversedNum = (reversedNum * 10) + lastDigit; // Append it to the reversed number
        num /= 10;                                // Remove the last digit
    }

    // Compare original number with the reversed version
    return originalNum == reversedNum;
}

int main() {
    int n;
    cout << "Enter an integer: ";
    cin >> n;
    int b=10; 
     int a; 
     

    if (isPalindrome(n)) {
        cout << n << " is a palindrome number." << endl;
    } else {
        cout << n << " is not a palindrome number." << endl;
    }

    return 0;
}