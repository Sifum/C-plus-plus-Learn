#include <iostream>
#include <string>
#include <vector>
using namespace std;

/*
vector特点：
1.在数组末尾添加元素所需的时间是固定的，即在末尾插入元素的所需时间不随数组大小而异，在
末尾删除元素也如此；
2.在数组中间添加或删除元素所需时间与该元素后面的元素个数成正比；
3.存储的元素数是动态的。

各种实例化std::vector的方法：指定长度和初始值以及复制另一个vector中的值 
*/
int main()
{
   vector <int> vecIntegers;
   vector <int> vecWithTenElements(10);
   //初始化10个元素，每个元素的值为90
   vector <int> vecWithTenInitializedElements(10, 90);
   //一个vector实例化另一个vector的内容，即复制vector对象或其一部分
   vector <int> vecArrayCopy(vecWithTenInitializedElements);
   //要求c++11迭代器
   vector <int> vecSomeElementsCopied(vecWithTenElements.cbegin(), vecWithTenElements.cbegin() + 5);
    
   return 0;
}

