#include <iostream>
#include <iomanip>
using namespace std;

/*
C++���ࣺ
cout ��׼����� 
cin ��׼������
cerr ������ʾ������Ϣ�ı�׼�����
fstream ���ڲ����ļ����������������̳���ofstream��ifstream
ofstream ���ڲ����ļ���������࣬�����ڴ����ļ�
ifstream ���ڲ����ļ����������࣬�����ڶ�ȡ�ļ�
stringstream ���ڲ����ַ����������������࣬�̳���istringstream��ostringstream,ͨ��
�������ַ�������������֮�����ת��

���Ʒ���
endl ���뻻�з�
ends ����ո��
dec ��ʮ���Ʒ�ʽ��������
hex ��ʮ�����Ʒ�ʽ��������
oct �԰˽��Ʒ�ʽ��������
fixed �����Զ����ʾ����ʾ����
scientific �����Կ�ѧ��ʾ����ʾ����

<iomanip>���Ʒ���
setprecision ����С������
setw �����ֶο��
setfill ��������ַ�
setbase ���û�������ʹ��dec,hex��oct��Ч
setiosflag ͨ������Ϊstd::ios_base::fmtflags����������������ñ�־
resetiosflag ��std::ios_base::fmtflags����ָ���ı�־����ΪĬ��ֵ 
*/
int main()
{
	cout << "Enter an integer: ";
	int InputInt = 0;
	cin >> InputInt;
	
	cout << "Enter the value of Pi: ";
	double Pi = 0.0;
	cin >> Pi;
	
	cout << "Enter three characters separated by space: " << endl;
	char Char1 = '\0', Char2 = '\0', Char3 = '\0';
	//��ʼ���ַ� 
	cin >> Char1 >> Char2 >> Char3;
	//���������ַ� 
	
	cout << "The recorded variable values are: " << endl;
	cout << "InputInt: " << InputInt << endl;
	cout << "Pi: " << Pi << endl;
	cout << "The three characters: " << Char1 << Char2 << Char3 << endl; 
	
	return 0;
}
