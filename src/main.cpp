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

void listaCompletaDeLibros(const std::vector<libro> &lista_de_libros)
{
    if (lista_de_libros.empty())
    {
        std::cout << "La lista está vacía.\n";
        return;
    }

    std::cout << "=== LISTA COMPLETA DE LIBROS ===\n";

    for (const auto &i : lista_de_libros)
    {
        std::cout << std::string(25, '-') << '\n';
        std::cout << "Título: " << i.titulo << '\n';
        std::cout << "Autor:  " << i.autor << '\n';
    }

    std::cout << std::string(25, '-') << '\n';
}

int main()
{
    std::vector<libro> libros;
}