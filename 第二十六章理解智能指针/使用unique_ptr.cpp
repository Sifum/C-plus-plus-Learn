#include <iostream>
#include <memory>
using namespace std;

//ʹ��std::unique_ptr��
/*
��ʵһ�ּ򵥵�ֻ��ָ�룬��c++11��������auto_ptr����ȫ����Ϊ
���ƺ͸�ֵ���ᵼ��Դ����ָ�������Ч��������ʱ�ͷŶ��� 
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
