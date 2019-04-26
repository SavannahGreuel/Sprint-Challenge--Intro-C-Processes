**1. List all of the main states a process may be in at any point in time on a standard Unix system. Briefly explain what each of these states means.**
Running: a process that is currently running

Waiting: The process is waiting to be run by a call or event.

Stopped: The process was stopped by an exit or was killed.

Zombie: The process was stopped, but still exists in the process table.



**2. What is a zombie process?**
A zombie process is a process that was exited but still holds data that needs to be passed to the parent. 


**3. How does a zombie process get created? How does one get destroyed?**
It is created when the child process completes its execution, and exits, but leaves behind its process status and other details.

It is destroyed when the parent executes a wait system call, which will read all dead child process statuses. Once the wait call is complete, the dead child will be removed from memory



**4. What are some of the benefits of working in a compiled language versus a non-compiled language? More specifically, what benefits are there to be had from taking the extra time to compile our code?**
A major benefit of using a compiled language is that you can catch bugs easily before reaching production because the language will not run if there is improper arguments, variables, data types, pointers, etc.  It may take more time initially, but it will save you the headache of major debugging down the line

