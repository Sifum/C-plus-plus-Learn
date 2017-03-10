#include <iostream>
#include <string>
using namespace std;

//带默认值的构造函数，当所有参数都带默认值时，其相当于默认构造函数 
class Human
{
 private:
    int Age;
    string Name;
 public:
    Human(string HumansName = "Minson", int HumansAge =30)
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
  Human FirstMan;
  
  Human FirstWoman("Minson", 25);
  
  FirstMan.IntroduceSelf();
  FirstWoman.IntroduceSelf();

  return 0;
}
