# Linear Search Algo Implementation in C++

This repository contains a simple C++ implementation of the **Linear Search** algorithm. Linear search is the most basic searching algorithm that checks every element in a list sequentially until a match is found or the whole list has been searched.

## 🚀 How the Algorithm Works
1. Start from the first element (index 0).
2. Compare the search value `x` with the current element.
3. If the element matches `x`, return the position.
4. If not, move to the next element.
5. If the end of the array is reached without a match, return `-1`.

## 💻 Code Overview

The program defines a function `linearSearch` that iterates through an array of 6 integers. 

### Key Features:
- **Search Logic:** Uses a `for` loop to traverse the array.
- **Return Value:** Returns the **1-based position** of the element if found (e.g., if the element is at index 0, it returns 1).
- **Edge Case:** Returns `-1` if the element does not exist in the array.

## 🛠️ How to Run

1. **Clone the repository:**
   ```bash
   git clone [https://github.com/your-username/linear-search-cpp.git](https://github.com/your-username/linear-search-cpp.git)
