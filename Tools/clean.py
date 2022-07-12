import os
from global_defs import project_directory

os.chdir(project_directory)

command = f'scons -c'
print("Execute:")
print(command)
os.system(command)