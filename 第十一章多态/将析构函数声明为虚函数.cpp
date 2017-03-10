#include <iostream>
#include <string>
using namespace std;

class Fish
{
public:
  Fish()
  {
  	cout << "Constructed Fish" << endl;
  }
  //将析构函数声明为虚函数，确保通过基类指针调用delete时
  //将调用派生类的析构函数 
  virtual ~Fish()
  {
  	cout << "Destructed Fish" << endl;
  }
};
class Tuna: public Fish
{
public:
  Tuna()
  {
  	cout << "Constructed Tuna" << endl;
  }
  ~Tuna()
  {
  	cout << "Destructed Tuna" << endl;
  }
};
void DeleteFishMemory(Fish* pFish)
{
    delete pFish;
}

int main()
{
  cout << "Allocating a Tuna on the free store:" << endl;
  Tuna* pTuna = new Tuna;
  cout << "Deleting the Tuna: " << endl;
  DeleteFishMemory(pTuna);
  
  cout << "Instantiating a Tuna on the stack:" << endl;
  Tuna MyDinner;
  cout << "Automatic destruction as it goes out scope: " << endl;
  
  return 0;
}


