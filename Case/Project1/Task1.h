#pragma once
#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include <vector>
#include <map>

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
        //stringstream stream(line); // Преобразование строки в поток
        // Извлечение всех значений в этой строке
        int k = 0;
        for (int i = 0; i < 14; ++i)
        {
/*          getline(stream, temp, delimiter);
            if (temp[temp.length() - 1] == ' ')
            {
                while ((temp[temp.length() - 2] == ',') && (temp[temp.length() - 1] == ' '))
                {
                    string t;
                    getline(stream, t, delimiter);
                    temp += t;
                }
            }*/
            while ((k < line.length() - 1) && ((line[k] != ',') || (line[k + 1] == ' ')))
            {
                temp += line[k];
                ++k;
            }
            if (k == line.length() - 1)
            {
                temp += line[k];
            }
            ++k;
            push.push_back(temp);
            temp = "";
        }
        v.push_back(push);
        push.clear();
    }
}

void udalit(map<string, double> score, vector<vector<string>>& v)
{
    int s = v.size();
    for (int i = s - 1; i >= 0; --i)
    {
        if ((score[v[i][5]] <= stod(v[i][8])) || (score[v[i][6]] <= stod(v[i][9])) || (score[v[i][7]] <= stod(v[i][10])) || (score[v[i][5]] + score[v[i][6]] + score[v[i][7]]) <= stod(v[i][11]))
        {
            if (i == 0)
            {
                v.erase(v.begin());
            }
            else 
            {
                v.erase(next(v.begin() + i - 1));
            }

        }
    }
}
void 
void ege(map<string, double> score, vector<vector<string>>& data)
{
    setlocale(LC_ALL, "Russian");
    string table = "C:\\Users\\Александр\\Desktop\\Admission campaign data.csv";
    readf(table, data);
    udalit(score, data);

}