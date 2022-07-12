import os, sys
import inspect
from glob import glob

currentdir = os.path.dirname(os.path.abspath(inspect.getfile(inspect.currentframe())))
parentdir = os.path.dirname(currentdir)
sys.path.insert(0, parentdir) 

import global_defs

ui_files = glob(f'{global_defs.project_directory}/tools/window_components/**/*.ui', recursive=True)

for file in ui_files:
    file = file.strip("\\.")[0]
    print(file)
    # os.system(f'pyuic5.exe -x {file}.ui -o {file}.py')
    
