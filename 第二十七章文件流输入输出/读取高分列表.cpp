#include <iostream>
#include <fstream> 
#include <vector>
using namespace std;

/*
�˷���ȱ�ݾ��Ƕ������̶���
���ĵ�ʹ��highscores.txt�ı��� 
*/
int main()
{
   ifstream file_reader("highscores.txt");
   if(!file_reader.is_open())
   {
   	 cout << "Could not open file!" << "\n";
   }
   //���ļ�����ʮ�����֣�ÿ�������û��зָ���������scores�� 
   vector<int> scores;
   for(int i=0;i < 10; i++)
   {
   	 int score;
   	 file_reader >> score;
   	 scores.push_back(score);
   }
   //�����������������Ǵ洢��ַ��ȡֵ�ɵõ���洢��ֵ�� 
   for(vector<int>::iterator itr = scores.begin(); itr != scores.end(); ++itr )
   {
     cout << "The address is: "<< itr << " values is: " << *itr << endl;
   }
   
   return 0;
}
