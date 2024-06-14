# The Rad Journal

*A fun CLI journal with ascii art* 

Several weeks ago I found an inexpensive low-spec laptop and I wanted to use it as a journal
Moreover I wanted to write the journal program as a Command-Line-Interface(CLI)
This is my first big solo project, outside of my college course work and YouTube walkthroughs.

How It All Started
I started with a fresh install of Ubuntu Linux on the laptop mentioned earlier.
I as I was mucking around with it I got the idea to make a CLI journal.
I thought it would be a great opportunity to teach myself C++, nano, git, github, and vim.
I gained some appreciation for vim but ended up using VS-code a lot more. and learning how to debug
better with VS-code.


although the idea was not terribly complicated it did take some interesting turns as I decided that I wanted figure out how to store the entries as separate files, print things out in different colors, print out at different speeds, and make the ascii art still look good.

# How I Put It together
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

# conclusion 
I had a blast learning a lot of fun C++ tricks
