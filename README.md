# ClawC v0.1 🦞⚙️

**ClawC** is a small, lightweight math library for C.
Think of it as a tiny calculator core you can embed directly into your C projects.

It focuses on **basic arithmetic + commonly needed math utilities**, without pulling in heavy dependencies or doing anything magical behind your back.

---

## ✨ Features

ClawC currently supports:

* Basic arithmetic
  `add`, `sub`, `mul`, `divide`
* Integer utilities
  `mod`, `power`
* Number theory helpers
  `gcd`, `lcm`
* Factorials
  `fac`

All functions operate on integers and are designed to be simple, predictable, and easy to extend.

---

## 📦 Usage

Include the header in your project:

```c
#include "calc.h"
```

Example:

```c
#include <stdio.h>
#include "calc.h"

int main() {
    printf("Sum: %d\n", add(5, 3));
    printf("GCD: %d\n", gcd(24, 18));
    printf("Factorial: %d\n", fac(5));
    return 0;
}
```

Compile normally with your C compiler:

```bash
gcc main.c calc.c -o app
```

---

## 🎯 Goals

* Minimal and beginner-friendly
* Easy to read source code
* A solid base for expanding into a larger math or calculator project

This library is intentionally small—meant to be hacked on, extended, and learned from 🧠🔥

---

## 🧪 Status

* Version: **v0.1**
* Early development
* APIs may change as features are added

---

## 🚀 Future Ideas

* Floating-point support
* Error handling (division by zero, overflow, etc.)
* Trigonometric functions
* Expression parsing (full calculator mode 👀)

