#include <iostream>
#include <fstream> 
#include <vector>
using namespace std;

/*
此方法缺陷就是读入数固定。
此文档使用highscores.txt文本。 
*/
int main()
{
   ifstream file_reader("highscores.txt");
   if(!file_reader.is_open())
   {
   	 cout << "Could not open file!" << "\n";
   }
   //从文件读入十个数字，每个数字用换行分隔符。读入scores。 
   vector<int> scores;
   for(int i=0;i < 10; i++)
   {
   	 int score;
   	 file_reader >> score;
   	 scores.push_back(score);
   }
   //迭代器，迭代器名是存储地址，取值可得到其存储的值。 
   for(vector<int>::iterator itr = scores.begin(); itr != scores.end(); ++itr )
   {
     cout << "The address is: "<< itr << " values is: " << *itr << endl;
   }
   
   return 0;
}
