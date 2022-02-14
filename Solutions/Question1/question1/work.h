/**
 * @file work.h
 * @author tamersum11
 * @brief Class Work whose objects represent working times (in whole minutes) and salary rates (in whole cents per minute).
 * @version 0.1
 * @date 2022-02-13
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#ifndef WORK_H
#define WORK_H

#include <iostream>

class Work
{
public:
    Work(int salaryRate = 0, int workingTimes = 0);
    Work(const Work *work);
    ~Work();
    void add(int workingTimes = 0);
    void printSalary(void);
    bool subtract(int workingTimes = 0);
    int compare(const Work *work);
    static void reset(Work *work = nullptr);

private:
    int salaryRate, workingTimes;
};

#endif // WORK_H