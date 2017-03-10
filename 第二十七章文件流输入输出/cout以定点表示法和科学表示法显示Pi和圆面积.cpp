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
	const double Pi = (double)22.0 / 7;
	cout << "Pi = " << Pi << endl;
	
	cout << endl << "Setting precision to 7: " << endl;
	cout << setprecision(7);   //7λ���� 
	cout << "Pi = " << Pi << endl;
	cout << fixed << "Fixed Pi = " << Pi << endl;
	cout << scientific << "Scientific Pi = " << Pi << endl;
	
	cout << endl << "Setting precision to 10: " << endl;
	cout << setprecision(10);
	cout << "Pi = " << Pi << endl;
	cout << fixed << "Fixed Pi = " << Pi << endl;
	cout << scientific << "Scientific Pi = " << Pi << endl;
	
	cout << endl << "Enter a radius: " ;
	double Radius = 0.0;
	cin >> Radius;
	cout << "Area of circle: " << 2*Pi*Radius*Radius << endl;
	
	return 0;
}
