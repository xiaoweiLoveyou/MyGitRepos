#ifndef __Factory_h__
#define __Factory_h__


/************************************************
* @@@@ 工厂模式 ：每个工厂只生产一种产品 
* @@@@ 后续扩展只需要添加新的工厂和新的产品就可以了
*************************************************/

#include "Product.h"

// 抽象类工厂------ 作为基类，不生产具体的产品
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


// 添加一个生产手机的工厂 , 必须对应一个手机的产品类
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