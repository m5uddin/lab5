/*
 * calc.cpp
 *
 *  Created on: Oct 7, 2015
 *      Author: m5uddin
 */



//just to calculate the population of the bactria in 0 to 10 hours

#include<math.h>
#include<stdio.h>

#include "masifun.h"
using namespace std;

double *pop( double k, double No) //taking k and no to find the grouth summery//
{

    static double rez[11];
    int t;
    for (t=0;t<11;t++)



    {
        rez[t]=No * exp(k*t);



    }

    return rez;

}
