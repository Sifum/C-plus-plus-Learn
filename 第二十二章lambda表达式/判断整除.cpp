#include <iostream>
#include <algorithm>
#include <vector>
#include <list> 
using namespace std;

//c++11
//ͨ�������б����״̬������lambda���ʽ
//�ж�һ�������ܷ���һ���������� 
int main()
{
   vector<int> vecIntegers;
   cout << "The vector contains the following sample values: ";

   for(int nCount = 25; nCount < 32; ++nCount)
   {
   	 vecIntegers.push_back(nCount);
   	 cout << nCount << ' ';
   }
   cout << endl << "Enter divisor ( > 0): ";
   int Divisor = 2;
   cin >> Divisor;

   vector<int>::iterator iElement;
   iElement = find_if(vecIntegers.begin(), vecIntegers.end(),[Divisor](int dividend){return (dividend % Divisor) == 0;});
   if(iElement != vecIntegers.end())
   {
   	 cout << "First element in vector divisible by " << Divisor;
   	 cout << ": " << *iElement << endl;
   }

   return 0;
}
/*
ͨ���﷨��
[StateVar1, StateVar2](Type& param){ //lambda code};
Ҫ��lambda���ʽ���޸���Щ״̬����������ӱ���multable,���뿪���ʽ��ʧЧ:
[StateVar1, StateVar2](Type& param)multable{ //lambda code};
Ҫʹ��״̬�������޸������ⲿҲ��Ч,Ӧ�����ô������ǣ�
[&StateVar1, &StateVar2](Type& param){ //lambda code};
����������,�ö��ŷָ���
[StateVar1, StateVar2](Type1& var1, Type2& var2){ //lambda code};
���Ҫ���������ȷ��ָ���������ͣ���ʹ��->�����£�
[StateVar1, StateVar2](Type1& var1, Type2& var2) -> returnType{ return (value or expression);};
������䣺
[StateVar1, StateVar2](Type1& var1, Type2& var2) -> returnType{ Statement1; Statement2; return (value or expression);};
*/
