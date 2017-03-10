#include <iostream>
#include <set> 
#include <string>
using namespace std;

/*
ɾ��STL set��multiset�е�Ԫ��
setObject.erase(key);���ݼ�ɾ��ֵ 
setObject.erase(iElement);����һ����������Ϊ����
setObject.erase(iLowerBound, iUpperBound); ָ���߽� 
*/
template <typename T>
void DisplayContents(const T& Input)
{
	for(auto iElement = Input.cbegin(); iElement != Input.cend(); ++iElement)
	   cout << *iElement << ' ';
    cout << endl;
}
struct ContactItem
{
	string strContactsName;
	string strPnoneNumber;
	string strDisplayRepresentation;
	
	ContactItem(const string& strName, const string& strNumber)
	{
		strContactsName = strName;
		strPnoneNumber = strNumber;
		strDisplayRepresentation = (strContactsName + ": " + strPhoneNumber);
	}
	bool operator == (const ContactItem& itemToCompare) const
	{
		return (itemToCompare.strContactsName == this -> strContactsName);
	}
	bool operator < (const ContactItem& itemToCompare) const
	{
		return (this -> strContactsName < itemToCompare.strContactsName);
	}
	operator const char*() const
	{
		return strDisplayRepresentation.c_str();
	}
};
int main()
{
   set <ContactItem> setContacts;
   setContacts.insert(ContactItem("Jack","+1 7889"));
   setContacts.insert(ContactItem("Bill","+1 97 7897"));
   setContacts.insert(ContactItem("Angela","+49 23456"));
   setContacts.insert(ContactItem("Vladimir","+7 6645"));
   setContacts.insert(ContactItem("Manmohan","+91 234"));
   setContacts.insert(ContactItem("Barack","+1 745"));
   
   cout << "Enter a person whose number you wish to delete: ";
   string NameInput;
   getline(cin, NameInput);
   
   auto iContactFound = setContacts.find(ContactItem(NameInput,""));
   if(iContactFound != setContacts.end())
   {
   	 setContacts.erase(iContactFound);
   	 cout << "Display contents after erasing: " << NameInput << endl;
   	 DisplayContents(setContacts);
   }
   else
     cout << "Contact not found" << endl;
    
   return 0;
}
