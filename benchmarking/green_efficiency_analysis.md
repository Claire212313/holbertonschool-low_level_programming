# Analysis Report

## Measurement Methodology

First, compile the .c file, meaning create an executable program using the command gcc
[option][source file] -o [program name], and run it 3 times (as requested in exercise 0) to observe the results
obtained.
Then, in the following exercise, the task was to calculate the averages and compare them.
In the last exercise, the goal is to see where the most time is spent. We calculated build_data_set (time to fill
the arrays), process (performs the calculations), and reduce (adds everything up), as well as the total (time of all
the programs).


## Observed Performance Differences

N°1: 
Run 1 — 0.197503 seconds, 
Run 2 — 0.192262 seconds, 
Run 3 — 0.195909 seconds.
 
After observing the three results of the first task, the result obtained is close but not identical; the CPU was 
not at 100% (CPU = the "brain" that executes operations when the program runs), it was also running other programs, 
which is why the results differ.

N°2: In the second exercise, the naive algorithm is about 27903 times slower than the single-pass algorithm. 


The average of the Naive algorithm: 2.315925 seconds. 
The average of the Single-pass algorithm: 0.000083 seconds. 
2.315925/0.000083 = 27902.71.

N°3: In the last exercise, we measure to find out which area consumes the most energy:
 
TOTAL seconds: 0.001087, 
BUILD_DATA seconds: 0.000388, 
PROCESS seconds: 0.000508 (highest result), 
REDUCE seconds: 0.000186.

## Relation Between Runtime and Energy Consumption

In conclusion, we see that even if the program is running one task, it is also running elsewhere to make other
programs function. 
It is preferable to use a single loop for lower consumption. 
The single-pass algorithm makes a loop of 50,000, whereas the naive algorithm does two nested loops, so the outer 
loop runs 50000 times and the inner loop runs 50000 times (50000x50000=2500000000), so the naive algorithm performs
27903 times more operations and therefore consumes more energy. 
The process step is where the calculations are run, so it is the most energy-intensive; 
this relates to Big O notation — the larger the data grows, the better we can describe how the program behaves.


## Limitations of the Experiment

As observed in the first exercise, the measured times vary slightly from one run to another, which limits the 
precision of a single measurement. 
The use of clock() measures CPU time, not actual watts. Time is used as an approximation of energy.

## Practical Engineering Takeaway

It is preferable to choose simple and efficient code to have fewer loops and fewer calculations, so the program 
can run faster and consume less energy.
