from glob import glob
import SCons.Script
from SCons.Environment import Environment
from Tools.global_defs import project_directory
import os

env = Environment(tools=["mingw"], ENV = os.environ)

LIBPATH = glob("F:/MyEngine/LibRepo/libs/**")

CPPFILES = glob(f'{project_directory}/Src/**/*.c*', recursive=True)

LIBS = [
        "vulkan-1",
        "SDL2",
        "SDL2main",
        "python39"
        ]

HEADERPATH= [
       "F:/MyEngine/LibRepo/include",
       f'{project_directory}/include'
        ]

CPPFLAGS = [
        # "/s:c17"
        # "-E"
        ]   

# env.Library(
#     "engine",
#     prop.sources,
#     LIBPATH= LIBPATH,
#     LIBS=   LIBS,
#     CPPPATH= CPPPATH,
#     CPPFLAGS=CPPFLAGS
# )

env.Program(
    "Build/main.exe",
    CPPFILES,
    LIBPATH= LIBPATH,
    LIBS=   LIBS,
    CPPPATH= HEADERPATH,
    CPPFLAGS=CPPFLAGS
)

