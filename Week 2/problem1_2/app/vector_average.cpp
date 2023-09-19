#include <iostream>
#include <numeric>
#include <vector>

/**
 * @brief Function to calculate the average of the elements of a vector
 *
 * @tparam
 * @param v Input vector of elements to find the average
 * @return T Returns the average value of the elements of the vector
 */
template <typename T>
T vector_average(std::vector<T> const& v) {
  if (v.empty()) {
    return 0;
  }
  double sum = std::accumulate(v.begin(), v.end(), 0.0);
  double average = sum / v.size();
  return average;
}

int main() {
  std::vector<double> v = {5.2345, 3.4567, 8.9233, 7.4567, 9.78123};

  double avg = vector_average(v);
  std::cout << "The average of the numbers in the vector is " << avg
            << std::endl;

  return 0;
}