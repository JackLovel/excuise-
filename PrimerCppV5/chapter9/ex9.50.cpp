#include <iostream>
#include <string>
#include <vector>

using std::vector;
using std::string;
using std::cout;
using std::endl;
using std::stod;

double str_to_float(vector<string> &str)
{
    double sum = 0;
    vector<double> dvec;
    for(auto iter = str.begin(); iter != str.end(); ++iter)
    {
        dvec.push_back(stod(*iter));
    }

    for(auto iter = dvec.begin(); iter != dvec.end(); ++iter)
        sum += *iter;

    return sum;
}

int main()
{
    vector<string> vstr{"1", "2", "3", "4", "5"};
    cout << str_to_float(vstr) << endl;

    return 0;
}