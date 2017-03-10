#include <iostream> 
#include <exception> 
using namespace std;

//×î¼ÑÊµ¼ù2
int main()
{
  try
  {
    int* pAge = new int[536870911];
	
	delete[] pAge;	
  }
  catch(exception& e)
  {
    cout << "Memory allocation failed.Ending program " << e.what() << endl;	
  }
  
  return 0;
}
