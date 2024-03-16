import os

# Function to delete .git directory
def delete_git_directory(directory):
    git_dir = os.path.join(directory, ".git")
    if os.path.exists(git_dir):
        print(f"Deleting .git directory in {directory}")
        os.system(f"rm -rf {git_dir}")  # Delete the .git directory

# File containing the list of directories
file_name = "repo_names"

# Get the list of directories from the file
with open(file_name, 'r') as file:
    directories = file.readlines()

# Remove any leading or trailing whitespaces and line breaks
directories = [directory.strip() for directory in directories]

# Iterate over each directory and delete .git directory if it exists
for directory in directories:
    if os.path.isdir(directory):
        delete_git_directory(directory)
    else:
        print(f"Directory '{directory}' does not exist.")

print("Task completed.")
