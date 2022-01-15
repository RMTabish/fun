#include<iostream>

using namespace std;

int main()
{
	char s;
	int n1, n2;
	cout << "please enter two numbers :"<<endl;
	cin >> n1 >> n2;
		cout << "enter the operation: ";
		cin >> s;

switch(s)
{
case'+':cout << n1 + n2;break;
case'*':cout << n1 * n2;break;
case'-':cout << n1 - n2;break;
case'/':cout << n1 / n2;break;
	
default:cout << "syntax error";

}
}