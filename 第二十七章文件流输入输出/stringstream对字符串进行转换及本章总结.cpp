#include <iostream>
#include <fstream>
#include <iomanip>
#include <string> 
#include <sstream>
using namespace std;

/*
std::stringstream���ַ�������ת�� 
�����ܽ᣺
ֻ���ȡ�ļ�ʱ�����ʹ��ifstream;
ֻ��д���ļ�ʱ�����ʹ��ofstream;
���ʹ��is_open()����״̬��
*/
int main()
{
	cout << "Enter an integer: " ;
	int Input = 0;
	cin >> Input;
	
	stringstream converterStream;//����ת������ 
	converterStream << Input;
	string strInput;  //����ת����ĸ�ʽ 
	converterStream >> strInput;  //ת�� 
	
	
	cout << "Integer Input = " << Input << endl;
	cout << "String gained from integer, strInput = " << strInput << endl;
	
	stringstream anotherStream;//����ת������ 
	anotherStream << strInput;
	int Copy = 0; //����ת����ĸ�ʽ 
	anotherStream >> Copy;//ת��
	
	cout << "Integer gained from string, Copy = " << Copy << endl; 
	
	return 0;
}
