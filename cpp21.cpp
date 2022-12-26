#include <iostream>

//protected指定子　protectedで指定されたメンバは被保護メンバという。
//派生クラスからアクセスできる非公開メンバが被保護メンバという。
using namespace std;

// class Base{
// 	protected://派生クラスからはアクセスできる被保護メンバ。privateは派生クラスからアクセスできない。
// 	char *str;
// };

// class Derived: public Base{
// 	public:
// 	void setStr(char *str) {this->str = str;}//ここから基本クラスのprotectedメンバ変数にアクセスしている。
// 	void printStr(){cout << str;}
// } obj;

// int main()
// {
// 	obj.setStr("derived");
// 	obj.printStr();
// 	return (0);
// }
////////////////////
//protectedは継承時のアクセス指定子としても使える。
//その場合は、基本クラスの公開メンバ、被保護メンバは被保護メンバとして継承される。
//public
// 1 . public: [member-list]
// 2 . public base-class

// 1の場合、クラスのメンバへのアクセス制御を指定します
// これを指定した後のメンバは、公開メンバとしてあらゆる場所からのアクセスを可能とします
// 2の場合、クラスの継承時に指定するアクセス制御です
// これを指定した派生クラスは、基本クラスの公開メンバをそのまま公開メンバとして継承します

// member-list : メンバを定義します

// base-class : 基本クラスを指定します

// private
// 1 . private: [member-list]
// 2 . private base-class

// 1の場合、クラスのメンバへのアクセス制御を指定します
// これを指定した後のメンバは、非公開メンバとして同一クラス内からのアクセスだけを許可します
// 2の場合、クラスの継承時に指定するアクセス制御です
// これを指定した派生クラスは、基本クラスの公開メンバを非公開メンバとして継承します

// member-list : メンバを定義します

// base-class : 基本クラスを指定します

// protected
// 1 . protected: [member-list]
// 2 . protected base-class

// 1の場合、クラスのメンバへのアクセス制御を指定します
// これを指定した後のメンバは、被保護メンバとして同一クラス及び派生クラスからのアクセスを許可します
// 2の場合、クラスの継承時に指定するアクセス制御です
// これを指定した派生クラスは、基本クラスの公開メンバ及び被保護メンバを被保護メンバとして継承します

// member-list : メンバを定義します

// base-class : 基本クラスを指定します

class Base{
	char *str;
	public:
	char *getStr(){ return str;}
	char **getPo(){return &str;}
};

class Derived:protected Base{
	public:
	void setStr(char *str){
		char **po = getPo();
		*po = str;
	}
	void printStr(){ cout << getStr();}
} obj;

int main()
{
	obj.setStr("kitty");
	obj.printStr();
	return 0;
}