#include <iostream>
using namespace std;

char findKthBit(int n, int k) {
    
    // Base case
    if(n == 1)
        return '0';

    int len = (1 << n) - 1;   // length = 2^n - 1
    int mid = len / 2 + 1;

    // If k is middle element
    if(k == mid)
        return '1';

    // If k is in left half
    if(k < mid)
        return findKthBit(n - 1, k);

    // If k is in right half
    char ch = findKthBit(n - 1, len - k + 1);

    // Invert the bit
    if(ch == '0')
        return '1';
    else
        return '0';
}

int main() {
    int n, k;
    cin >> n >> k;
    cout << findKthBit(n, k);
    return 0;
}