#ifndef IMPORTDATA_H
#define IMPORTDATA_H

#include <fstream>
#include <iostream>
#include <regex>
#include <sstream>
#include <stdlib.h>
#include <string>
#include <vector>

#include "Customer.hpp"

using std::cout;
using std::endl;
using std::ifstream;
using std::ostringstream;
using std::regex;
using std::string;
using std::vector;

class ImportData {
public:
    ImportData(string);
    //        vector<City> getCitiesCoord();
    string gettspName();
    string getType();
    string getedge_type();
    string getnode_comment();
    string getcomment();
    void printInfos();
    string getInfos();
    int getCapacity();
    vector<Customer> getCustomerList();

private:
    string tspName = "N/A";
    string type = "N/A";
    string comment = "";
    string edge_type = "N/A";
    string node_comment = "N/A";
    string flag;
    string flagaux;
    ifstream myfile;
    int dimension;
    int capacity;
    void regexManager(string);
    bool findIgnoredWords(string);
    void reader(string, string);
    std::vector<Customer> customerList;
    int vecpos = 0;
};

#endif