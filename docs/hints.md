# Hints

Open one hint at a time. Try an idea before opening the next.

## CMake configuration

<details><summary>Hint 1</summary>

CMake needs to find the files for the target before the compiler can run.
</details>

<details><summary>Hint 2</summary>

Read the first missing-source message and find the target it refers to.
</details>

<details><summary>Hint 3</summary>

Compare each path listed in `add_executable` with the actual filenames under `src/`.
</details>

## Compilation

<details><summary>Hint 1</summary>

The compiler started. It cannot find a header mentioned by an `#include`.
</details>

<details><summary>Hint 2</summary>

Locate that header and compare its directory with the directory of the source file that includes it.
</details>

<details><summary>Hint 3</summary>

Read the `PRIVATE` example pattern in [CMake’s target_include_directories reference](https://cmake.org/cmake/help/latest/command/target_include_directories.html) and decide what directory this executable needs.
</details>

## Linking

<details><summary>Hint 1</summary>

The compiler had enough information to compile the call. The linker cannot find the compiled function body.
</details>

<details><summary>Hint 2</summary>

Search for the function named in the diagnostic. Where is its body defined?
</details>

<details><summary>Hint 3</summary>

Check whether the file with that definition belongs to the executable target.
</details>

## Merging the attempts branch

<details><summary>Hint 1</summary>

This stage combines changes that affect different files.
</details>

<details><summary>Hint 2</summary>

Use `git branch -a` and the PR’s **Files changed** tab to check which branch and changes you’re about to merge.
</details>

<details><summary>Hint 3</summary>

If this PR conflicts, verify that its base is your repaired `main` and that its head started at the upstream attempts branch.
</details>

## Merging the hints branch

<details><summary>Hint 1</summary>

Both feature commits changed how the loop responds to an incorrect guess.
</details>

<details><summary>Hint 2</summary>

Run `git status` to find the conflicted file. Identify which changes control when the game stops and which change the feedback.
</details>

<details><summary>Hint 3</summary>

Trace the fifth guess twice, once when it is correct and once when it is wrong. Where should each path end, and what should it print before ending?
</details>
