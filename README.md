//ateeq alsubousi

Improvements from previous versions : 
In previous version we used three different functions to perform the operation required in palette generator , palette analyzer and theme completer, but in this version we have used the arrays to save the colors information which are the attributes of the class, so to improve the reusability I made the palette analyzer, theme completer and palette generator the member functions of the class color, now one can easily use all these functionalities by creating the object of the class colors.

Attributes of the colors class :
Colors class has 4 attributes, out of which 2 are the string arrays which hold information about the colors which are problematic to the patient and the information of the colors that are non-problematic, the other two are the integers they hold the no of problematic and non-problematic colors, all of these attributes were made private to support the concept of abstraction.
Member functions:
There are four member functions in the class:

1. Palette analyzer : this function ask the user for the color file which he /she wants to analyze, if file exists in the current directory than it will open the file, otherwise it will inform the user to enter another file name because that file does not exist in the current working directory, once correct name is entered it will open the file and display all its colors one by one and ask the user whether the color is problematic or not if user responded with an ‘Y’ it adds the color to the colour_name string which is an attribute of the class. At the end it will update the no of the color_number with the no of iterations.

2. Palette Generator : the file opening process is same as that of palette analyzer, in this function the user is asked to enter the colors that are problematic and when he/she is done with adding info of all the colours he/she can press ‘0’ and then hit enter to terminate the loop, then all these values are saved in a loop as well as in the file whose name the user have entered before.

3. Theme generator : this function generates the string of 5 color combinations that are not problematic to the user and print them on the console, the values of colors is saved in an array
4. view_problamatic : this function uses the color_name array which is an attribute of the class to display all the color values that are problamtic to the patient on the console

5. Colors() : class’ default constructor is overloaded which set the value of colour_number and np_color_number to zero
