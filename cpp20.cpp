#include <iostream>

using namespace std;

class Kitty{
	public:
	void nyan() { cout << "public" << endl;}

};

class Derived_class: public Kitty{
	public:
	void nyo(){cout << "derived" << endl;}
	void nyan(){ cout << "名前衝突"<< endl;}
};

int main()
{
	Derived_class obj;
	obj.nyo();
	obj.nyan();
	obj.Kitty::nyan();
	return (0);
}
