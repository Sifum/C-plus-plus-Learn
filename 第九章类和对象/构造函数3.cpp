#include <iostream>
#include <string>
using namespace std;

//没有默认构造函数的类 
class Human
{
 private:
    int Age;
    string Name;
 public:
    Human(string HumansName, int HumansAge)
    {
      Name = HumansName;
	  Age = HumansAge;
	  cout << "Overloaded constructor creates " << Name;
	  cout << " of age " << Age << endl;	
    }
    void IntroduceSelf()
    {
      cout << "I am " + Name << " and am ";
	  cout << Age << " years old" << endl;	
    }
};
int main()
{
  Human FirstMan("Adam", 30);
  
  Human FirstWoman("Minson", 25);
  
  FirstMan.IntroduceSelf();
  FirstWoman.IntroduceSelf();

  return 0;
}
