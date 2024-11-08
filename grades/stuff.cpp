# include <iostream>
# include <vector>
# include <string>
# include <algorithm>
# include <map>
# include <list>
# include <cstring>
# include <unordered_map>
using namespace std;

/*


*/

double average(unordered_map<string, pair<char, int>> semester, int counter) {
    double grade_sum, unit_sum;
    for (auto grade = semester.begin(); grade != semester.end(); grade++) {
    if (grade->second.first == 'A')               {grade_sum += (4 * grade->second.second) ;} 
    else if (grade->second.first == 'B')          {grade_sum += (3 * grade->second.second) ;} 
    else if (grade->second.first == 'C')          {grade_sum += (2 * grade->second.second) ;} 
    else if (grade->second.first == 'D')          {grade_sum += (1 * grade->second.second) ;}
    else if (grade->second.first == 'F')          {grade_sum += (0 * grade->second.second) ;}
    }    
    for (auto unit = semester.begin(); unit != semester.end(); unit++) {unit_sum += unit->second.second;}
    double gpa = grade_sum / unit_sum ;
    
    if (counter == 1) { cout << "Unit sum: " << unit_sum + 14 << endl;}
    return gpa;
    }

int main() {
    // class, letter grade, units
    unordered_map<string, pair<char, int>> lbcc_current = {
        // fall 23
        {"HIST 10", {'A', 3}}, 
        {"POLSC 1", {'B', 3}},
        
        // spring 24
        {"CS 11" ,  {'B', 3}},
        {"SOCIO 1", {'C', 3}},
        {"COMM 60", {'B', 3}}, 

        // summer 24
        {"MATH 60", {'A', 5}},
        {"MUSIC 40H", {'A', 3}}, 

        // fall 24
        {"CS 12"    , {'A', 4}},
        {"ENGL 1H"  , {'A', 4}}, 
        {"MATH 70"  , {'A', 5}}, 
        {"CS 51"    , {'A', 3}}, 
        {"LEARN 11H", {'A', 3}}, 
        {"COUNS 1"  , {'A', 1}},

        // fall 24, Pasadena City College
        {"BIO 011"  , {'A', 3}}, 
        {"PHYS 008A", {'A', 5.5}}, 

        // winter 25
        {"MATH 80"  , {'A', 5}}, 

        // winter 25, Pasadena City College
        {"PHYS 008B", {'A', 4.5}}, 

        // spring 25
        {"MATH 84"  , {'A', 5}}, 
        {"ENGL 3H"  , {'A', 4}}, 
        {"ETHST 1H" , {'A', 3}}, 
        {"CS 22"    , {'A', 3}}, 
        {"CS 61"    , {'A', 3}}, 

        // spring 25, Pasadena City College
        {"PHYS 008C", {'A', 4.5}}
    };

    // class, letter grade, units
    unordered_map<string, pair<char, int>> lbcc1 = {
        {"HIST 10"  , {'A', 3}}, 
        {"POLSC 1"  , {'A', 3}},
        {"CS 11"    , {'A', 3}},
       {"ENGL 1H"   , {'A', 4}},
        {"SOCIO 1"  , {'C', 3}},
        {"COMM 60"  , {'B', 3}}, 
        {"MATH 60"  , {'A', 5}}, 
        {"BIO 41"   , {'A', 3}}, 
        {"MUSIC 40H"   , {'A', 3}}, 
        {"PHYS 3A"  , {'A', 5.5}},
        {"ENGL 3H"  , {'A', 4}}, 
        {"ETHST 1H" , {'A', 3}}, 
        {"MATH 70"  , {'A', 5}}, 
        {"CS 12"    , {'A', 4}}, 
        {"LEARN 11H", {'A', 3}}, 
        {"PHYS 3B"  , {'A', 4.5}},
        {"MATH 80"  , {'A', 5}}, 
        {"CS 51"    , {'A', 3}}, 
        {"CS 61"    , {'A', 3}}, 
        {"MATH 84"  , {'A', 5}}, 
        {"CS 22"    , {'A', 3}}, 
        {"PHYS 3C"  , {'A', 4.5}}, 
    };


    unordered_map<string, pair<char, int>> csulb = {
        // FALL 21
        // failed MATH 122, 4 units
        {"AFRS 119"  , {'C', 3}}, 
        {"CECS 100"  , {'B', 3}},
        {"ENGL 100B" , {'F', 3}},
        {"ENGR 101"  , {'A', 1}},
        {"THEA 113"  , {'B', 3}}, 
        // {"MATH 122"  , {'C', 4}}

        // SPRING 22
        // failed CECS 174, 3 units
        {"CECS 105"  , {'C', 1}}, 
        {"COMM 130"  , {'B', 3}},
        {"ENGR 102"  , {'A', 1}},
        {"MATH 122"  , {'C', 4}}, 
        {"PHIL 101"  , {'C', 3}}, 
        // {"CECS 174"  , {'B', 3}}


        // FALL 22
        // failed CECS 225, MATH 123, 7 units
        {"ASAM 100B" , {'F', 3}}, 
        {"CECS 174"  , {'B', 3}},
        {"PHYS 151"  , {'F', 4}}, 
        //{"CECS 225"  , {'F', 3}}
        //{"MATH 123"  , {'D', 4}} 

        // SPRING 23
        {"CECS 274"  , {'C', 3}}, 
        {"CECS 228"  , {'B', 3}},
        {"MATH 123"  , {'C', 4}}, 
        {"CECS 225"  , {'B', 3}},
        {"CECS 277"  , {'B', 3}},


        // FALL 23
        {"CECS 325"  , {'D', 3}}, 
        {"CECS 328"  , {'C', 3}},
        {"CECS 341"  , {'F', 3}}, 
        {"ENGL 100B, second" , {'D', 3}},
        {"PHYS 151 , second" , {'F', 4}},

        /*
        {"POLSC 1"  , {'A', 3}}, 
        {"HIST 10"  , {'B', 3}},
        {"BIOL 011" , {'A', 4}},
        {"PHYS 151" , {'A', 4}},
        {"ENGL 100B", {'A', 3}},
        */

    };

    // 16 units to help replace grade
    // (currently 27) 28 units can be used to retake the max amount of grades



    double gpa = average(csulb, 1);
    //double gpa = average(lbcc_current, 0);
    cout << "Current GPA: " << gpa << endl;
    return 0;
}

