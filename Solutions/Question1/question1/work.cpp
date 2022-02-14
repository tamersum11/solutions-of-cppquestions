/**
 * @file work.cpp
 * @author tamersum11
 * @see Work.h 
 * @version 0.1
 * @date 2022-02-13
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include "work.h"

/**
 * @brief Construct a new Work:: Work object
 * 
 * @param salaryRate in whole cents per minute
 * @param workingTimes represent working times (in whole minutes)
 */
Work::Work(int salaryRate, int workingTimes)
{
    this->salaryRate = salaryRate;
    this->workingTimes = workingTimes;
}

/**
 * @brief Construct a new copy of Work:: Work object
 * 
 * @param work 
 */
Work::Work(const Work *work)
{
    this->salaryRate  = work->salaryRate;
    this->workingTimes = work->workingTimes;
}

/**
 * @brief Destroy the Work:: Work object
 * 
 */
Work::~Work(){}

/**
 * @brief Adds the given minutes to working time
 * 
 * @param workingTimes time to be added
 */
void Work::add(int workingTimes)
{
   this->workingTimes += workingTimes;
}

/**
 * @brief Prints salary in dollars. (salaryRate * workingTimes) / 100
 * 
 */
void Work::printSalary()
{
    std::cout << (float)(this->workingTimes * this->salaryRate) / 100 << std::endl;
}

/**
 * @brief Attempts to subtract the given minutes to working time
 * 
 * @param workingTimes time to be subtracted
 * @return true if there is sufficient time available (time remains changed)
 * @return false if not sufficient time available (time remains unchanged)
 */
bool Work::subtract(int workingTimes)
{
    if(this->workingTimes - workingTimes < 0) {
        return false;
    } else {
        this->workingTimes -= workingTimes;
        return true;
    }
}

/**
 * @brief Compares salaries the given work object to current work object
 * 
 * @param work object pointer to be compared
 * @return 0 if  salaries of object and compared object are equal
 * @return 1 if objects salary is bigger
 * @return -1 else
 */
int Work::compare(const Work *work)
{
    float salaryThis = (float)(this->workingTimes * this->salaryRate) / 100;
    float salaryWork = (float)(work->salaryRate * work->workingTimes) / 100;

    if(salaryThis == salaryWork) {return 0;}
    else if(salaryThis > salaryWork) {return 1;}
    else {return -1;}
}

/**
 * @brief Reset working time to zero
 * 
 * @param work object pointer to be reset
 */
void Work::reset(Work *work)
{
    work->workingTimes = 0;
}
