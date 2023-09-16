# Week 2 Submission 

### Vinay Lanka - 120417665

### All UML class and activity diagrams are in the respective problem folders. The written assignment is in the root folder of the project.

## Setup via command line

Ensure you're in the project's working directory (week_2)

```bash
# Create the make files using cmake
$ cmake -S ./ -B build/

# If building with cmake
$ cmake --build /build

#If you want to generate the compile_json file with bear
$ bear -- cmake --build build/ --clean-first

#To clean and start over
$ rm -rf build/
```

### To generate and view docs

Ensure you're in the project's working directory (week_2)

```bash
$ cmake --build ./build --target docs
```

To view docs <br>

```bash
$ open ./docs/html/index.html
```

## Running problems

To run any of the programs for the problems, make sure you build the executables with the above steps.

## Problem 1-1

Created lib1_1 as a shared library with an empty class and methods to keep track of course grading

Can find the built liblib1_1.so file in `./build/problem1_1/liblib1_1.so`

## Problem 1-2

Program to find the average of numbers stored in a std::vector<double>. Used templates and made a function to find the average of a vector passed to it.

To run - <br>
`./build/problem1_2/vector_average`

## Problem 1-3

Program to catch the SIGINT signal using the signal handler callback function. Prints having caught the Ctrl+C signal.

To kill this program, run `pkill control_handler` as pkill with the name of executable can kill the process.

To run - <br>
`./build/problem1_3/control_handler`

## Problem 1-4

Program to calculate the average grade of a class using a grade_tracker class. Uses class methods to insert data and compute the average alphabet grade of the class.

To run - <br>
`./build/problem1_4/average_grade`

## Problem 1-5

Program to calculate the occourence of each word given via stdin. Uses maps with words as keys and increments values based on occourence. Prints the total number and occourence of each word.

To run - <br>
`./build/problem1_4/word_counter`