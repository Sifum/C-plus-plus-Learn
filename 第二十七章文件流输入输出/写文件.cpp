#include <iostream>
#include <fstream> 
#include <cstdlib>
using namespace std;

/*
 д�ļ� 
 ���ĵ���scores.txt���в��� 
 ofstream �ļ�����(�ļ���������);
 �ļ�����������ȡ�� 
 ������
 ios::app ���ļ���������ӣ�ÿ��д��֮���λ���赽��� 
 ios::ate �ѵ�ǰλ����Ϊ��� 
 ios::trunc ɾ���ļ������еĶ�������ȥ�ļ��� 
 ios::out �������ļ����� 
 ios::binary  ����������ж����Ʋ�������ȡ�ļ�ʱͬ������������ 
*/
int main()
{
   ofstream file_writer("scores.txt");
   if(!file_writer.is_open())
   {
   	 cout << "Could not open file!" << '\n';
	 return 0;
   }
   for(int i = 0; i < 20 ; i++)
   {
   	 file_writer << 10-i << '\n';
   }
   //����д���ļ����Ḳ��ԭ�ļ����ݡ� 
   
   return 0;
}
