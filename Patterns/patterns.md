###1. Outer loop --> n times (n = no.of lines.) To print number of rows.

###2. Inner loop --> How many elements in the "ROW". (1 single row = Inner Loop)

# Nested Loops Basics

## 1. Outer Loop
- Runs **`n` times**
- `n` = Number of lines / rows to print

### Purpose
The outer loop is responsible for controlling the **number of rows**.

---

## 2. Inner Loop
- Controls how many elements are printed in a **single row**

### Purpose
The inner loop handles the **content inside each row**.

> 1 single row = Inner Loop execution

---

## Example Structure

```cpp
for(int i = 1; i <= n; i++) {        // Outer Loop -> Rows

    for(int j = 1; j <= m; j++) {    // Inner Loop -> Elements in a row
        cout << "* ";
    }

    cout << endl;
}