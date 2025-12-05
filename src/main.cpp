#include <iostream>
#include <vector>
#include "libro.hpp"

bool buscarLibro(const std::vector<libro> &lista_de_libros, const std::string &nombre_libro)
{
    for (const auto &i : lista_de_libros)
        if (i.titulo == nombre_libro)
            return true;
    return false;
}

int main()
{
    std::vector<libro> libros;
}