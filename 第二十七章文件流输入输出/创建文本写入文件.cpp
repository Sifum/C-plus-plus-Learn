#include <iostream>
#include <fstream>
#include <string> 
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
�ļ���ģʽ:
_ios_base::app ���ӵ������ļ�ĩβ�������Ǹ���
ios_base::ate �л����ļ�ĩβ���������ļ����κεط�д������
ios_base::trunc ���������ļ������ǣ�����Ĭ������
ios_base::binary �����������ļ���Ĭ��Ϊ�ı��ļ���
ios_base::in ��ֻ����ʽ���ļ�
ios_base::out ��ֻд��ʽ���ļ� 

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
	ofstream myFile;
	myFile.open("HelloFile.txt", ios_base::out);
	
	if(myFile.is_open())
	{
		cout << "File open successful" << endl;
		
		myFile << "My first text file!" << endl;
		myFile << "Hello file!";
		//д���ļ� 
		
		cout << "Finished writing to file, will close now" << endl;
		myFile.close();
	}
	
	return 0;
}
