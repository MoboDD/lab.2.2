//Root.h
#pragma once
using namespace System;
using namespace System::Windows::Forms;
#include <cmath>
// Прототипы функций
double GetDouble(TextBox^);
double Root(double, double, int, double&, ListBox^);
void PutDouble(double, TextBox^);
double Funct(double);