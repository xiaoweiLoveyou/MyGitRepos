#ifndef __Operator_h__
#define __Operator_h__

/*************************************************************
* @ Operator : 抽象的运算操作类
**************************************************************/

enum OperatorType
{
	Operator_None = 0 , 
	Operator_ADD , 
	Operator_SUB ,
	Operator_MUN ,
	Operator_DIV , 
};



class Operator
{
public:
	Operator(){} ; 
	~Operator() {}; 

	virtual int doOperator( int a , int b ){ return 0 ;   }  
};


class ADDOperator : public Operator
{
public :
	ADDOperator(){} ; 
	~ADDOperator(){} ; 

	int doOperator( int a , int b )
	{
		return a + b ; 
	} ; 
};



#endif