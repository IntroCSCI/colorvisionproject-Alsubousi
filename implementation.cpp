#include <iostream>
#include <stdio.h>
#include <string>
#include <fstream>
#include "Colors.h"

Colors::Colors(){
cout <<"Colors Class object created\n\n";
colour_number = 0;
np_colours = 0;
}


void Colors ::palette_analyzer(){
cout <<"****************** Palette Analyzer ******************\n";
string name;
bool iteration_variable = 1;
  while(iteration_variable){
    cout <<"Enter file name(without extension) :\n";
    cin >> name;
    name = name + ".txt";
    fstream file;
    char selection_variable;
    
		file.open(name);
    if (file.is_open()) {   
      cout << endl << "Listing all the available color combinations :\n";
      string line_text;
      string total_text = "";
      char decision_variable;
      int iteration_count = 0;
      while (getline(file, line_text)) { 
        cout << line_text << "\n"; 
        iteration_count = iteration_count +1; 
  
        cout<< "Whether this colour is problamatic or not(Y/N)? :\n";
        cin >> decision_variable;
        if (decision_variable == 'Y'){
          colour_names[iteration_count] = line_text;
        }
      }
      colour_number = iteration_count;
      cout << "\n\n*******************  End of the File  *******************\n";
      file.close(); 
      iteration_variable = 0;
    }
    else{
      cout << "File not found in current working directory\n";
      cout << "Would you like to enter another file name(Y/N)?\n";
      cin >> selection_variable;
      if (selection_variable == 'Y'){
        iteration_variable = 1;
      }
    }
  }
}
 void Colors :: palette_generator(void){
cout <<"****************** Palette Generator ******************\n";
string name;
bool iteration_variable = 1;
  while(iteration_variable){
    cout <<"Enter file name(without extension) in which you want to store colour information :\n";
    cin >> name;
    name = name + ".txt";
    ofstream file;
    char selection_variable;
    
		file.open(name);
    if (file.is_open()) {   
      string line_text;
      string total_text = "";
      string colour;
      int iteration_count = 0;
      bool iteration_decider = 1;
      cout<< "Enter a colour combination which is non problamatic(press 0 to exit) : \n>";

      while (iteration_decider) { 
        iteration_count = iteration_count +1; 
        cout <<">> ";
        cin >> colour;
        if (colour == "0"){
          iteration_decider = 0;
        }
        else{
          nonproblamatic_colours[iteration_count] = colour;
          total_text = total_text +'\n'+colour;
        }
      }
      np_colours = iteration_count;
      file <<total_text;
      cout << "\n\n*******************  End of the File  *******************\n";
      file.close(); 
      iteration_variable = 0;
    }
    else{
      cout << "File not created";
      cout << "Would you like to try again(Y/N)?";
      cin >> selection_variable;
      if (selection_variable == 'Y'){
        iteration_variable = 1;
      }
    }
  }
}

 void Colors :: theme_completer(){
  cout <<"\n********************** Theme Completer **********************\n\n";
  string colour_combination[5]={
    "RED #78AFFD","BLACK #FFFFFF","ORANGE #AC753F","PURPLE #BC753F","PINK #BFE53F"};
  for (int i =0;i<5;i++){
    cout<<colour_combination[i];
    cout <<"\n";
  }
  cout <<"********************** Theme Completed **********************";
}

void Colors::view_problamatic(void){
  cout <<"Following Combinations are problamatic : \n";
  for (int i =0;i<colour_number;i++){
    cout<<"\t"<<colour_names[i];
    cout <<endl;
  }

}