#include <iostream>
#include <fstream> 
using namespace std;

/*
�����ļ��������������ͣ�ifstream��ofstream�����Ǳ������ͷ�ļ�fstream 
���ĵ�������myfile.txt��ȡ���ĵ������֡�
 ifstream �ļ�����(�ļ���);
 �ļ�����������ȡ�� 
*/
int main()
{
   ifstream file_reader("myfile.txt");
   if(!file_reader.is_open())
   {
   	 cout << "Could not open file!" << endl;
   }
   
   int number;
   if(file_reader >> number)
   {
   	 cout << "The value is: " << number;
   }

   return 0;
}
