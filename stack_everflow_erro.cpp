#include <iostream>

void recursiveFunction(int n) {
    char buffer[1024]; // Büyük boyutlu bir yerel değişken
    std::cout << "Recursive Function Call: " << n << std::endl;
    recursiveFunction(n + 1); // Fonksiyon kendini sonsuz bir şekilde çağırır
}

int main() {
    recursiveFunction(1); // recursiveFunction çağrısı, sonsuz döngüye neden olacak
    return 0;
}
