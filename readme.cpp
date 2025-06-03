# C++ Module 07 – Templates

This module is focused on **C++ templates**, one of the most powerful features of the language. Templates allow writing **generic and reusable code** that works with any data type, without rewriting logic for every type.

## 📝 What I Learned

* How to define and use **function and class templates**
* Specialization (partial and full) of templates
* Handling **const correctness** in templates
* Template instantiation (implicit vs explicit)
* Safe array access with custom class templates
* Improving memory safety with RAII and exception handling

---

## 📦 Exercise 00: Start with a few functions

**Goal**: Write three **function templates**: `swap`, `min`, and `max`.

### Concepts Practiced

* **Function templates**: Writing functions that work with any type.
* **Generic programming**: No code duplication needed for different types.
* **Reference passing**: Using `T&` avoids unnecessary copies.
* **Const correctness**: Ensures safety when using constant arguments.

```cpp
template <typename T>
T max(T const &x, T const &y) {
    return (x >= y ? x : y);
}
```

### Template Instantiation

* **Explicit**: `max<int>(a, b);` – we define the type manually.
* **Implicit**: `max(a, b);` – compiler deduces the type automatically.

---

## 📦 Exercise 01: Iter

**Goal**: Implement a function template `iter` that applies a function to each element of an array.

### Concepts Practiced

* Writing **template functions with function parameters**
* Supporting both **const and non-const arrays**
* **Default template arguments** and function overloading
* Using **function pointers or lambdas** as arguments

```cpp
template <typename T>
void iter(T *array, int length, void (*func)(T const &)) {
    for (int i = 0; i < length; i++)
        func(array[i]);
}
```

### Also Learned

* **Specialization**:

  * **Partial specialization**: Used when one template parameter is fixed.
  * **Full specialization**: Used when all template parameters are known.

Example (from `Pair<int, U>` and `Pair<bool, bool>`):

```cpp
template <>
class Pair<bool, bool> {
    // Efficient memory representation using bitwise ops
};
```

This technique optimizes space when dealing with known types (like `bool`).

---

## 📦 Exercise 02: Array

**Goal**: Implement a **class template** `Array<T>` that mimics a basic version of `std::vector`.

### Concepts Practiced

* Custom **class templates**
* Safe dynamic memory allocation using `new[]` and `delete[]`
* Implementing:

  * **Default constructor**
  * **Parameterized constructor**
  * **Copy constructor**
  * **Assignment operator**
  * **Element access with bounds checking**
  * **size()** method

### Exception Safety

* Accessing out-of-bounds elements throws a **standard exception**.
* This avoids **undefined behavior** and ensures **memory safety**.

```cpp
T &operator[](unsigned int i) {
    if (i >= this->_size)
        throw std::out_of_range("Index out of bounds");
    return this->_array[i];
}
```
