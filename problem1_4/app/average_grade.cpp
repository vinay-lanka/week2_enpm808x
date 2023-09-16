#include <cmath>
#include <fstream>
#include <iostream>
#include <map>
#include <numeric>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

/**
 * @brief The Grade Tracker Class for the tracking of data, for computing the
 * average grade for a homework assignment. Has methods for data input from a
 * file and calculating the average.
 *
 */
class grade_tracker {
 public:
  map<double, string> grade_map{
      {5.0, "A"}, {4.0, "B"}, {3.0, "C"}, {2.0, "D"}, {1.0, "E"}};
  void insert_data(string, string);
  string compute_average();

 private:
  string average_grade;
  vector<string> names_list;
  vector<double> grades_list;
};

/**
 * @brief Grade tracker method for inserting data into the vectors, name and
 * grades. Uses the map to convert a grade to a numerical value
 *
 * @param name - Name of student
 * @param grade - Grade earned but tracked with a numerical value to compute
 * average
 */
void grade_tracker::insert_data(string name, string grade) {
  names_list.push_back(name);
  bool a = true;
  for (auto& it : grade_map) {
    if (it.second == grade) {
      grades_list.push_back(it.first);
    }
  }
}

/**
 * @brief Grade tracker method to compute the average grade from the student
 * grades and uses the map to convert it to an alphabetical grade
 *
 * @return string - Resultant alphabetical average grade
 */
string grade_tracker::compute_average() {
  double average_mark =
      round(accumulate(grades_list.begin(), grades_list.end(), 0.0) /
            grades_list.size());
  return grade_map[average_mark];
}

int main() {
  grade_tracker tracker;
  ifstream input_file("./information.txt");
  string input_string;
  while (getline(input_file, input_string, '\n')) {
    stringstream ss(input_string);
    string sub_str, name, grade;
    bool name_flag = true;
    while (getline(ss, sub_str, ',')) {
      if (name_flag == true) {
        name = sub_str;
        name_flag = false;
      } else {
        grade = sub_str;
      }
      tracker.insert_data(name, grade);
    }
  }
  string homework_average_grade = tracker.compute_average();
  cout << homework_average_grade;
  input_file.close();
  return 0;
}