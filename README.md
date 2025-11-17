# ⏰ Chada Tech Dual-Clock System  
A C++ time-display project demonstrating modular design, rollover logic, and user-driven time manipulation.


![C++](https://img.shields.io/badge/language-C++17-blue.svg)
![Platform](https://img.shields.io/badge/platform-Windows%20%7C%20Visual%20Studio-blueviolet)
![License](https://img.shields.io/badge/license-MIT-green.svg)
![Status](https://img.shields.io/badge/build-passing-brightgreen.svg)
![PRs](https://img.shields.io/badge/PRs-welcome-blue.svg)
![Repo Size](https://img.shields.io/github/repo-size/ekdosetech/ChadaTechClocks)


## ⭐ Project Overview
This program displays **both 12-hour and 24-hour clocks side by side** in visually formatted boxes.  
Users can increment the **hour**, **minute**, or **second** via a menu-driven interface, with complete rollover logic:

- Second → Minute  
- Minute → Hour  
- Hour → 0–23 cycle  

Originally built for **CS 210 – Programming Languages**, now evolving into a polished portfolio project.

---

## 📚 Table of Contents
- [Key Features](#-key-features)
- [Technical Overview](#-technical-overview)
- [File Structure](#-file-structure)
- [How to Build & Run](#-how-to-build--run)
- [Learning Objectives Demonstrated](#-learning-objectives-demonstrated)
- [Future Enhancements](#-future-enhancements)
- [Why This Project Matters](#-why-this-project-matters)
- [Contributing](#-contributing)
- [License](#-license)
- [Contact](#-contact)

---

## 🧠 Key Features
- ✔ Dual 12-hour + 24-hour clock display  
- ✔ AM/PM formatting logic  
- ✔ Modular functions for time manipulation  
- ✔ Full rollover handling  
- ✔ Input validation for both menu and initial time  
- ✔ Professional centered-box formatting  
- ✔ Clean, readable, maintainable C++ design  

---

## 🛠 Technical Overview

- **Language:** C++17  
- **IDE:** Microsoft Visual Studio  
- **Paradigm:** Modular procedural design  


### 🔧 Core Functions

| Function                | Responsibility                                |
|-------------------------|-----------------------------------------------|
| `displayMenu()`         | Prints user menu options                      |
| `displayClocks()`       | Renders 12-hour & 24-hour clocks side by side |
| `addHour()`             | Increments hour with 24-hour rollover         |
| `addMinute()`           | Increments minute; triggers hour rollover     |
| `addSecond()`           | Cascading rollover: second → minute → hour    |
| `centerText()`          | Centers text inside a fixed-width field       |
| `validateInitialTime()` | Ensures initial time values are valid         |

### Design Goals
- Separation of logic & UI  
- No global variables  
- Explicit time-state mutation via reference parameters  
- Easy future expansion (OOP, ticking clock, etc.) 


---

## 📁 File Structure
ChadaTechClocks/
├─ ChadaTechClocks.cpp           # Main program source
├─ ChadaTechClocks.sln           # Visual Studio solution
├─ ChadaTechClocks.vcxproj       # VS project config
├─ ChadaTechClocks.vcxproj.filters
├─ .gitattributes
├─ .gitignore                    # Visual Studio ignores
└─ README.md                     # Documentation


---

##   How to Build & Run

### ✔ Using Visual Studio
1. Open `ChadaTechClocks.sln`
2. Select **Build → Build Solution**
3. Select **Debug → Start Without Debugging**  
   or press **Ctrl + F5**

---

## 🎓 Learning Objectives Demonstrated

- Modular C++ program structure  
- Function declarations & definitions  
- Menu-driven user interface  
- Control flow with loops & conditionals  
- Time formatting (12-hour & 24-hour)  
- Rollover algorithms  
- Input validation & error handling  
- Professional documentation & commenting  
- Clean formatting + consistent naming conventions  

---

## 📈 Future Enhancements

- ⏱ Real-time ticking using `<chrono>`  
- 🔄 Add subtract-time features  
- 💾 Logging or time history  
- 🧪 Unit tests for edge-case rollovers  
- 🧱 Convert into a class-based OOP model  
- 🖥 Add CLI flags (e.g., verbose mode, auto-tick)

---

## 💡 Why This Project Matters
This project demonstrates practical programming skills used in early engineering roles:

- Modular architecture  
- State management  
- Functional decomposition  
- User input validation  
- Clean console UI formatting  
- Time-based computation  
- Professional-level code clarity and documentation  

It functions as both an **academic milestone** and a **portfolio-ready example** of craftsmanship and problem-solving.

---

## 🤝 Contributing
Pull requests are welcome!  
Please open an issue first to discuss major changes.

---

## 📄 License
This project is distributed under the **MIT License**.

---

## 👤 Contact

**Erica Kinch**  
Computer Science Student  
GitHub: https://github.com/ekdosetech  
Email: ek.does.tech@gmail.com
LinkedIn: https://www.linkedin.com/in/erica-kinch/