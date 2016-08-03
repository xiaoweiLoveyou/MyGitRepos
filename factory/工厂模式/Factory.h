#ifndef __Factory_h__
#define __Factory_h__


/************************************************
* @@@@ ����ģʽ ��ÿ������ֻ����һ�ֲ�Ʒ 
* @@@@ ������չֻ��Ҫ����µĹ������µĲ�Ʒ�Ϳ�����
*************************************************/

#include "Product.h"

// �����๤��------ ��Ϊ���࣬����������Ĳ�Ʒ
class Factory 
{
public:
	Factory() 
	{
	}
	~Factory() 
	{
	}
	virtual Product* createProduct() = 0 ; 
};


// ���һ�������ֻ��Ĺ��� , �����Ӧһ���ֻ��Ĳ�Ʒ��
class PhoneFactory : public Factory
{
public:
	PhoneFactory()
	{
	} 
	~PhoneFactory()
	{
	}
	
	Product* createProduct()
	{
		return new PhoneProduct() ; 
	}
};



#endif