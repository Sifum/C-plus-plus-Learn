#include <iostream>
#include <string>
using namespace std;

//禁止在栈中实例化的类 
class MonsterDB
{
 private:
   ~MonsterDB(){};   //私有析构函数 
 public:
   static void DestroyInstance(MonsterDB* pInstance)
   {
   	 delete pInstance;
   }
   //其他方法 
};
int main()
{
  MonsterDB* pMyDatabase = new MonsterDB();
  //pMyDatabase  -> member methods(...);
  //uncomment next line to see compile failure
  //delete pMyDatabase;//private destructor cannot be invoked
  
  //use static memeber to deallocate
  MonsterDB::DestroyInstance(pMyDatabase); //调用了该静态函数 
  
  return 0;
}
