Learning Reflection – GuessQuest

1. What does CMake do, and how is it different from a compiler?

CMake is a build system generator that configures how a project should be built. It identifies source files, include directories and build requirements. A compiler, on the other hand, translates source code into machine code. In this assignment, I fixed the CMake configuration by correcting the incorrect `games.cpp` path, adding `random.cpp` and specifying the include directory.

2. How do git add, git commit and git push differ?

`git add` stages selected changes, `git commit` saves those staged changes as a snapshot in the local repository, and `git push` uploads local commits to a remote repository. I used these commands when submitting my CMake repair and subsequent feature branches to GitHub.

3. Why did the conflict happen, and how did you resolve it?

The conflict occurred because the limited-attempts and hints branches modified the same section of `game.cpp`. I resolved it by examining both versions and combining the changes, ensuring the game retained its five-attempt limit while displaying "Too high!" or "Too low!" depending on the guess.

4. Which error took longest to understand, and what did you learn?

Understanding Git branches and merge conflicts took me the longest. Initially, I struggled to understand `origin`, `upstream`, branch tracking and how changes moved between branches. Working through the conflict taught me to inspect differences carefully and understand the purpose of each change before merging.

Overall, this assignment improved my understanding of CMake, C++, Git and collaborative software development.
