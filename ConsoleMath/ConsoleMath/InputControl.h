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

bool continueQuestion();

bool againQuestion();

unsigned int getUnsignedInt(std::string message);

long getLong(std::string message);

double getDouble(std::string message);