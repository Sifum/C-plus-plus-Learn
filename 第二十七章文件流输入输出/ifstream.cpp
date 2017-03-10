#include <iostream>
#include <fstream> 
using namespace std;

/*
操作文件的两种数据类型：ifstream和ofstream。他们必须包含头文件fstream 
本文档操作的myfile.txt，取得文档的数字。
 ifstream 文件流名(文件名);
 文件流名可任意取。 
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
