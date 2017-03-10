#include <algorithm>
#include <iostream>
#include <vector>
#include <deque>
#include <functional>
#include <string>
using namespace std;

/*
替换：
replace与replace_if分别用于替换集合中等于指定值和满足给定条件的元素 
*/
template <typename T>
void DisplayContents(const T& Input)
{
	for(auto iElement = Input.cbegin(); iElement != Input.cend(); ++iElement)
		cout << *iElement << ' ';
    cout << " | numbers of elements: " << Input.size() << endl;
}
int main()
{
   vector <int> vecIntegers(6);
   fill(vecIntegers.begin(), vecIntegers.begin() + 3, 8);
   fill_n(vecIntegers.begin() + 3, 3, 5);

   random_shuffle(vecIntegers.begin(), vecIntegers.end());
   DisplayContents(vecIntegers);

   cout << endl << "Using std::replace to replace value 5 by 8" << endl;
   replace(vecIntegers.begin(), vecIntegers.end(), 5, 8);

   cout << "Using std::replace_if to replace even values by -1" << endl;
   replace_if(vecIntegers.begin(), vecIntegers.end(), [](int element){return ((element % 2) == 0);}, -1);

   cout << endl << "Contents of the vector after replacement: " << endl;
   DisplayContents(vecIntegers);

   return 0;
}
