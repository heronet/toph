#include <iostream>

int main() {
    int A[4], B[4], C[4];
    for(int i = 0; i != 4; ++i) {
        int x;
        std::cin >> x;
        A[i] = x;
    }
    for(int i = 0; i != 4; ++i) {
        int x;
        std::cin >> x;
        B[i] = x;
    }
    C[0] = A[0]*B[0] + A[1]*B[2];
    C[1] = A[0]*B[1] + A[1]*B[3];
    C[2] = A[2]*B[0] + A[3]*B[2];
    C[3] = A[2]*B[1] + A[3]*B[3];
    
    std::printf("%d %d\n%d %d\n", C[0], C[1], C[2], C[3]);
}
