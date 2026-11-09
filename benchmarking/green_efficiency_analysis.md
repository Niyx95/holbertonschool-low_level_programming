## Author: Dagai Nikolas

# Benchmark Report: algorithm efficency

### Measurement Methodology
All the code was provided by Holberton Australia. The source files were not modified expect from task 3 where we needed to implemnt the code for the runtime by ourselfs. the flags provided for the gcc compiler are below as follow:
***gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-long-long***
This experiment was a measurment on how long C programns take to run. The source code utilizes the clock() function from the <time.h> library. 
I learned that clock() return CPU time speed and you can conver the start the end result by dividing it by CLOCKS_PER_SEC to return the result in seconds.

### Observed Performance Defferences
I observed and learned(**especcialy from task 2**), the source code is doing basically the same task in the count_even_naive function and cound_even_single_pass. The outputs shows different runtime beacuse the naive fucntion count the same element multiple times, other then the sinle pass function. The main difference between the to fucntions is that the naive functions runs the same element many more times. Thats why the runtime of the source code will take some time to run.

### Relation Between Runtime and Energy Consumption
If a C program that is slower, takes more CPU. So the processor need more energy to complete the task. Energy was not measured.
Its also to say that the measurement was done only on one machine, so we should take the estimated result with care.
As the world progress into a more green world, we as software engeneers are required to make software runtime better to lean towards better energy consumption.

### Limitations of the Experimt
The limitation of this experiment was that we did not measure energy but only runtime.
Another limitiation is the fact as the start of the experiment the CPU was busy with other tasks on the given machine.
Given this the output will be much different on more powerful machine. The experiment was done by an intel i5 11th gen CPU.
Limitation is also given by the compiler flags, if we compile with no flags we could expect different runtime output.

### Practical engineering Takeway
We can say that "smarter" code is not the same as short code. Also code runtime is not a guess. I lesson i learned that "smarter" code could be also more difficlut to read. 
Finally we can say that a code that runs in less CPU is a way to get more sustainable software.

