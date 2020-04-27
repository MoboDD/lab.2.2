#include "Header.h"

double GetDouble(TextBox^ TB)
{
	return Convert::ToDouble(TB->Text);
}
 
void PutDouble(double x, TextBox^ TB)
{
	TB->Text = x.ToString();
}