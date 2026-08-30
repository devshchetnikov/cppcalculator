# cppalculator 💻

A robust command-line calculator built with pure C++. This project marks the successful completion of the terminal-based version, featuring stabilized backend math and strict input validation.

## 🧠 Core Business Logic & Features
* **Robust Input Validation:** Utilized `std::stod` combined with `try-catch` exception handling blocks to securely parse strings and block invalid text or character entries.
* **Input Stream Safety:** Managed potential loop freezes by thoroughly flushing the input buffer using `std::numeric_limits` and clearing stream errors.
* **Extended Math Support:** Included standard arithmetic operators (`+`, `-`, `*`, `/`) along with power operations (`^`) using the `<cmath>` library.
* **Zero-Division Protection:** Embedded strict conditional logic to intercept runtime crashes when dividing by zero.
* **Interactive Lifecycle:** Implemented a continuous `do-while` loop system, allowing users to safely perform multiple calculations in a single session.

## 🏁 Project Status: Completed & Moving to WinForms
This CLI repository is now. To improve user experience and eliminate rigid step-by-step terminal inputs, the entire architecture and backend logic are being completely migrated to a brand-new framework: **Windows Forms (GUI)**. 

Further development will continue in the new graphical ecosystem.
