#include <iostream>

int main() {
    int H, L;
    std::cin >> H >> L;
    
    int b; // number of birds
    int a; // number of animals
    
    for (b = 0; b <= H; ++b) {
        a = H - b;
        if (2*b + 4*a == L) {
            break;
        }
    }
    
    std::cout << b << " " << a << std::endl;
    
    return 0;
}
