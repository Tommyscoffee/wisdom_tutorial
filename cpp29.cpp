#include <iostream>

using namespace std;
//new 演算子はmallocと違い、確保するメモリサイズを自動で計算してれる。

// int main()
// {
// 	int *po;
// 	po = new int;

// 	*po = 100;
// 	cout<< "動的に割り当てたメモリ" << *po <<endl;

// 	delete po;
// 	return (0);
// }

////////
//オブジェクトの割り当てには、初期値を割り当てることがdケイル

class Kitty{
	public:
	Kitty(char *str){cout << str<< endl;}
	Kitty(){}
	~Kitty(){ cout << "destructor" <<endl;}
	
};

int main()
{
	Kitty *obj;
	obj = new Kitty[3];

	delete [] obj;

	return (0);
}