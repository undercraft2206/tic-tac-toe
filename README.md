# 🎮 Tic-Tac-Toe

<div align="center">

[![GitHub stars](https://img.shields.io/github/stars/undercraft2206/tic-tac-toe?style=for-the-badge)](https://github.com/undercraft2206/tic-tac-toe/stargazers)

[![GitHub forks](https://img.shields.io/github/forks/undercraft2206/tic-tac-toe?style=for-the-badge)](https://github.com/undercraft2206/tic-tac-toe/network)

[![GitHub issues](https://img.shields.io/github/issues/undercraft2206/tic-tac-toe?style=for-the-badge)](https://github.com/undercraft2206/tic-tac-toe/issues)

**A classic command-line Tic-Tac-Toe game implemented in C.**

</div>

## 📖 Overview

This repository hosts a simple, yet complete, implementation of the classic Tic-Tac-Toe game. Developed in C, this project provides a command-line interface for two players to engage in a traditional game on a 3x3 grid. It's an excellent example for understanding basic C programming concepts, game logic, and console interaction.

## ✨ Features

-   🎯 **Classic 3x3 Grid Gameplay**: Experience the familiar Tic-Tac-Toe rules.
-   👥 **Two-Player Mode (coming soon)**: Play head-to-head with a friend.
-   ⌨️ **Command-Line Interface**: Interact with the game directly through your terminal.
-   🏆 **WinDetection**: Automatically identifies winning conditions (three in a row, column, or diagonal) and draw states.
-   ✍️ **Input Validation**: Ensures players enter valid moves.

## 🛠️ Tech Stack

**Language:**

![C](https://img.shields.io/badge/C-00599C?style=for-the-badge&logo=c&logoColor=white)

## 🚀 Quick Start

Follow these steps to get the Tic-Tac-Toe game up and running on your local machine.

### Prerequisites

You need a C compiler installed on your system.
-   **GCC** (GNU Compiler Collection) is highly recommended. You can typically install it via your system's package manager (e.g., `apt` on Ubuntu, `brew` on macOS, MinGW/MSYS2 on Windows).

### Installation

1.  **Clone the repository**
    ```bash
    git clone https://github.com/undercraft2206/tic-tac-toe.git
    cd tic-tac-toe
    ```

2.  **Navigate to the source directory**
    ```bash
    cd tic-tac-toe/ # Assuming source code is inside this directory
    ```

3.  **Compile the game**
    Use a C compiler (like GCC) to compile the source code.
    ```bash
    gcc -o tic-tac-toe main.c # Adjust 'main.c' if your main source file has a different name
    ```
    This command will create an executable file named `tic-tac-toe`.

### Run the game

Once compiled, you can execute the game from your terminal.
```bash
./tic-tac-toe
```

## 📖 Usage

After running the executable, the game board will be displayed in your terminal. Players take turns entering a number (1-9) corresponding to the position on the grid where they wish to place their 'X' or 'O'.

**Example Gameplay:**

```
   1 | 2 | 3
  ---+---+---
   4 | 5 | 6
  ---+---+---
   7 | 8 | 9

Player 1 (X), enter your move (1-9):
```

The game will continue until a player wins or all positions are filled, resulting in a draw.

## 📁 Project Structure

```
tic-tac-toe/
├── tic-tac-toe/           # Contains the C source code for the game
│   └── main.c             # (Assumed) The primary source file
└── README.md              # Project README file
```

## 🤝 Contributing

While this is a basic project, contributions are always welcome! If you have suggestions for improvements, bug fixes, or new features (e.g., AI opponent, different board sizes), please feel free to fork the repository, make your changes, and open a pull request.

### Development Setup for Contributors

1.  Clone the repository.
2.  Navigate to the `tic-tac-toe` directory.
3.  Modify the C source files.
4.  Recompile using `gcc -o tic-tac-toe main.c` (or your preferred compiler).
5.  Test your changes by running `./tic-tac-toe`.

## 📄 License

This project currently has no explicit license specified. All rights are reserved by the author.

## 🙏 Acknowledgments

-   Inspired by the timeless simplicity of the Tic-Tac-Toe game.

---

<div align="center">

Made with ❤️ by [undercraft2206](https://github.com/undercraft2206)

</div>

