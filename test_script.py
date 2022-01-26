import os, git

# Create repo for current directory
repo = git.Repo(os.getcwd())




repo.remotes.origin.pull()
repo.git.add('--all')  # to add all the working files.
repo.git.commit('-m', 'commit message from python script', author='Abdullah Ridwan <abdullahridwan73@gmail.com>')
origin = repo.remote(name='origin')
origin.push(refspec="main:main")

