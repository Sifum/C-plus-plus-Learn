#include <iostream>
#include <string>
using namespace std;

//单例类：私有构造函数、私有赋值运算符和静态实例成员 
/*
static用于类的数据成员，该数据成员将在所有实例之间共享
将static用于函数（方法）时，该方法将在所有成员之间共享 
*/
class President
{
 private:
    //私有默认构造函数 
    President(){};
    //私有复制构造函数 
    President(const President&);
    //私有赋值运算 
    const President& operator = (const President&);
    //数据 
    string Name;
 public:
    static President& GetInstance()
    {
    	static President OnlyInstance;
    	return OnlyInstance;
    }
    string GetName()
    {
        return Name;	
    }
    void SetName(string InputName)
    {
    	Name = InputName;
    }
};
int main()
{
  President& OnlyPresident = President::GetInstance();
  OnlyPresident.SetName("Abraham Lincoln");
  
  //President Second;不可行，因为默认构造函数不可用，它是私有的 
  //President* Third = new President();不可行， 
  //President Fourth = OnlyPresident;复制构造函数创建现有对象的拷贝不可行，因为16行将其声明成了私有的 
  //OnlyPresident = President::GetInstance();不可行 
  //因为18行将复制运算符声明成了私有的 
  cout << "The name of the President is: ";
  cout << President::GetInstance().GetName() << endl;
  
  return 0;
}
/*
单例模式禁止创建多个实例，在需要多个实例时，这将变成架构瓶颈 
*/
