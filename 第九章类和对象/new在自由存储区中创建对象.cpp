#include <iostream>
#include <string>
using namespace std;

//��ֹ��ջ��ʵ�������� 
class MonsterDB
{
 private:
   ~MonsterDB(){};   //˽���������� 
 public:
   static void DestroyInstance(MonsterDB* pInstance)
   {
   	 delete pInstance;
   }
   //�������� 
};
int main()
{
  MonsterDB* pMyDatabase = new MonsterDB();
  //pMyDatabase  -> member methods(...);
  //uncomment next line to see compile failure
  //delete pMyDatabase;//private destructor cannot be invoked
  
  //use static memeber to deallocate
  MonsterDB::DestroyInstance(pMyDatabase); //�����˸þ�̬���� 
  
  return 0;
}
