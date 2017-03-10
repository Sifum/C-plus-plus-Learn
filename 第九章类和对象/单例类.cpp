#include <iostream>
#include <string>
using namespace std;

//�����ࣺ˽�й��캯����˽�и�ֵ������;�̬ʵ����Ա 
/*
static����������ݳ�Ա�������ݳ�Ա��������ʵ��֮�乲��
��static���ں�����������ʱ���÷����������г�Ա֮�乲�� 
*/
class President
{
 private:
    //˽��Ĭ�Ϲ��캯�� 
    President(){};
    //˽�и��ƹ��캯�� 
    President(const President&);
    //˽�и�ֵ���� 
    const President& operator = (const President&);
    //���� 
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
  
  //President Second;�����У���ΪĬ�Ϲ��캯�������ã�����˽�е� 
  //President* Third = new President();�����У� 
  //President Fourth = OnlyPresident;���ƹ��캯���������ж���Ŀ��������У���Ϊ16�н�����������˽�е� 
  //OnlyPresident = President::GetInstance();������ 
  //��Ϊ18�н������������������˽�е� 
  cout << "The name of the President is: ";
  cout << President::GetInstance().GetName() << endl;
  
  return 0;
}
/*
����ģʽ��ֹ�������ʵ��������Ҫ���ʵ��ʱ���⽫��ɼܹ�ƿ�� 
*/
