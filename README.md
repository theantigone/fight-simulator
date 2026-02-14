# League of Legends Fighting Simulator

---
Table of Contents

1. [Overview](#overview)
2. [Motivation](#motivation)
3. [Getting Started](#getting-started)
    - [Prerequisites](#prerequisites)
    - [Installation](#installation)
4. [Usage Examples](#usage-examples)
5. [Troubleshooting](#troubleshooting)
6. [Conclusion](#conclusion)

---

## Overview

This personal project is a _very_ simple terminal game in C about two [champions](https://www.leagueoflegends.com/en-us/champions/) (playable characters) from the game of [League of Legends](https://www.leagueoflegends.com/en-us/) battling each other for glory and fame!

> [!NOTE]
> This project is inspired and very similar to [one of Lane's first coding projects from boot.dev](https://www.boot.dev/lessons/b34b0f83-0af0-4bad-9e8d-65ebcd8d7cbc)

## Motivation

I wanted to create my very own personal project without relying on tutorials or guides—so that I don't fall prey to the temptations of [tutorial hell](https://blog.boot.dev/education/building-your-first-coding-project/)—in [C](https://en.wikipedia.org/wiki/C_(programming_language)), a low-level language relative to the more popular coding languages. I created this project after finishing [Boot.dev's Memory Management course](https://www.boot.dev/courses/learn-memory-management-c).

Started 2/13/2026
Finished 2/14/2026 (?)

## Getting Started

### Prerequisites

- gcc (I used Ubuntu 11.4.0-1ubuntu~22.04.2)
- make (I used GNU Make 4.3)
- clang (I used Ubuntu clang version 14.0.0-1ubuntu1.1)
- POSIX-like operating systems (refer to [this WikiHow guide](https://www.wikihow.com/Compile-a-C-Program-Using-the-GNU-Compiler-(GCC)) on compiling the source code on Windows machines)

### Installation
1. Clone the repository and navigate to it
```sh
git clone https://github.com/theantigone/fighting-simulator.git
cd fighting-simulator/
```

2. Compile the source code into an executable
```sh
make
```

2. Run the fight simulator
```sh
./fight_sim
```

3. To remove the executable, run the `clean` command
```sh
make clean
```

## Usage Examples

## Troubleshooting

Feel free to peer into the source code in the `src` folder to troubleshoot any errors! Be mindful that some inputs limit certain types of responses (i.e., some inputs only accept certain types).

## Conclusion

I hope you enjoy this game!
