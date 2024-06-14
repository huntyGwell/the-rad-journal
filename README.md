# The Rad Journal

*A fun CLI journal with ascii art* 

Several weeks ago I found an inexpensive low-spec laptop and I wanted to use it as a journal
Moreover I wanted to write the journal program as a Command-Line-Interface(CLI)
This is my first big solo project, outside of my college course work and YouTube walkthroughs.

## How It All Started
I started with a fresh install of Ubuntu Linux on the laptop mentioned earlier.
I as I was mucking around with it I got the idea to make a CLI journal.
I thought it would be a great opportunity to teach myself C++, nano, git, github, markdown and vim.
I gained some appreciation for vim but ended up using VS-code a lot more. and learning how to debug better with VS-code.


although the idea was not terribly complicated it did take some interesting turns as I decided that I wanted figure out how to store the entries as separate files, print things out in different colors, print out at different speeds, and make the ascii art still look good.

## How I Put It together
I hade help with the ascii files
the actual ascii art can be found at [The ASCII Art Archive](https://www.asciiart.eu/)
and creating the text banners was done with the help of [ASCII.today](https://ascii.today/)
I created a directory for the text files to hold the ascii art called days
I used Ctime to figure out the days and to create the entry file names.
I used chrono to adjust the speed at which the prompt prints to the console.
separate header files for the prompts and choosing one at random. 
separate header for accessing the ascii art.
separate header for writing out.
I did this to keep the main cpp file clean and readable.

the ascii art for each day, and the goodbye message is all stored in the 'Day' directory 
the Entries will be sorted in the 'Entries' directory.
I also had a file called ideas.txt to brainstorm functionality.

## How you make it work
You will need to start by cloning this repo [instructions here](https://docs.github.com/en/repositories/creating-and-managing-repositories/cloning-a-repository)

C++ is a compiled language. So that means you will need to compile it on your machine.
My preferred way is g++.
Make sure g++ is installed [instructions here](https://www3.cs.stonybrook.edu/~alee/g++/g++.html)
Then in the terminal compile journal.cpp
'g++ journal.cpp -o journal'
'./journal'

Now you will be given a writing prompt
When you are done simply:
1. press enter
2. Type 'done'
3. And press enter again

### Appending 
If you want to append you go into the Entries folder 
There is a python file that you can use to append to any text file.
To do so simply type in the terminal:
'python3 append_entry.py'
- you will see all your entries that you have made.
- choose the one you want to append by typing in its name.
- Once you are done appending simply:
1. press enter
2. Type 'done'
3. And press enter again



## conclusion 
I had a blast learning a lot of interestingprograming tricks and making something new.
use it all you want.
I hope you enjoy.
