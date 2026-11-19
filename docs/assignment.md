# GuessQuest assignment

The times are estimates. Keep rough notes as you go so you can refer to actual errors and decisions in your reflection.

## 1. Explore the repository · 45 min

- On Ubuntu, check for Git, CMake and a C++ compiler with their `--version` flags. If you need them, install `git`, `cmake` and `build-essential` with APT.
- Fork the starter on GitHub and clone your fork. From its root, run `git status`, `git log --oneline` and `git branch -a`. What does each tell you?
- Find `CMakeLists.txt`, the header and the three source files. In your notes, describe what each source file does in a sentence.
- Try `cmake -S . -B build` and `cmake --build build`. Record the first error. Which command reported it?

[Read for Part 1 · Forking, cloning and reading history](learning-resources.md#1-explore)

## 2. Repair the build · 90 min

- Look up what the two CMake commands do. Work through the three failures in order, changing only `CMakeLists.txt`. Fix one error at a time and rerun the relevant command.
- Launch `./build/guessquest` after the repairs. Explain in your notes how a missing source path, a header lookup failure and an undefined reference occur at different stages.

[Read for Part 2 · CMake targets and build stages](learning-resources.md#2-repair)

## 3. Ship the repair · 60 min

- Create and switch to `fix/cmake` with your repair still in the working tree. Stage `CMakeLists.txt`, make a clear commit and push the branch to your fork.
- Open a pull request (PR), review **Files changed**, then merge it. For every PR in this assignment, set both the base and head repositories to **your fork**, with `main` as the base branch. Check the repository names before opening the PR.
- Use **Create a merge commit** for the four PRs so their branch history stays visible. After each merge, switch to local `main` and update it from `origin/main` before starting the next task.

[Read for Part 3 · Staging, branches and pull requests](learning-resources.md#3-ship)

## 4. Integrate both features · 90 min

- Check `git remote -v`. `origin` is your fork. Add a remote named `upstream` using the starter repository's clone URL (`git remote add upstream <starter-clone-url>`). Run `git fetch upstream` to get the feature branches, even if your fork copied only `main`.
- Inspect each feature with `git diff upstream/main...upstream/feature/limited-attempts` and `git diff upstream/main...upstream/feature/hints`. What behavior does each change?
- Create local branches from the corresponding `upstream/feature/…` refs. Push `feature/limited-attempts` to `origin` and merge its PR first. Update local `main`, then push `feature/hints` to `origin` and open its PR.
- On your local hints branch, merge the updated `main` into it. Read both sides of `<<<<<<<`, `=======` and `>>>>>>>`. Combine their behavior, stage the edited file and finish the merge. Push your resolution to the same branch and merge its PR.
- Rebuild and try both hint directions and a round with five wrong guesses. Make sure there is no sixth prompt. Try a win on the fifth guess too.

[Read for Part 4 · Remotes, branch diffs and conflict markers](learning-resources.md#4-integrate)

## 5. Make one improvement · 60 min

Branch from your updated `main`. Choose one option and make a meaningful commit. Each option earns the same credit when it works.

- **Difficulty selector** with Easy (1–10), Medium (1–20) and Hard (1–100).
- **Score** that rewards winning with fewer guesses.
- **Play again** to start a fresh round without exiting.
- **Victory message** for winning on the first guess.

[Read for Part 5 · Choosing a C++ control structure](learning-resources.md#5-improve)

## 6. Verify and submit · 45 min

- Add `LEARNING.md` (200–300 words) to your improvement branch in a separate commit. Push, open your improvement PR and merge it.
- Update local `main`. Configure and build in a fresh directory such as `build-final`. Play one winning round and one losing round. Check the five-attempt limit, both hint directions and your improvement.
- Submit your fork URL and the four merged PR links (CMake, attempts, hints and improvement). Keep `LEARNING.md` in the fork's `main`.

In `LEARNING.md`, answer these questions using examples from your work.

1. What does CMake do, and how is it different from a compiler?
2. How do `git add`, `git commit` and `git push` differ?
3. Why did the conflict happen, and how did you resolve it?
4. Which error took longest to understand, and what did you learn?

[Read for Part 6 · Checking the final PR and build](learning-resources.md#6-submit)

| Marking criterion | Points |
| --- | ---: |
| CMake repair and successful build | 30 |
| Branches, commits, pushes and PR workflow | 20 |
| Conflict resolution that preserves both features | 25 |
| One working improvement | 15 |
| Reflection and complete submission | 10 |
