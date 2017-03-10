#include <iostream>
#include <string>
using namespace std;

//重载构造函数 
class Human
{
 private:
    int Age;
    string Name;
 public:
    Human()  //构造函数，是与类名相同的函数，在类被实例化时自动调用 
    {
      Age = 0;
	  cout << "Constructed an instance of class Human" << endl;	
    }
    Human(string HumansName)
    {
    	Name = HumansName;
    	Age = 0;
   	    cout << "Overloaded constructor creates " << Name << endl;
    }
    Human(string HumansName, int HumansAge)
    {
    	Name = HumansName;
    	Age = HumansAge;
    	cout << "Overloaded constructor creates ";
    	cout << Name << " of " << Age << " years" << endl;
    }
    void SetName(string HumansName)
    {
    	Name = HumansName;
    }
    void SetAge(int HumansAge)
    {
    	Age = HumansAge;
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
  FirstMan.SetName("Adam");
  FirstMan.SetAge(30);
  
  Human FirstWoman("Minson");
  FirstWoman.SetAge(25);
  
  FirstMan.IntroduceSelf();
  FirstWoman.IntroduceSelf();
  
  Human FirstChild("Rose", 1);
  return 0;
}
