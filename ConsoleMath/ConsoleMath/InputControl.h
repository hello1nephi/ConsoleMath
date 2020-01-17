/***********************************************************************
 * COMPONENT:
 *    Input Control
 * Author:
 *    Adam Miller
 * Summary:
 *    Contains templates for various input prompts and handling of input
 ************************************************************************/
#pragma once
#include <string>
#include <list>

bool continueQuestion();

bool againQuestion();

unsigned int getUnsignedInt(std::string message);

long long getLong(std::string message);

double getDouble(std::string message);

std::list<double> * getOperands();