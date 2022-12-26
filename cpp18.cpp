#include <iostream>
using namespace std;
//デフォルト引数
void Kitty(char *str = "defaut str")
{
	cout << str;
}
int main()
{
	Kitty();
	Kitty("not default");
	return (0);
}