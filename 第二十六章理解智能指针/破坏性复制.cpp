/*
�ƻ��Ը��ƣ�
��ֻ��ָ�뱻����ʱ�������������Ȩת����Ŀ��ָ�벢����ԭ����ָ��;
��������ԭ�򣬺ܶ����Ա�����ʹ���ƻ��Ը�������ָ��
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
