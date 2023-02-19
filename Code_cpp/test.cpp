#include <iostream>
#include <cstdlib>
int main(void)
{
	using namespace std;
	int carrots;
	cout << "How many carrots do you have?" << endl;
	cin >> carrots;
	cout << "Here are two more.";
	carrots = carrots + 2;
	cout << "Now you have " << carrots << " carrots." << endl;
	cout << "你好，世界" << endl;
	system("pause");
	return 0;
}