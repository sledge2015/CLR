// Verifyproject.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <string>
#include <algorithm>
#include <iostream>
#include <vector>
#include <iterator>
#include <numeric>

using namespace std;

class Shape
{
public:
	 virtual void test1() {};

private:

};

class StringReference : public Shape
{
public:
	StringReference();
	~StringReference();

	string GetChar();
	void SetNU(int n);
	void GetNU();

	virtual void test1() override;
private:
	int m_nNuber;
};

StringReference::StringReference()
	: m_nNuber(0)
{
}

StringReference::~StringReference()
{
}
void StringReference::SetNU(int n)
{
	m_nNuber = n;
}

void StringReference::GetNU()
{
	printf("m_nNuber: %d\n", m_nNuber);
}

string StringReference::GetChar()
{
	string str = "1";
	printf("Result: %s\n", str.c_str());
	return std::move(str);
}

void StringReference::test1()
{
	printf("this is test \n");
}

string GetMan()
{
	StringReference man;
	return std::move(man.GetChar());
}
int main()
{
// 	string str = GetMan();
// 	printf("Result: %s\n", str.c_str());

	//
// 	Shape* pString = new StringReference();
// 	pString->test1();
// 
// 	StringReference* pString22 = new StringReference();
// 	pString22->GetChar();

	std::vector<int> vList = { 1,2,3,5,2,6,9 };
	std::vector<int> vList11 = { 1,2, 12,13 };
	//std::vector<int> vList1;
	//auto it = std::copy_if(vList.begin(), vList.end(), std::inserter(vList1, std::end(vList1)), [&](int n)->bool
	//{
	//	if (n > 2)
	//	{
	//		return true;
	//	}
	//	return false;
	//});

	//for each (auto n in vList1)
	//{
	//	printf("vList1: %d\n", n);
	//}

	std::vector<StringReference*> vList1;
	StringReference* p = new StringReference();
	p->SetNU(1);
	vList1.push_back(p);

	StringReference* p1 = new StringReference();
	p1->SetNU(2);
	vList1.push_back(p1);

	std::vector<StringReference*> vList3(vList1.size());
	//vList3.resize(vList1.size());
	int n;
	std::copy_if(vList1.begin(), vList1.end(), vList3.begin(), [n](StringReference* p)
	{
		return true;
	});

// 	std::vector<StringReference*> vList2;
// 	vList2.insert(vList2.end(), vList1[0]);
	auto it = vList3.begin();
	for (; it != vList3.end(); ++it)
	{
		(*it)->SetNU(3);
	}

	for each (auto itor in vList3)
	{
		std::cout << "bengin \n";
		itor->GetNU();
		std::cout << "end \n";
	}

	for each (auto itor in vList1)
	{
		itor->GetNU();
	}

	std::cout << "before:";
	//std::for_each(vList.begin(), vList.end(), print);
	for each (auto itor in vList11)
	{
		auto result2 = std::find(vList.begin(), vList.end(), itor);
		if (result2 == vList.end())
		{
			vList.push_back(itor);
		}
	}

	for each (auto iterINt in vList)
	{
		std::cout << '\n'<<iterINt;
	}

    return 0;
}

