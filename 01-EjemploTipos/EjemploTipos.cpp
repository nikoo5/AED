/*
 * Filename: EjemploTipos.cpp
 * Description: Probar distintos tipos de afirmaciones (asserts)
 * Author: Nicolas Filippi Farmar
 * Date: 2022-05-13
 */

#include <cassert>
#include <string>
#include <cstring>

using namespace std::literals;

void assert_int()
{
    ///////////////
    // TYPE: INT //
    ///////////////

    // Afirmaciones validss
    assert(1 == 1);
    assert(2 == 2);
    assert(-1 == -1);
    assert(1 > (int)2147483648);
    assert((int)-2147483648 == (int)2147483648);

    // Afirmaciones invalidas
    // assert(1 == 2);
    // Mensaje: Assertion failed: 1 == 2, file e:\Dropbox\utn\Sistemas\Algoritmos y Estructura de Datos\Trabajos Practicos\01-EjemploTipos\EjemploTipos.cpp, line 28
    //
    // assert(1 > (int)2147483647);
    // Mensaje: Assertion failed: 1 > (int)2147483647, file e:\Dropbox\utn\Sistemas\Algoritmos y Estructura de Datos\Trabajos Practicos\01-EjemploTipos\EjemploTipos.cpp, line 31
}

void assert_double()
{
    //////////////////
    // TYPE: DOUBLE //
    //////////////////

    // Afirmaciones validas
    assert(1.0d == 1.0d);
    assert(0.1d == (1.0d / 10.0d));

    // Afirmaciones invalidas
    // assert(0.3d == (0.1d + 0.1d + 0.1d));
    // Mensaje: Assertion failed: 0.3d == (0.1d + 0.1d + 0.1d), file e:\Dropbox\utn\Sistemas\Algoritmos y Estructura de Datos\Trabajos Practicos\01-EjemploTipos\EjemploTipos.cpp, line 46
    //
    // assert(0.7d == 0.69999999d);
    // Mensaje: Assertion failed: 0.7d == 0.69999999d, file e:\Dropbox\utn\Sistemas\Algoritmos y Estructura de Datos\Trabajos Practicos\01-EjemploTipos\EjemploTipos.cpp, line 49
}

void assert_float()
{
    //////////////////
    // TYPE: FLOAT //
    //////////////////

    // Afirmaciones validas
    assert(1.0f == 1.0f);
    assert(0.1f == (1.0f / 10.0f));
    assert(0.3f == (0.1f + 0.1f + 0.1f));
    assert(0.7f == 0.69999999f);

    // Afirmaciones invalidas
    // assert(0.3d == (0.1d + 0.1d + 0.1d));
    // Mensaje: Assertion failed: 0.3d == (0.1d + 0.1d + 0.1d), file e:\Dropbox\utn\Sistemas\Algoritmos y Estructura de Datos\Trabajos Practicos\01-EjemploTipos\EjemploTipos.cpp, line 66
}

void assert_unsigned()
{
    ////////////////////
    // TYPE: UNSIGNED //
    ////////////////////

    // Afirmaciones validss
    assert(1u == 1u);
    assert(2u == 2u);
    assert(1u > (unsigned int)4294967296);

    // Afirmaciones invalidas
    // assert(1u > (unsigned int)4294967295);
    // Mensaje: Assertion failed: 1u > (unsigned int)4294967295, file e:\Dropbox\utn\Sistemas\Algoritmos y Estructura de Datos\Trabajos Practicos\01-EjemploTipos\EjemploTipos.cpp, line 82
}

void assert_bool()
{
    ////////////////
    // TYPE: BOOL //
    ////////////////

    // Afirmaciones validss
    assert(true == true);
    assert(0 == false);
    assert(1 == true);
    assert(!true == false);
    assert(true or false);

    // Afirmaciones invalidas
    // assert(2 == true);
    // Mensaje: Assertion failed: 2 == true, file e:\Dropbox\utn\Sistemas\Algoritmos y Estructura de Datos\Trabajos Practicos\01-EjemploTipos\EjemploTipos.cpp, line 100
    //
    // assert(true and false);
    // Mensaje: Assertion failed: true and false, file e:\Dropbox\utn\Sistemas\Algoritmos y Estructura de Datos\Trabajos Practicos\01-EjemploTipos\EjemploTipos.cpp, line 103
}

void assert_char()
{
    ////////////////
    // TYPE: CHAR //
    ////////////////

    // Afirmaciones validss
    assert('a' == 'a');
    assert('a' == 97);
    assert('a' < 'b');
    assert('a' - 32 == 'A');

    // Afirmaciones invalidas
    // assert('1' == 1);
    // Mensaje: Assertion failed: '1' == 1, file e:\Dropbox\utn\Sistemas\Algoritmos y Estructura de Datos\Trabajos Practicos\01-EjemploTipos\EjemploTipos.cpp, line 120
    //
    // assert('a' == 'A');
    // Mensaje: Assertion failed: 'a' == 'A', file e:\Dropbox\utn\Sistemas\Algoritmos y Estructura de Datos\Trabajos Practicos\01-EjemploTipos\EjemploTipos.cpp, line 123
}

void assert_string()
{
    //////////////////
    // TYPE: STRING //
    //////////////////

    // Afirmaciones validss
    assert("a"s == "a"s);
    assert("aA"s == "aA"s);
    assert("aA"s == "a"s + "A"s);
    assert(4 == "1000"s.length());

    char a[] = "ABCD";
    char b[] = "ABCD";
    assert(a != b);
    assert(0 == strcmp(a, b));

    std::string c{"ABCD"s};
    std::string d{"ABCD"s};
    assert(c == d);

    assert(a == c);
    assert(b == d);

    c = "DCBA";
    assert(c == "DCBA");

    // Afirmaciones invalidas
    // Las affirmaciones invalidas para los strings generalmente aparecen al momento de la compilacion, ya que no permiten operaciones como por ejemplo assert("a"s - 32 == "A"s); o assert("a"s == 97);
    //
    // assert("a"s == "A"s);
    // Mensaje: Assertion failed: "a"s == "A"s, file e:\Dropbox\utn\Sistemas\Algoritmos y Estructura de Datos\Trabajos Practicos\01-EjemploTipos\EjemploTipos.cpp, line 157
}

int main()
{
    assert_int();
    assert_double();
    assert_float();
    assert_unsigned();
    assert_bool();
    assert_char();
    assert_string();
}