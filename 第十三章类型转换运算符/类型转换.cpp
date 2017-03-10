#include <iostream>
#include <string>
using namespace std;

/*
c++�ṩ����������ת���������
static_cast:
������������͵�ָ��֮�����ת����������ʽ��ִ�б�׼�������͵�����ת�� 
�﷨��destination_type result =  cast_type <destination_type>(object_to_be_casted)
dynamic_cast��
��̬����ת�������н׶�ִ������ת����
�﷨��destination_type* pDest = dynamic_cast <class_type*> (pSource); 
�ɼ������Ľ�������ж�����ת���Ƿ�ɹ���if(pDest) 
reinterpret_cast:
������ת��ǿ�Ʊ���������static_castͨ�������������ת�� 
const_cast:
�ó���Ա�ܹ��رն���ķ������η�const
�﷨��SomeClass& refData = const_cast <SomeClass&>(mData);
SomeClass* pCastedData = const_cast <SomeClass*>(pData);
 
*/
int main()
{
	double dPi = 3.1415926;
	int Num = static_cast<int>(dPi);
    
    cout << Num << endl;
	return 0;
}
/*
c���������
int Num2 = (int)dPi; 

1.��Derived*ת��ΪBase*����Ϊ����ת��������ת���ǰ�ȫ�ģ�
2.��Base*ת��ΪDerived*����Ϊ����ת��������ʹ��dynamic_cast�����򲻰�ȫ��
3.�����̳в�νṹʱ��Ӧ��������������Ϊ�麯���� 
*/
