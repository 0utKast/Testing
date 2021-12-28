#include <iostream>

bool esVocal(char c)
{
    switch (c)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        return true;
    default:
        return false;
    }
}

// devuelve el número del test que ha fallado, ó 0 si se han pasado todos los tests
int probarVocal()
{
    if (esVocal('a') != true) return 1;
    if (esVocal('q') != false) return 2;

    return 0;
}

int main()
{
    return 0;
}


























/*#include <iostream>

bool esVocal(char c)
{
    switch (c)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        return true;
    default:
        return false;
    }
}

// devuelve el número de test que han fallado, o 0 si todos los tests han pasado
int pruebaVocal()
{
    if (esVocal('a') != true) return 1;
    if (esVocal('q') != false) return 2;

    return 0;
}

int main()
{
    return 0;
}*/




























/*#include <iostream>

bool esVocal(char c)
{
    switch (c)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        return true;
    default:
        return false;
    }
}

// de momento no se llama desde ningún sitio
// pero ya lo tenemos creado si queremos volver a hacer pruebas más tarde
void probarVocal()
{
    std::cout << esVocal('a'); // prueba de código temporal, debe producir 1
    std::cout << esVocal('q'); // prueba de código temporarl, debe producir 0
}

int main()
{
    return 0;
}*/





























/*#include <iostream>

// Queremos probar la siguiente función
bool esVocal(char c)
{
    switch (c)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        return true;
    default:
        return false;
    }
}

int main()
{
    //Aquí nuestras pruebas temporales para comprobar si funciona
    std::cout << esVocal('a'); // código de prueba temporal, debe producir 1
    std::cout << esVocal('q'); // código de prueba temporal, debe producir 0

    return 0;
}*/






















/*#include <iostream>

void comparar(int x, int y)
{
    if (x > y)
        std::cout << x << " es mayor que " << y << '\n'; // caso de uso 1
    else if (x < y)
        std::cout << x << " es menor que " << y << '\n'; // caso de uso 2
    else
        std::cout << x << " es igual a  " << y << '\n'; //  caso de uso 3
}

int main()
{
    setlocale(LC_ALL, "es_ES.UTF-8");
    std::cout << "Escribe un número: ";
    int x{};
    std::cin >> x;

    std::cout << "Escribe otro número: ";
    int y{};
    std::cin >> y;

    comparar(x, y);

    return 0;
}*/





