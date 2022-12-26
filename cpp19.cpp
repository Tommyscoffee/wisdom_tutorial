#include <iostream>
using namespace std;

//オーバーロードされた関数も関数ポインタとして宣言して代入できる

void Kitty()
{
	cout << "kitty()" << endl;
}

void Kitty(char *str)
{
	cout << "kitty(char *str)" << str << endl;
}

int main()
{
	void (*po1)(), (*po2)(char *);
	po1 = Kitty;
	po2 = Kitty;

	(*po1)();
	(*po2)("arg");
	return (0);
}