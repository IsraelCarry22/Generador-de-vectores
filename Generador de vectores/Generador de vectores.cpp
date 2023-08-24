#include <iostream>
#include <vector>

int main()
{
    int size;
    
    //Solicita al usuario asignar el tamaño del vector.
    std::cout << "Ingresa el tamaño del Vector: ";
    std::cin >> size;

    //Crea un vector con el tamaño proporcionado anteriormente.
    std::vector<int> VectorInt(size);

    //El usuario ingresa los valores dentro del vector
    std::cout << "Ingresa los valores del vector: " << std::endl;
    for (int i = 0; i < size; i++)
    {
        std::cout << "Elemto " << i + 1 << ": ";
        std::cin >> VectorInt[i];
    }

    //Muestra los elemtos en pantalla.
    std::cout << "Vector creado: " << std::endl;
    for (int i = 0; i < size; i++)
    {
        std::cout << VectorInt[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}