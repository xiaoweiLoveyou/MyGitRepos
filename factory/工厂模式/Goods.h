#ifndef __Goods_h__
#define __Goods_h__
#include <iostream>
using namespace std;

// Æ½°å 
class Panel
{
public:
	Panel() {} 
	virtual ~Panel() {} 

	virtual void show() = 0 ; 
};


// µçÄÔ
class Computer 
{
public:
	Computer(){}
	virtual ~Computer(){}

	virtual void show() = 0 ; 
};

// 
class ApplePanel : public Panel
{
public: 
	ApplePanel() {} 
	~ApplePanel() {}

	void show()
	{
		std::cout << "iPad" << std::endl ; 
	}
};


class AppleComputer : public Computer
{
public: 
	AppleComputer() {} 
	~AppleComputer() {}

	void show()
	{
		cout << "Apple Computer" << endl ; 
	}
};



class XiaoMiPanel : public Panel
{
public: 
	XiaoMiPanel() {} 
	~XiaoMiPanel() {}

	void show()
	{
		std::cout << "XiaoMiPanel" << std::endl ; 
	}
};

class XiaoMiComputer : public Computer
{
public: 
	XiaoMiComputer() {} 
	~XiaoMiComputer() {}

	void show()
	{
		cout << "XiaoMiComputer" << endl ; 
	}
};





#endif