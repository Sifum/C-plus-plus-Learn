#include <iostream>
#include <string>
using namespace std;

//��Ĭ��ֵ�Ĺ��캯������ʹ�ó�ʼ���б������ó�Ա 
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
