import os, git

# Create repo for current directory
repo = git.Repo(os.getcwd())





repo.git.add('--all')  # to add all the working files.
repo.git.commit('-m', 'commit message from python script', author='Abdullah Ridwan <abdullahridwan73@gmail.com>')
origin = repo.remote(name='origin')
print(origin.push(refspec="origin:master"))

