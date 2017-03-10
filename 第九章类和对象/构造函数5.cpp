#include <iostream>
#include <string>
using namespace std;

//带默认值的构造函数，并使用初始化列表来设置成员 
class Human
{
 private:
    int Age;
    string Name;
 public:
    Human(string HumansName = "Minson", int HumansAge =30)
          :Name(HumansName), Age(HumansAge)
    {
	  cout << "Constructed a Human called  " << Name;
	  cout << " , " << Age << " years old" << endl;	
    }
};
int main()
{
  Human FirstMan;
  Human FirstWoman("Eve", 18);

  return 0;
}
