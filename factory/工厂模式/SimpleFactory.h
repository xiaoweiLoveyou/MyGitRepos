#ifndef __SimpleFactory_h__
#define __SimpleFactory_h__

/*****************************************************
@ * �򵥹����� �� ��ϰ�� ���ӣ� ͨ����ͬ�������������ͬ�Ĳ��� ��
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