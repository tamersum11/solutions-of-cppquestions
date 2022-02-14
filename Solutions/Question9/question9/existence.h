/**
 * @file existence.hpp
 * @author tamersum11
 *
 * @brief Class Existence that contains two class data members numBorn and numLiving.
 * The value of numBorn will be equal to the number of objects of the class that have been instanced.
 * The value of numLiving will be equal to the total number of objects in existance currently.
 * (ie, the objects that have been constructed but not yet destructed.)
 *
 *
 * @version 0.1
 * @date 2022-02-13
 *
 * @copyright Copyright (c) 2022
 *
 */
#ifndef EXISTENCE_H
#define EXISTENCE_H


class Existence
{
private:
    static unsigned int numBorn;
    static unsigned int numLiving;
public:
    Existence();
    ~Existence();

    unsigned int getNumBorn(void) const;
    unsigned int getNumLiving(void) const;
};

#endif // EXISTENCE_H
