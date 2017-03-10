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
	cout << "Enter an integer: " ;
	int Input = 0;
	cin >> Input;
	
	cout << "Integer in octal: " << oct << Input << endl;
	cout << "Integer in hexadecimal: " << hex << Input << endl;
	
	cout << "Integer in hex using base notation: ";
	cout << setiosflags(ios_base::hex|ios_base::showbase|ios_base::uppercase);
	cout << Input << endl;
	
	return 0;
}
