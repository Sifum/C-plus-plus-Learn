#include <iostream>
#include <string>
using namespace std;

//ÿ��Platypusʵ���������ٸ�����Animal��ʵ�� 
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


