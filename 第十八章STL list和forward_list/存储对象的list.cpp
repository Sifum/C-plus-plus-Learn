#include <iostream>
#include <vector>
#include <list> 
#include <string>
using namespace std;

/*
对包含对象的list进行排序以及删除其中的元素
1.在list包含的对象所属的类中，实现运算符<
2.提供一个排序二元谓词--------一个这样的函数，即接受两个输入值，并返回布尔值 
*/
template <typename T>
void DisplayContents(const T& Input)
{
	for(auto iElement = Input.cbegin(); iElement != Input.cend(); ++iElement)
	   cout << *iElement << ' ';//C++11支持 
    cout << endl;
}
struct ContactItem
{
	string strContactsName;
	string strPhoneNumber;
	string strDisplayRepresentation;
	
	ContactItem(const string& strName, const string& strNumber)
	{
		strContactsName = strName;
		strPhoneNumber = strNumber;
		strDisplayRepresentation = (strContactsName + " : " + strPhoneNumber);
	}
	bool operator == (const ContactItem& itemToCompare) const
	{
		return (itemToCompare.strContactsName == this -> strContactsName);
	}
	operator const char*() const
	{
		return strDisplayRepresentation.c_str();
	}
};
bool SortOnPhoneNumber(const ContactItem& item1, const ContactItem& item2)
{
	return (item1.strPhoneNumber < item2.strPhoneNumber);
}
int main()
{
   list <ContactItem> Contacts;
   
   Contacts.push_back(ContactItem("Jack", "+1 7889"));
   Contacts.push_back(ContactItem("Bill", "+1 97 7897"));
   Contacts.push_back(ContactItem("Angela", "+49 2345"));
   Contacts.push_back(ContactItem("Vladimir", "+7 6645"));
   Contacts.push_back(ContactItem("Manmohan", "+91 234"));
   Contacts.push_back(ContactItem("Barack", "+1 745"));
   
   cout << "List in initial order: " << endl;
   DisplayContents(Contacts);
   
   Contacts.sort();
   cout << "After sorting in alphabetical order via operator<:" << endl;
   DisplayContents(Contacts);
   
   Contacts.sort(SortOnPhoneNumber);
   cout << "After sorting in order of phone numbers via predicate:" << endl;
   DisplayContents(Contacts);
   
   cout << "After erasing Vladimir from the list: " ;
   Contacts.remove(ContactItem("Vladimir", " "));
   DisplayContents(Contacts);
   
   return 0;
}
