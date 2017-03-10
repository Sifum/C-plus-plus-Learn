#include <iostream>
#include <fstream> 
#include <cstdlib>
using namespace std;

/*
 ����λ�ã�
 ��־λ��
 ios_base::beg ���ļ��Ŀ�ʼ�ĵط��������� 
 ios_base::cur �ӵ�ǰλ�ÿ�ʼ��Ѱ 
 ios_base::end ���ļ���ĩβ��ʼ��Ѱ 
 ��ʵ���ļ�����������ͬ��λ��---һ�����������һ��Ҫ��ȡ�ĵط���һ��������
 ������һ��Ҫд��ĵط���
 ����ʹ��tellg��tellp��������ȡ��ǰ��λ�ã����ص�ǰ��ȡ(g����get)�ͣ�p����put��
 ��λ�á����ص����ͽ���streampos�� 
 �����ڵ�ǰλ�õĻ������ƶ������������ļ��е�λ�ã�ʹ��seekp��seekg��
 ���磺
 file_writer.seekp(0, ios_base::beg ); �ƶ����ļ���ʼ�ĵط�
  
*/
int main()
{
   fstream file_reader("lowerscores.txt",ios::in|ios::out );
   /*
   ifstream��ofstream��������
   fstream���ļ�ͬʱ���Ծ��ж�д������ʹ�ñ�־λѡ��ios::in|ios::out
   */
   streampos start = file_reader.tellg();
   file_reader.seekp(10);
   streampos newPos = file_reader.tellg();
   
   cout << "The start position is: " << start << endl;
   cout << "moved: " << newPos ;
   
   return 0;
}
