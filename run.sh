# compile main.cpp and save to file called main.out
g++ main.cpp -o main.out 

# read input.txt file and pipe text into cin of ./main.out
cat input.txt | ./main.out