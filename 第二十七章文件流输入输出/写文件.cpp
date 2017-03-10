#include <iostream>
#include <fstream> 
#include <cstdlib>
using namespace std;

/*
 写文件 
 此文档对scores.txt进行操作 
 ofstream 文件流名(文件名，参数);
 文件流名可任意取。 
 参数：
 ios::app 在文件后面作添加，每次写入之后把位置设到最后 
 ios::ate 把当前位置设为最后 
 ios::trunc 删除文件中所有的东西（截去文件） 
 ios::out 允许向文件输入 
 ios::binary  允许对流进行二进制操作（读取文件时同样可以这样） 
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
   //隔行写入文件，会覆盖原文件内容。 
   
   return 0;
}
