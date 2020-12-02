//7-3.INITIAL2.CPP
/*
실습3
1)내용
 본 source code는 여러 개의 base class를 갖고 여러 개의 객체를 갖는 class의 초기화 순서를 알아보기 위함
2)방법
 가) class G의 객체를 생성할 때 class G의 base class와 class G가 가진 member변수들이 어떤 순서로 초기화되는지 확인해보자.
 */

#include <iostream>
using namespace std;
class A {
public:
	A() {
		cout << "Constructor of class A" << endl;
	}
	~A() {
		cout << "Destructor of class A" << endl;
	}
};
class B {
public:
	B() {
		cout << "constructor of class B" << endl;
	}
	~B() {
		cout << "Destructor of class B" << endl;
	}
};
class C {
public:
	C() {
		cout << "Constructor of class C" << endl;
	}
};
class D {
public:
	D() {
		cout << "Constructor of class D" << endl;
	}
	~D() {
		cout << "Destructor of class D" << endl;
	}
};
class E {
public:
	E() {
		cout << "Constructor of class E" << endl;
	}
	~E() {
		cout << "Destructor of class E" << endl;
	}
};
class F {
public:
	F() {
		cout << "Constructor of class F" << endl;
	}
	~F() {
		cout << "Destructor of class F" << endl;
	}
};
class G : public A, public B, public C {
public:
	D d;
	E e;
	F f;
	G() {
		cout << "Constructor of class G, derived from A, B and C, haivng D, E, F objects inside" <<endl;
	}
	~G() {
		cout << "Destructor of class G" << endl;
	}
};
void main() {
	cout << "Defining an object of class G" << endl;
	{
		G g; 
	}
	system("pause");
}