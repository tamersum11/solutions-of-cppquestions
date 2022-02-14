/**
 * @file main.cpp
 * @author tamersum11
 * @brief 
 * @version 0.1
 * @date 2022-02-13
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
#include <vector>

#include "existence.h"

using namespace std;

Existence chosenOne; //Existence object that is out of society (chosen one)

/**
 * @brief Displays number of born and number of living
 * 
 */
void displayHumanity(void) {
    cout << "numBorn    :" << chosenOne.getNumBorn() << endl
         << "NumLiving  :" << chosenOne.getNumLiving() << endl << endl;
}

/**
 * @brief Creates a Society with the given population
 * 
 * @param population population of society
 * @return vector<Existence*> 
 */
vector<Existence*> createSociety(unsigned int population) {

    vector<Existence*> v;

    for (int i = 0; i < population; i++)
    {
        v.push_back(new Existence());
    }

    return v;
}

/**
 * @brief 10% of the society is dead
 * 
 * @param v 
 */
void covid19Pandemic(vector<Existence*> &v) {
    int counter  = 0;
    for(auto p : v) {
        if(counter != (int)(v.size() / 10)){
            delete p;
            p = nullptr;
        } else {
            break ;
        }
        counter++;
    }

    v.erase(v.begin(), v.begin() + (int)(v.size() / 10));
}

/**
 * @brief 50% of the society is dead
 * 
 * @param v 
 */
void worldWar(vector<Existence*> &v) {
    int counter  = 0;

    for(auto p : v) {
        if(counter != (int)(v.size() / 2)){
            delete p;
            p = nullptr;
        } else {
            break ;
        }
        counter++;
    }

    v.erase(v.begin(), v.begin() + (int)(v.size() / 2));
}

/**
 * @brief 100% of the society is dead
 * 
 * @param v 
 */
void apocalypse(vector<Existence*> &v) {
    for(auto p : v) {
        delete p;
        p = nullptr;
    }

    v.clear();
}


int main(int argc, char const *argv[])
{
    displayHumanity();

    vector<Existence*> v = createSociety(1000);
    displayHumanity();

    covid19Pandemic(v);
    displayHumanity();

    worldWar(v);
    displayHumanity();

    apocalypse(v);
    displayHumanity();

    return 0;
}
