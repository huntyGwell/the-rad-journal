import glob

# Get a list of all text files in the current directory
text_files = glob.glob("*.txt")

# Print the names of all text files
for file in text_files:
    print(file)

# Choose a file to append to
file_name = input("Enter the name of a file to append to: ")
#open the file in append mode
with open(file_name, "a") as file:
    # Write a new line to the file
    # append the contents of the text file found in ../days/Append.txt
    with open("../Days/Append.txt") as append_file:
        for line in append_file:
            file.write(line)
    # get user input to append to the file
    user_input = input("Enter text to append to the file: ")
    while user_input != "done":
        file.write(user_input + "\n")
        user_input = input("tell me all about it: ")
print("File appended successfully!")
