#include <iostream> 
using namespace std;

//���������(&)�ͽ�����������(*)��Ҳ�м�������
int main()
{
  int age = 10;
  const double PI = 3.14;
  int* SameAge = NULL;//ָ���ʼ���ǵ�ָ��NULL������δ��ʼ����ָ���ָ���κε�ַ 
  SameAge = &age;
  
  cout << "address of age at : " << &age << endl;
  cout << "address of PI at : " << &PI << endl;
  cout << "address of SameAge at : " << SameAge << endl;
  cout << "value of  SameAge is : " << *SameAge << endl;
  cout << "address of SameAge is the same with that of age." << endl;
  
  int* AnotherAge = NULL;
  AnotherAge = &age;
  cout << "input the changed age : ";
  cin >> *AnotherAge;
  cout << "now age is : " << age << endl;
  
  return 0; 
}
//sizeof(pointer),����ָ����ʲô���ͣ������32λ��������Ϊ4�ֽڣ������64λ�������Ϊ8�ֽ� 
