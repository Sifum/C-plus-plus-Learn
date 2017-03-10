/*
破坏性复制：
在只能指针被复制时，将对象的所有权转交给目标指针并重置原来的指针;
由于种种原因，很多程序员会避免使用破坏性复制智能指针
*/
template <typename T>
class destructivecopy_pointer
{
private:
	T* pObject;
public:
	destructivecopy_pointer(T* pInput):pObject(pInput){}
	~destructivecopy_pointer(){delete pObject;}
	
	destructivecopy_pointer(destructivecopy_pointer& source)
	{
		pObject = source.pObject;
		source.pObject = 0;
	}
	
	destructivecopy_pointer& operator = (destructivecopy_pointer& rhs)
	{
		if(pObject != source.pObject)
		{
			delete pObject;
			pObject = source.pObject;
			source.pObject = 0;
		}
	}
};

int main()
{
	destructivecopy_pointer<int> pNumber (new int);
	destructivecopy_pointer<int> pCopy = pNumber;
	
	return 0;	
}
