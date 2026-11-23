# 1. What CMake does and how it differs from a compiler? 
CMake reads the CMakeLists.txt and then writes the builds files. 
For example during this activity when we first ran the cmake build it threw an error saying no file named games.cpp found and it was a typo and we corrected it and after that we got a header file missing error which we had to fix by adding a targetted include directory so that cmake knows that the header file is located in that directory and after that we got a randomNumber undefined and it was due to a file missing caught by the linker who couldnt find it anywhere in the files mentioned in the CMakeLists.txt


# 2. How git add, git commit and git push differ?
git add : adds the file for staging and files to track basically 
git commit : commits any changes done to the files that are added to track
git push : pushes any changes that are commited to the github remote repo so other people can see the changes you did

# 3. Why the conflict happened and how you resolved it? 
Two conflicts happened in my case , one was due to the comments that i commited in an earlier commit causing the limited attempts branch to throw a merge conflict which i resolved by accepting the changes coming from the limited attempts branch and then readding my comment on top afterwards and the next one was the one thrown by the hints branch cause they did changes where we already put limited attempts code so i resolved that by accepting the changes from the limited attempts and then adding the hints logic afterwards

# 4. Which error took longest and what you learned
The hints branch merge conflict took me the longest since it had me doing multiple checks before i merged to make sure that the program worked as intented and I learned how to handle merge conflicts of this type where you have to keep changes done on the same line while making sure that the functionailty of the program is preserved. 