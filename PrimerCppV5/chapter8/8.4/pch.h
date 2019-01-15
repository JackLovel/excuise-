#ifndef PCH_H
#define PCH_H

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using std::ifstream;
using std::ofstream;
using std::cout;
using std::endl;
using std::string;
using std::vector;
using std::getline;

void ReadFileToVec(const string&, vector<string>&);

#endif