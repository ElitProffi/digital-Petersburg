#include <iostream>
#include <string>
#include "Task1.h"
using namespace std;
int main()
{
	vector<vector<string>> v;
	string f = "C:\\Users\\Александр\\Desktop\\Admission campaign data.csv";
	readf(f, v);
	for (int i = 0; i < v.size(); ++i)
	{
		for (int j = 0; j < 14; ++j)
		{
			cout << v[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}