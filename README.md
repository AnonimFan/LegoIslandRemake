# LegoIslandRemake

Remake of the 1997 game Lego Island. Implemented in Direct3D 9 and OpenGL 2.1 

#### Project
Remake, lego island, just about it

#### Building

**Visual Studio on Windows**:

Open up the solution and build the solution.

If you are getting an error that a Windows SDK version is missing, retarget the solution

**GCC on Windows**:

Assuming you've got mingw-w64, execute the following commands:
```
g++ -S LEGO1/src/*.cpp -c LEGO1/src/*.cpp -Ivendor/glad/include/ -Ivendor/glfw/include/ -Ivendor/glew/include/
g++ LEGO1/src/*.o -o LEGO1.dll -llibglfw3 -lglad.obj
g++ -S Isle/src/*.cpp -c Isle/src/*.s -ILEGO1/src/ 
g++ Isle/src/*.o -o Isle.exe -lLEGO1
g++ Config/src/*.cpp
```
NOTE: Theese command might NOT work, if they don't, use Visual Studio

#### FAQ
Q:Is this legal?
A:Not sure

Q:When did you start?
A:2021-09-10

