#include <iostream>
#include <memory>
using namespace std;

//使用std::unique_ptr；
/*
其实一种简单的只能指针，比c++11已摒弃的auto_ptr更安全，因为
复制和赋值不会导致源智能指针对象无效，在销毁时释放对象。 
*/ 
class Fish
{
public:	
	Fish() {cout << "Fish: Constructed!" << endl;}
    ~Fish() {cout << "Fish: Destructed!" << endl;}
    
    void Swim(){cout << "Fish swims in water" << endl;}
};
void MakeFishSwim(const unique_ptr<Fish>& inFish)
{
	inFish ->Swim();
}
int main()
{
	unique_ptr<Fish> smartFish (new Fish);
	smartFish -> Swim();
	MakeFishSwim(smartFish);
	
	copySmartFish = smartFish;
	
	return 0;
}
