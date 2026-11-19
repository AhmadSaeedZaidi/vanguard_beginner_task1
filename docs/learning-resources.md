# Learning resources

## 1. Explore

A fork is your copy on GitHub. A clone is the local copy you work in.

- Follow **Forking a repository** and **Cloning your forked repository**. [GitHub Docs · Fork a repository](https://docs.github.com/en/pull-requests/how-tos/work-with-forks/fork-a-repo)
- Look for **Cloning an Existing Repository** and the `--oneline` log example. [Pro Git · Getting a Git Repository](https://git-scm.com/book/en/v2/Git-Basics-Getting-a-Git-Repository), [Pro Git · Viewing the Commit History](https://git-scm.com/book/en/v2/Git-Basics-Viewing-the-Commit-History)

## 2. Repair

CMake configures the project and generates build files. The build tool uses those files to run the compiler on source files and the linker to join the compiled pieces into an executable.

- Read **Exercise 1** for executable targets and **Build and Run** for how to invoke CMake. [CMake tutorial · Getting Started](https://cmake.org/cmake/help/latest/guide/tutorial/Getting%20Started%20with%20CMake.html)
- Look up `-S`, `-B` and `--build` when you need to check a flag. [CMake command-line reference](https://cmake.org/cmake/help/latest/manual/cmake.1.html)

## 3. Ship

Edit files in the working tree. Use `git add` to choose changes for the next snapshot, `git commit` to record that snapshot locally, and `git push` to send commits to GitHub. Check your current and staged changes with `git status` and saved commits with `git log`. Use `git branch` to list branches and `git switch` to move between them.

- Read **Checking the Status of Your Files**, **Staging Modified Files** and **Committing Your Changes**. [Pro Git · Recording Changes](https://git-scm.com/book/en/v2/Git-Basics-Recording-Changes-to-the-Repository)
- See how branch pointers move, then check the `-c` option for creating and switching to a branch. [Pro Git · Branches in a Nutshell](https://git-scm.com/book/en/v2/Git-Branching-Branches-in-a-Nutshell), [Git · git-switch](https://git-scm.com/docs/git-switch)
- Look for **Pushing to Your Remotes** and check the **base** and **compare** selectors when opening your PR. [Pro Git · Working with Remotes](https://git-scm.com/book/en/v2/Git-Basics-Working-with-Remotes), [GitHub Docs · Creating a pull request](https://docs.github.com/en/pull-requests/how-tos/create-pull-requests/creating-a-pull-request)
- If GitHub prompts for credentials, see the HTTPS and SSH sign-in options. [GitHub Docs · About authentication](https://docs.github.com/en/authentication/keeping-your-account-and-data-secure/about-authentication-to-github)

## 4. Integrate

`git fetch` updates your local view of a remote. `git merge` integrates another branch into the branch you have checked out. A conflict means Git needs your help combining edits.

- Find **Fetching and Pulling from Your Remotes** and look up `A...B`, which shows what B changed since the two branches diverged. [Pro Git · Working with Remotes](https://git-scm.com/book/en/v2/Git-Basics-Working-with-Remotes), [Git · git-diff](https://git-scm.com/docs/git-diff)
- Read **Basic Merge Conflicts**. Use the GitHub example to see how to read the markers and mark a file resolved. [Pro Git · Basic Branching and Merging](https://git-scm.com/book/en/v2/Git-Branching-Basic-Branching-and-Merging), [GitHub Docs · Resolving a merge conflict on the command line](https://docs.github.com/en/pull-requests/how-tos/merge-and-close-pull-requests/resolving-a-merge-conflict-using-the-command-line)

## 5. Improve

Sketch the behavior of one round first. Look at **Conditional statements** or **Loops** for the change you chose. [LearnCpp · Control flow introduction](https://www.learncpp.com/cpp-tutorial/control-flow-introduction/)

## 6. Submit

Create a fresh build directory so the final check starts with an empty CMake cache. On GitHub, use **Files changed** to check what your improvement PR contains before merging. [CMake tutorial · Build and Run](https://cmake.org/cmake/help/latest/guide/tutorial/Getting%20Started%20with%20CMake.html), [GitHub Docs · Reviewing proposed changes](https://docs.github.com/en/pull-requests/collaborating-with-pull-requests/reviewing-changes-in-pull-requests/reviewing-proposed-changes-in-a-pull-request)
