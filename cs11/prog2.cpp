#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

int main() {
  cout << "===================================================================" << endl;
  cout << "Student Grading System (SGS)" << endl;
  cout << "Gabriel Carrera Rosas\nprog2.cpp\nMarch 24th, 2024\nLong Beach City "
          "College (LBCC)" << endl;
  cout << "===================================================================" << endl;

  int student_id, cs11, cs12, cs22;
  string first_name, last_name;
  double total, average;

  // entering ID
  cout << "ID: ";
  cin >> student_id;

  // name and last name(s)
  cout << "First Name: ";
  cin >> first_name;

  cout << "Last Name: ";
  cin.ignore();
  getline(cin, last_name);

  // entering totals from CS 11, 12, 22
  cout << "Enter your total out of 100 from the following courses -->" << endl;
  cout << "CS 11: ";
  cin >> cs11;

  cout << "CS 12: ";
  cin >> cs12;

  cout << "CS 22: ";
  cin >> cs22;

  // add totals together to get average of all three classes
  total = cs11 + cs12 + cs22;
  cout << "Total: " << total << endl;
  average = (total / 3.0);

  // fixed and setprecision to round to the second decimal place
  cout << fixed;
  cout << "Average: " << setprecision(2) << average << "%" << endl;

  // conditional statements that go through all possible outcomes of GPA, followed by an additional comment
  if ((average) >= 90.0) {
    cout << "Grade: A" << endl;
    cout << "Comments: Congratulations on your achievement!" << endl;
  } else if ((average) >= 80.0 && (average) < 90.0) {
    cout << "Grade: B" << endl;
    cout << "Comments: Congratulations. You're almost at an A. Keep up the "
            "good work."
         << endl;
  } else if ((average) >= 70.0 && (average) < 80.0) {
    cout << "Grade: C" << endl;
    cout << "Comments: You are barely passing the class. Bring your grade up."
         << endl;
  } else if ((average) >= 60.0 && (average) < 70.0) {
    cout << "Grade: D" << endl;
    cout << "Comments: You are getting close to an F. Bring your grade up."
         << endl;
  } else if ((average) < 60.0) {
    cout << "Grade: F" << endl;
    cout << "Comments: You are failing this course. This is a warning message."
         << endl;
  }
}