#ifndef __AbstractFactory_h__
#define __AbstractFactory_h__


/************************************************
*** @  AbstractFactory : 抽象工厂
*** @  例子 ： ( 现在要实现一个工厂既要生产平板，还要生产电脑  , 并且每个工厂生产的平板和电脑是不同价格的 )
************************************************/

#include "Goods.h"

class AbstractFactory
{
public:
	AbstractFactory(){}  ; 
	virtual ~AbstractFactory() {} ; 

	virtual Panel* createPanel() = 0 ; 
	virtual Computer* createComputer() = 0 ; 
};

// 富士康 , 生产苹果电脑和苹果手机
class  FuShiKang : public  AbstractFactory
{
public: 
	FuShiKang(){} 
	~FuShiKang() {} 

	 Panel* createPanel()
	 {
		return new ApplePanel() ; 
	 }
	 Computer* createComputer() 
	 {
		return new AppleComputer() ; 
	 }
};


// 小米 , 生产小米电脑和小米手机
class  XiaoMi : public  AbstractFactory
{
public: 
	XiaoMi() {}
	~XiaoMi() {} 

	Panel* createPanel()
	{
		return new XiaoMiPanel() ; 
	}
	Computer* createComputer() 
	{
		return new XiaoMiComputer() ; 
	}
};

#endif