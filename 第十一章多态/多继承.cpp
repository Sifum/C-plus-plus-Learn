#include <iostream>
#include <string>
using namespace std;

//每个Platypus实例包含多少个基类Animal的实例 
class Animal
{
public:
  Animal()
  {
  	cout << "Animal constructor" << endl;
  }
  int Age;
};
class Mammal: public Animal
{
};
class Bird: public Animal
{
};
class Reptile: public Animal
{
};
class Platypus: public Mammal, public Bird, public Reptile
{
public:
  Platypus()
  {
  	cout << "Platypus constructor" << endl;
  }
};

int main()
{
  Platypus duckBilledP;
   
  return 0;
}


