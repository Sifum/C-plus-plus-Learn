#include <iostream>
#include <fstream> 
#include <cstdlib>
using namespace std;

/*
 文字位置：
 标志位：
 ios_base::beg 从文件的开始的地方进行搜索 
 ios_base::cur 从当前位置开始搜寻 
 ios_base::end 从文件的末尾开始搜寻 
 事实上文件中有两个不同的位置---一个代表程序下一个要读取的地方；一个代表着
 程序下一个要写入的地方。
 可以使用tellg和tellp方法来获取当前的位置，返回当前读取(g代表get)和（p代表put）
 的位置。返回的类型叫做streampos。 
 可以在当前位置的基础上移动来设置你在文件中的位置，使用seekp和seekg。
 例如：
 file_writer.seekp(0, ios_base::beg ); 移动到文件开始的地方
  
*/
int main()
{
   fstream file_reader("lowerscores.txt",ios::in|ios::out );
   /*
   ifstream和ofstream输入和输出
   fstream打开文件同时可以具有读写能力，使用标志位选择ios::in|ios::out
   */
   streampos start = file_reader.tellg();
   file_reader.seekp(10);
   streampos newPos = file_reader.tellg();
   
   cout << "The start position is: " << start << endl;
   cout << "moved: " << newPos ;
   
   return 0;
}
