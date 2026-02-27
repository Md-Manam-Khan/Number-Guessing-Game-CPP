# 🎯 Number Guessing Game (C++)

A feature-rich console-based number guessing game built in C++.

This project demonstrates random number generation using modern C++ libraries, input validation with exception handling, difficulty scaling, custom game configuration, and win streak tracking.

---

## 🚀 Features

- 🎮 Multiple Difficulty Modes
  - Easy → 1 to 100 (20 guesses)
  - Medium → 1 to 1000 (15 guesses)
  - Hard → 1 to 10000 (10 guesses)
  - Custom → User-defined range and attempts

- 🔥 Win Streak System
  - Tracks consecutive wins
  - Resets on loss

- ⏱ Performance Timer
  - Measures total time taken per round

- 🎨 Colored Console Output
  - ANSI escape codes for enhanced terminal experience

- 🛡 Input Validation
  - Uses `stoi()` with exception handling
  - Prevents crashes from invalid input

- 🤫 Hidden Developer Feature
  - Secret keyword reveals the correct number (for testing)

---

## 🧠 Concepts Used

- `std::mt19937` (Mersenne Twister RNG)
- `std::uniform_int_distribution`
- `std::chrono`
- Exception handling (`try-catch`)
- Classes and encapsulation
- Control flow management
- String handling and validation

---

## 🛠 How To Compile & Run

### Compile

```bash
g++ main.cpp -o game
