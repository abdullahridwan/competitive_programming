import os, git

# Create repo for current directory
repo = git.Repo(os.getcwd())

# Run "git branch -r" and collect results into array
remote_branches = []
for ref in repo.git.branch('-r').split('\n'):
    print(ref)
    remote_branches.append(ref)

repo.git.add('--all')  # to add all the working files.
repo.git.commit('-m', 'commit message from python script', author='Abdullah Ridwan <abdullahridwan73@gmail.com>')
origin = repo.remote(name='origin')
origin.push()

