#include <iostream> 
using namespace std;

/*ͨ�����ò�������һ��Ҫ������ƽ�������֣���ͨ���ò������ؽ�� 
�����������Number����Ӧ�ã�&����������޷����ص����ú���main()
��Ϊ��ʹ��Number�ı��ؿ���ִ�����㣬����������ʱ�ÿ����������١�
ͨ��ʹ�����ã���ȷ��������main()�ж����Number���ڵ��ڴ浥Ԫ���в��� 
*/
void ReturnSquare(int& Number)
{
  Number *= Number;	
}
int main()
{
  cout << "Enter a number you wish to square: ";
  int Number = 0;
  cin >> Number;
  
  ReturnSquare(Number);
  cout << "Square is: " << Number << endl; 
  
  return 0;
}

