
#include "SimpleFactory.h"
#include "Operator.h"

Operator* SimpleFactory::createOperator( int type )
{
	Operator* pRet = nullptr ; 
	switch ( type )
	{
	case Operator_ADD : 
		pRet = new ADDOperator() ; 
		break ; 
	case Operator_SUB :
		break ; 
	case Operator_MUN :
		break; 
	case Operator_DIV :
		break ; 
	default:
		break;
	}
	return pRet ; 
}

