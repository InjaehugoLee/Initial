//7-3.INITIAL2.CPP
/*
�ǽ�3
1)����
 �� source code�� ���� ���� base class�� ���� ���� ���� ��ü�� ���� class�� �ʱ�ȭ ������ �˾ƺ��� ����
2)���
 ��) class G�� ��ü�� ������ �� class G�� base class�� class G�� ���� member�������� � ������ �ʱ�ȭ�Ǵ��� Ȯ���غ���.
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