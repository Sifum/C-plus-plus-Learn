#include <iostream>
using namespace std;

int main()
{
   cout << sizeof(int) << endl;
   //ȷ����������
   
   auto Number = true;
   //auto���ͱ����ƶϹ��ܣ��ñ༭�����������ͣ���ʹ��autoʱ����Ա������г�ʼ��
   //C++11����Ч 
   cout << "Length of Number is "<< Number << endl;
   
   typedef unsigned int UN_NUM;
   UN_NUM PosNumber = 4523;
   
   cout << "UN_NUM type: " << PosNumber << endl;
   
   return 0; 
}

