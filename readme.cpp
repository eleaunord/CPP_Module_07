## Exercise 00: Start with a few functions

Function templates : generic functions that work with any data type. Defined in header files because must be available at compile time. 
Instead of writing separate functions for each type we define a template that the compiler can use to generate the necessary code. 

Safety : ensures both arguments are of the same type. 

template < typename T>
T max(T &x, T &y) // prendre par référence pour pas faire une copie de la classe et pas perdre en mémoire
{
  return (x >= y ? x : y);
}

Instancation explicit vs instancation implicit
Instancation explicit : appeler le fonction et mettre entre < > le type sur lequel on souhaite instancier notre template. 
Instancation implicit : 
