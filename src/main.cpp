#include <iostream>  // para input y output
#include <vector>    // para usar vectores nada mas y las listas
#include "libro.hpp" // aca esta definido lo que es un libro, esta en include/libro.hpp

// funcion para buscar un libro por su titulo
bool buscarLibro(const std::vector<libro> &lista_de_libros, const std::string &nombre_libro)
{
    for (const auto &i : lista_de_libros)
        if (i.titulo == nombre_libro)
            return true;
    return false;
}
// funcion para ver toda la lista de los libros
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

// el main es lo primero que se ejecuta SIEMPRE
int main()
{
    // lista de libros
    std::vector<libro> libros;
}