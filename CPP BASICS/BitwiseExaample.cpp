#include <iostream>

int main() {
    // Sample inputs
    int a = 12; // Binary: 0000 1100
    int b = 25; // Binary: 0001 1001

    std::cout << "Variables: a = " << a << ", b = " << b << "\n\n";

    // 1. Bitwise AND (&)
    // Returns 1 if both bits are 1
    std::cout << "a & b  = " << (a & b) << "  (Expected: 8 -> 0000 1000)\n";

    // 2. Bitwise OR (|)
    // Returns 1 if at least one bit is 1
    std::cout << "a | b  = " << (a | b) << " (Expected: 29 -> 0001 1101)\n";

    // 3. Bitwise XOR (^)
    // Returns 1 if the bits are different
    std::cout << "a ^ b  = " << (a ^ b) << " (Expected: 21 -> 0001 0101)\n";

    // 4. Bitwise NOT (~)
    // Unary operator: Inverts all bits (flips 0 to 1, and 1 to 0)
    // Note: Due to 2's complement representation, ~a equals -(a + 1)
    std::cout << "~a     = " << (~a)    << " (Expected: -13)\n";

    // 5. Bitwise Left Shift (<<)
    // Shifts bits to the left by 'n' positions (effectively multiplies by 2^n)
    std::cout << "a << 2 = " << (a << 2) << " (Expected: 48 -> a * 2^2)\n";

    // 6. Bitwise Right Shift (>>)
    // Shifts bits to the right by 'n' positions (effectively divides by 2^n)
    std::cout << "b >> 2 = " << (b >> 2) << "  (Expected: 6 -> b / 2^2)\n";

    return 0;
}
