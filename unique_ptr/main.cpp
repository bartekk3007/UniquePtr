#include <iostream>
#include <memory>
#include "Base.hpp"

using namespace std;

void printContent(const unique_ptr<Base>& ptr)
{
	cout << ptr->number << ' ' << ptr->letter << '\n';
}

int main()
{
	unique_ptr<Base> u1 = unique_ptr<Base>(new Base);
	unique_ptr<Base> u2(new Base);

	u1->letter = 'a';
	u1->number = 1;

	u2->letter = 'b';
	u2->number = 2;

	unique_ptr<Base> u3 = make_unique<Base>(4, 'a');

	printContent(u3);

	return 0;
}