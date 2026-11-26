1. What does CMake do, and how is it different from a compiler?

CMake reads CMakeLists.txt and makes a build plan. Files to use and where the headers are. The compiler (g++) turns the .cpp files into machine code.
My first error (Cannot find source file: src/games.cpp) came from CMake before the compiler started.

2. How do git add, git commit and git push differ?

git add picks which changes to save. git commit saves them as a snapshot on my computer. git push uploads my commits to my fork on GitHub so I can open a pull request.

3. Why did the conflict happen, and how did you resolve it?

The attempts and hints branches both changed the same lines in src/game.cpp (the code after a wrong guess).
I kept both, take away an attempt and end the game at 0, otherwise print "Too low!" or "Too high!". Then I removed the markers and committed.

4. Which error took longest to understand, and what did you learn?

The header error took longest:
fatal error: game.h: No such file or directory
The file was in /include but it was not mentioned in CMakeLists.txt, 
Adding the path was the hard path and it helped me learn how can i include different directories in my CMakeLists (basically the syntax of it).
