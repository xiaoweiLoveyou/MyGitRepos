#ifndef __Product_h__
#define __Product_h__

/****************************************************
* @ ����ģʽ�Ĳ�Ʒ�� ,������Ҫ����µĲ�ƷֻҪ��������ӾͿ�����
****************************************************/

// ��Ʒ�ĳ������еľ���Ĳ�Ʒ���������������
class Product 
{
public:
	Product() 
	{
	}
	~Product() 
	{
	}

	virtual void UseedWork() = 0 ; // ��Ʒ�Ĺ���
};


class PhoneProduct : public Product
{
public:
	PhoneProduct() 
		: Product() 
	{
	}
	
	~PhoneProduct() 
	{
	}

	virtual void UseedWork()
	{
		std::cout << "�����ֻ� �� �ҿ���������绰" << std::endl ; 
	}
};


#endif