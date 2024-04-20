#pragma once
#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

void readf(string file_adress, vector<vector<string>>& v)
{
	ifstream f(file_adress);
	string line;
    vector<string> push;
    string temp;
    char delimiter = ',';
	getline(f, line);
    while (getline(f, line))
    {
        stringstream stream(line); // Преобразование строки в поток
        // Извлечение всех значений в этой строке
        for (int i = 0; i < 14; ++i)
        {
            getline(stream, temp, delimiter);
            push.push_back(temp);
        }
        v.push_back(push);
    }
}