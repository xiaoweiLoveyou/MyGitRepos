#ifndef __SimpleFactory_h__
#define __SimpleFactory_h__

/*****************************************************
@ * 简单工厂类 ： 练习（ 例子： 通过不同的运算符创建不同的操作 ）
*****************************************************/	
class Operator ; 

class SimpleFactory 
{
public :
	SimpleFactory() ; 
	~SimpleFactory() ;

	static Operator* createOperator( int  type ) ; 

private :

};



#endif