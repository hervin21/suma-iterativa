#include <iostream>

int main() {
    int n;
    std::cout << "Ingresa un numero entero: ";
    std::cin >> n;

    int suma = 0;
    while (n > 9) {
        suma += n % 10;
        n /= 10;
    }
    suma += n; 

    std::cout << "La suma de los digitos de " << n << " es: " << suma << std::endl;

    return 0;
}



    

