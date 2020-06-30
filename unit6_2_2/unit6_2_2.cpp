// unit6_2_2.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include<string>

using namespace std;

void swap(int& a, int& b) {
	int t = a;
	a = b;
	b = t;
}

class Employee {
private:
	string name;
	string address;
	string city;
	string youbian;
public:
	Employee(string n,string a,string c,string y):name(n),address(a),city(c),youbian(y){}
	void change_name(string n) {
		name = n;
	}

	void display() {
		cout << "Name is" << name << endl;
		cout << "City is" << city << endl;
		cout << "Address is" << address << endl;
		cout << "Youbian is" << youbian << endl;
	}
};
int main()
{
	int** a;
	a = new int*[3];
	for (int i = 0; i < 3; i++) {
		a[i] = new int[3];
	}
	cout << "请输入数组" << endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> a[i][j];
		}
	}
	for (int i = 0; i < 3; i++) {
		cout << endl;
		for (int j = 0; j < 3; j++) {
			cout << a[i][j] << " ";
		}
	}
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (i < j) {
				swap(a[i][j], a[j][i]);
			}
		}
	}
	for (int i = 0; i < 3; i++) {
		cout << endl;
		for (int j = 0; j < 3; j++) {
			cout << a[i][j] << " ";
		}
	}

	for (int i = 0; i < 3; i++) {
		delete [] a[i];
	}
	delete [] a;
//	这个单词不能拼错啊，delete，不是delect
	Employee emp[5] = {
		Employee("haibo", "haerbin", "asdawdas", "awdasdfwa"),
		Employee("haibo1", "haerbin", "asdawdas", "awdasdfwa"),
		Employee("haibo2", "haerbin", "asdawdas", "awdasdfwa"),
		Employee("haibo3", "haerbin", "asdawdas", "awdasdfwa"),
		Employee("haibo4", "haerbin", "asdawdas", "awdasdfwa"),
	};
	for (int i = 0; i < 5; i++) {
		emp[i].display();
	}

	string s1 = "1asfuhassshfawklf", s2 = "ashgfioawhekjsahf2";
	string s = s1 + s2;
	cout << s;

	return 0;


}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
