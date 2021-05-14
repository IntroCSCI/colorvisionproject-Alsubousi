// Author ateeq alsobousi
#include <iostream>
#include <stdio.h>
#include <string>
#include <fstream>

using namespace std;

class Colors{
private :
// number of the total colours that are problamatic to th user
int colour_number;
// colour_names will contain all the colour that are problamatic to the user
string colour_names[200];
// no and array for storing non problamatic colour combinations
int np_colours;
string nonproblamatic_colours[200];

public :
Colors();
void view_problamatic(void);
void palette_analyzer(void);
void palette_generator(void);
void theme_completer(void);
};