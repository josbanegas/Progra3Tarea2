#include "Evaluador.h"
#include <iostream>
using namespace std;

//Desrefencia ptr (dado) y devuelve su valor
int obtenerValor(int *ptr)
{

    int a=*ptr;  // Desreferenciamos ptr

    return a;    //Retorna el valor desreferenciado de ptr
}

//Desreferencia a (dado) y b (dado) y devuelve la suma de ambos
int sumar(int* a, int* b)
{
    int suma=0;      //Variable nesesaria para sumar ambos numeros(*a+*b).
    int c=*a;        // Desreferencia de *a   .
    int d=*b;        // Desreferencia de *b.
    suma = c+d;      //Asignamos la suma de c+d en la variable suma.
    return suma;     //Retornamos la variable suma.
}

//Devuelve true si a (dado) y b (dado) apuntan al mismo espacio de memoria
bool compararApuntadores(string *a, string *b)
{

   if(a==b)         //comparamos 'a' y 'b'
    return true;    // Si 'a' y 'b' son iguales retorna true(verdadero)
   else             // Si 'a' y 'b' no son iguales entonces retorna false(falso)
    return false;
}

//Desrefencia a (dado) y b (dado), devuelve true si ambos valores son iguales de lo contrario devuelve false
bool comparar(string *a, string *b)
{
    string a1=*a;
    string b1=*b;
    if (a1==b1)
        return true;
    else
    return false;
}

//Desreferencia a (dado) y devuelve su primera letra
char getPrimeraLetra(string* a)
{

    char letra1=a->at(0);  // la funcion at devuelve la posicion '0' dentro der la cadena letra1
    return letra1;         // Se retorna la variable a la cual se le asigno 'a'(con la funcion at)

       return ' ';
}

//Desreferencia a (dado) y devuelve true si es palindroma de lo contrario devuelve false
//Definicion de palindromo: http://es.wikipedia.org/wiki/Pal%C3%ADndromo
//Ejemplos de palindromos: Ana, arenera, arepera, anilina, ananá, Malayalam, Neuquén, Oruro, oso, radar, reconocer, rotor, salas, seres, somos, sometemos
bool esPalindromo(string* a)
{

        return 0;


}

//Desreferencia base (dado) y exponente (dado) y devuelve la base elevado al exponente
int getExponente(int* base, int* exponente)
{

      int sumatoria = 0;   // variable definida para almacenar la respuesta final.
      int num;             // Variable definida para desreferencia *base.
      num = *base;         // En esta linea se esta desferenciando *base.
      for (int i =1; i<(*exponente); i++)    // Ciclo for el cual cuenta cuantas veces se hara el siclo dependiendo de el exponente.
      {
          sumatoria = (num)*= (*base);     //Se almacena la respuesta de la multiplicacion de la variable 'num' y el apuntador *base
      }

    return sumatoria;        // devuelve el valor acumulado en la variable sumatoria
}
     //  return 0;



int main ()
{
    //Funcion evaluadora
    evaluar();
    return 0;
}
