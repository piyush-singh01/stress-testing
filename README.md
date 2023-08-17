A stress testing template, which tests an optimized but possibly incorrect solution against a correct brute force solution, for online judge submissions.

# Usage
```bash
# Clone the repository
$ git clone https://github.com/piyush-singh01/stress-testing
$ cd stress-testing
```
Generate the test case in required format using `gen.cpp`, put the incorrect solution in `incorrect.cpp` and the correct brute force solution in `brute.cpp`


```bash
# Compile
$ ./compile.sh

# Run
$ ./run.sh
```

The script runs for `1000`(default) different test cases, and compares the output produced by `brute` and `incorrect`. If they differ, the script logs the difference in the output to the terminal (stdout). 

For instance, the following output in the terminal shows that the first two cases ran without any issues, but the third case had a difference in the two outputs, on the first line.
```bash
1
2
3
1c1
< YES
---
> NO
```

The input on which the test fails can be found in the `input` file generated by the script.

## Test Case Generator
The `gen.cpp` contains some boilerplate code to generate test cases.