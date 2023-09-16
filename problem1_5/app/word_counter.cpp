#include <signal.h>

#include <iostream>
#include <map>

/**
 * @brief Map for storing the words entered in the standard input and the number of occourences of the word
 * 
 */
std::map<std::string, int> word_occourence_map;
int total_count;

int main() {
  std::string word;
  /**
   * @brief While loop that contains the logic to find the word in the map or append it with a first occourence if it doesn't.
   * 
   */
  while (std::getline(std::cin, word)) {
    total_count++;
    if (word_occourence_map.find(word) != word_occourence_map.end()) {
      word_occourence_map[word]++;
    } else {
      word_occourence_map.insert({word, 1});
    }
  }
  std::cout << "Total number of words - " << total_count << std::endl;
  for (auto i = word_occourence_map.begin(); i != word_occourence_map.end();
       i++) {
    std::cout << "Number of times " << i->first << " has occoured - "
              << i->second << std::endl;
  }
  return 0;
}