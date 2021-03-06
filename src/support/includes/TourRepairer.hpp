#ifndef TOURREPAIRER_HPP
#define TOURREPAIRER_HPP

#include <vector>
#include "Tour.hpp"
using std::vector;
namespace TourRepairer{
    //Step 1- Find the overloaded tours
    //Step 2- Find the customer whom demands the most
    //Step 3- Move this customer to the tour with less load
    //Step 4- Test inside the tour to check which position will impact less on the overral distance
    // Repeat until there is not any overloaded tours

    //Colocar para não alterar caso for estourar
    //Encontrar um modo em que todos os subtour sejam válidos
    Tour repairTourV3(Tour&);
    Tour repairTourV4(Tour&);
    
    vector<vector<int>> splitSubTours(vector<int>&);
    void printSubtours(vector<vector<int>>&);
    vector<int> tourRebuilder(vector<vector<int>>&tour);
    vector<int> getOverloadedSubs(vector<vector<int>>&);

    int getHeaviestCustomer(vector<int>);
    int getLightestCustomer(vector<int>);

    void sortSubsByCharge(vector<vector<int>>&);

    void changeCustomers(vector<vector<int>>&);
    void changeCustomersV4(vector<vector<int>>&subtours);
    
    void eraseElement(vector<int>&,int);
    bool willOverload(vector<int>&, int);
    int getCustomerDemand(int);
    int checkBestPosition(vector<int>,int);
    std::pair<int,vector<int>> getBestPossibleTour(vector<std::pair<int,vector<int>>>,
    vector<vector<int>>);

    void changeCustomersMachineV4(vector<vector<int>>&, int (vector<int>));
    void changeCustomersMachine(vector<vector<int>>&, int (vector<int>));
};
#endif 