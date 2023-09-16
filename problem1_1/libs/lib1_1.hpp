#pragma once

#include <map>
#include <string>
#include <vector>

/**
 * @brief Class for supporting the grading of courses and a method for
 * generating a GPA(Grade Point Average) of a class. The map is a reference for
 * the grading system and is good for converting between the letter and the
 * numerical grade.
 *
 */
class Course_Grading {
 public:
  std::map<double, char> grade_map{
      {5.0, 'A'}, {4.0, 'B'}, {3.0, 'C'}, {2.0, 'D'}, {1.0, 'E'}};
  double gpa_calculator();

 private:
  std::vector<int> UID;
  std::vector<char> course_grade;
};