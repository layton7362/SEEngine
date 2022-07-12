def get_code_default_cpp(class_name = "Name_Default", path_name = "Path_Default"):
    ob = '{'
    cb = '}'
    return f'''
#include "{path_name}/{class_name}.h"

{class_name}::{class_name}()
{ob}

{cb}

{class_name}::~{class_name}()
{ob}

{cb}

''' 
    pass

def get_code_default_hpp(class_name = "Name_Default"):
    ob = '{'
    cb = '}'
    return f'''
#ifndef __{class_name}__h
#define __{class_name}__h

class {class_name}
{ob}
public:

// Methods

    {class_name}();
    virtual ~{class_name}();

// Members


{cb};

#endif
''' 
    pass

# print(get_code_default_hpp())
# print(get_code_default_cpp())