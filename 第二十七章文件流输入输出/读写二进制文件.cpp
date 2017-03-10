#include <iostream>
#include <fstream>
#include <iomanip>
#include <string> 
using namespace std;

/*

*/
struct Human
{
	Human() {};
	Human(const char* inName, int inAge, const char* inDOB):Age(inAge)
	{
		strcpy(Name, inName);
		strcpy(DOB, inDOB);
	}
	char Name[30];
	int Age;
	char DOB[20];
};
int main()
{
	Human Input("Siddhartha Rao", 101, "May 1910");
	//写入二进制文件 
	ofstream fsOut("MyBinary.bin", ios_base::out| ios_base::binary);
	
	if(fsOut.is_open())
	{
		cout << "Writing one object of Human to a binary file" << endl;
		fsOut.write(reinterpret_cast<const char*>(&Input), sizeof(Input));
		fsOut.close();
	}
	//输出二进制文件
	ifstream fsIn("MyBinary.bin", ios_base::in|ios_base::binary);
	if(fsIn.is_open())
	{
		Human somePerson;
		fsIn.read((char*)&somePerson, sizeof(somePerson));
		
		cout << "Reading information from binary file: " << endl;
		cout << "Name = " << somePerson.Name << endl;
		cout << "Age = " << somePerson.Age<< endl;
		cout << "Date of birth = " << somePerson.DOB << endl;
	} 
	
	
	return 0;
}
