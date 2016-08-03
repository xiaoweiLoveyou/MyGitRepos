#ifndef __AbstractFactory_h__
#define __AbstractFactory_h__


/************************************************
*** @  AbstractFactory : ���󹤳�
*** @  ���� �� ( ����Ҫʵ��һ��������Ҫ����ƽ�壬��Ҫ��������  , ����ÿ������������ƽ��͵����ǲ�ͬ�۸�� )
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

// ��ʿ�� , ����ƻ�����Ժ�ƻ���ֻ�
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


// С�� , ����С�׵��Ժ�С���ֻ�
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