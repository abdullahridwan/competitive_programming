import os, git

# Create repo for current directory
repo = git.Repo(os.getcwd())




# List remotes
print('Remotes:')
for remote in repo.remotes:
    print(f'- {remote.name} {remote.url}')

print(repo.remotes.origin.name)





# Run "git branch -r" and collect results into array
remote_branches = []
for ref in repo.git.branch('-r').split('\n'):
    print(ref)
    remote_branches.append(ref)

repo.git.add('--all')  # to add all the working files.
repo.git.commit('-m', 'commit message from python script', author='Abdullah Ridwan <abdullahridwan73@gmail.com>')
origin = repo.remote(name='origin')
print(origin.push())

