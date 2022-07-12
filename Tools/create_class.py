import os
import sys
from global_defs import project_directory
import template_code.default_class as cc

# if len(sys.argv) < 3:
#     print('Need PATH and NAME')
#     raise ValueError('eg: ... name/to/path foo')

path = "SalamEngine/"+sys.argv[1]
name = sys.argv[2]

project_path = project_directory
cpp_path = f'{project_path}/Src/{path}'
hpp_path= f'{project_path}/Include/{path}'

def create_file(file_name,file_root_dir, file_extension, content):
    
    if not os.path.exists(file_root_dir):
        os.makedirs(file_root_dir)
        print("Create directory " + file_root_dir)
    
    cppFile = open(f'{file_root_dir}/{file_name}.{file_extension}', mode='a')
    cppFile.write(content)
    cppFile.close()
    pass

create_file( name , cpp_path , "cpp" ,cc.get_code_default_cpp(name,path))
create_file( name , hpp_path , "h" ,cc.get_code_default_hpp(name))
