#include <iostream>

using namespace std ; 
#include "SimpleFactory.h"
#include "Operator.h"
#include "Factory.h"
#include "Product.h"
#include "AbstractFactory.h"
#include "Goods.h"

int main( int argc , char * argv[] )
{

	// �򵥹���
	Operator* pRet = SimpleFactory::createOperator( Operator_ADD ) ; 
	std::cout << pRet->doOperator( 10 , 20 ) << std::endl ; 

	// ����ģʽ
	PhoneFactory* phoneFactory = new PhoneFactory() ; 
	Product* phone = phoneFactory->createProduct() ; 
	phone->UseedWork() ; 


	// ���󹤳�ģʽ
	FuShiKang *  fushikang = new FuShiKang() ; 
	Panel* ipad = fushikang->createPanel() ; 
	Computer* applecomputer = fushikang->createComputer() ; 
	ipad->show() ; 
	applecomputer->show() ; 


	XiaoMi *xiaomi = new XiaoMi() ; 
	Panel* xiaomiPanel = xiaomi->createPanel() ; 
	Computer* xiaomiComputer = xiaomi->createComputer() ; 
	xiaomiPanel->show() ; 
	xiaomiComputer->show() ; 

	getchar() ; 
	return 1 ; 
}