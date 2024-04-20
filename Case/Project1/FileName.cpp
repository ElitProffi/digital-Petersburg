#include <iostream>
#include <string>
#include "Task1.h"
using namespace std;
int main()
{
	vector<vector<string>> v;
	map <string, double> m;
	m["Математика"] = 70;
	m["Информатика"] = 70;
	m["Русский язык"] = 70;
	m["Физика"] = 0;
	m["Английский язык"] = 0;
	m["Обществознание"] = 0;
	string f = "C:\\Users\\Александр\\Desktop\\Admission campaign data.csv";
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