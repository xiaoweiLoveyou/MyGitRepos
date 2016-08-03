#ifndef __Product_h__
#define __Product_h__

/****************************************************
* @ 工厂模式的产品类 ,后续需要添加新的产品只要在这里添加就可以了
****************************************************/

// 产品的抽象，所有的具体的产品都由这里进行派生
class Product 
{
public:
	Product() 
	{
	}
	~Product() 
	{
	}

	virtual void UseedWork() = 0 ; // 产品的功能
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
		std::cout << "我是手机 ， 我可以用来打电话" << std::endl ; 
	}
};


#endif