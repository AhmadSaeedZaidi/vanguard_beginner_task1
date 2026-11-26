# GuessQuest Learning

1. What does CMake do, and how is it different from a compiler?
A compiler turns a C++ file into a program I can run. CMake doesn't compile anything itself. It reads the CMakeLists.txt file, which lists the files in the project, and sets up how to build them. Then the compiler does the actual work.

2. How do git add, git commit, and git push differ?
"git add" prepares the changes to be committed, "git commit" saves those changes on the local computer, and "git push" uploads local commits to my remote GitHub fork (origin), so they can be used in a pull request.

3. Why did the conflict happen, and how did you resolve it?
The conflict happened because feature/limited-attempts and feature/hints both changed the guessing loop in src/game.cpp. So when I merged main into feature/hints, git couldn't tell which version to keep and marked the file with <<<<<<<, ======= and >>>>>>>. I read both sides and kept the hints and the attemptsRemaining countdown and then deleted the markers, ran git add src/game.cpp and committed to finish the merge.

4. Which error took longest to understand, and what did you learn?
The error that took the longest to understand was after I resolved the merge conflict, when the game still allowed more than five guesses. I had fixed the code in VSCode, but when I ran the game to test it, nothing had changed. So I thought my code was wrong and kept trying different solutions. At the end I realized I had to build the project again with "cmake --build build" after editing the file because the program doesn't update automatically. I learned to always rebuild before testing.