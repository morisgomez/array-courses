//'subscript' and 'indexes' used interchangeably. 
#include <iostream>
using namespace std;

int main() {
    const int courses = 5;
    int grade[courses]; //create array of 5 courses w/ grade for each course.
    int counter;
   
    //loop assigns indexes in array user values.
    for (counter = 0; counter < courses; counter++) //loop runs 5 times.
    {
        cout << "what is the grade for course " << counter + 1 << " ? "; //we add 1 to get the course #. notice how we do not reassign here.
        cin >> grade[counter]; //for course 1, we assign input to index 0. course # will always be 1 ahead of index.
    }
    
    //loop prints out indexes from array.
    for (counter = 0; counter < courses; counter++) //loop runs 5 times.
        //we start at zero to print out the first subscript. 
        //counter being < than courses allows to print out the exact length of the array.
    {
        cout << grade[counter] << endl;
    }
    return 0;
}
