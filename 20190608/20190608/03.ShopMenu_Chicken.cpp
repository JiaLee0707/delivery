#include<iostream>
#include<fstream>
#include<string>

using namespace std;
int main()
{
	//�Է�
	string out_line;
	ofstream out("test.txt");
	for (int i = 0; i <= 10; i++) {
		cin >> out_line;
		out << out_line << endl;
	}
	out.close();
	printf("\n");
	//���
	string in_line;
	ifstream in("test.txt");
	while (getline(in, in_line)) {
		cout << in_line << endl;
	}
	in.close();
}