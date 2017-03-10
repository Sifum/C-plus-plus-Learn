#include <iostream>
#include <string>
using namespace std;

class Fish
{
public:
  virtual void Swim()
  {
  	cout << "Fish swims in water" << endl;
  }
  virtual ~Fish(){}
};
class Tuna: public Fish
{
public:
  void Swim()
  {
  	cout << "Tuna swims real fast in the sea" << endl;
  }
  void BecomeDinner()
  {
  	cout << "Tuna became dinner in Sushi" << endl;
  }
};
class Carp: public Fish
{
public:
  void Swim()
  {
  	cout << "Carp swims real slow in the lake" << endl;
  }
  void Talk()
  {
  	cout << "Carp talked crap" << endl;
  }
};
void DetectFishType(Fish* InputFish)
{
   Tuna* pIsTuna = dynamic_cast <Tuna*>(InputFish);
   if(pIsTuna)
   {
   	  cout << "Detected Tuna. Making Tuna dinner: " << endl;
   	  pIsTuna -> BecomeDinner();
   }
   Carp* pIsCarp = dynamic_cast <Carp*>(InputFish);
   if(pIsCarp)
   {
   	 cout << "Detected Carp. Making carp talk: " << endl;
   	 pIsCarp -> Talk();
   }
   cout << "Verifing type using virtual Fish::Swim: " << endl;
   InputFish -> Swim();
};
int main()
{
  Carp myLunch;
  Tuna myDinner;
  DetectFishType(&myDinner);
  cout << endl;
  DetectFishType(&myLunch);
  
  return 0;
}
