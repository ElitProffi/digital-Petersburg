#include <iostream>
#include <string>
#include "Task1.h"
using namespace std;
int main()
{
	vector<vector<string>> v;
	map <string, double> m;
	m["����������"] = 70;
	m["�����������"] = 70;
	m["������� ����"] = 70;
	m["������"] = 0;
	m["���������� ����"] = 0;
	m["��������������"] = 0;
	string f = "C:\\Users\\���������\\Desktop\\Admission campaign data.csv";
	ege(m,v);
	for (int i = 0; i < v.size(); ++i)
	{
		for (int j = 0; j < 14; ++j)
		{
			cout << v[i][j] << "  ";
		}
		cout << endl;
	}
	return 0;
}