// # ⏱️ Time & Space Complexity – Complete Detailed Notes

// ---

// ## 1️⃣ Introduction

// In computer science, writing a correct program is not enough.  
// We must also write **efficient programs**.

// Efficiency depends on:
// - How fast a program runs → **Time Complexity**
// - How much memory it uses → **Space Complexity**

// Time and Space Complexity help us **analyze, compare, and optimize algorithms** without depending on hardware speed.

// ---

// ## 2️⃣ What is Time Complexity?

// **Time Complexity** is a measure of how the execution time of an algorithm increases with the size of input.

// - It does NOT measure actual time (seconds)
// - It counts number of basic operations
// - It is represented using **Big-O notation**

// ### Example:
// If an algorithm takes more steps as input grows, it has higher time complexity.

// ---

// ## 3️⃣ What is Space Complexity?

// **Space Complexity** is the amount of **extra memory** required by an algorithm during execution.

// It includes:
// - Variables
// - Arrays
// - Objects
// - Recursive call stack
// - Temporary data structures

// > Input space is not counted, only **extra space** is considered.

// ---

// ## 4️⃣ Why Time & Space Complexity Are Important?

// - To choose the **best algorithm**
// - To reduce execution time
// - To reduce memory usage
// - To avoid **Time Limit Exceeded (TLE)** errors
// - Very important in **competitive programming, exams, and interviews**

// ---

// ## 5️⃣ Asymptotic Notations

// Asymptotic notations describe the behavior of algorithms as input size becomes very large.

// ### Types:
// - **Big-O (O)** → Worst Case
// - **Big-Theta (Θ)** → Average Case
// - **Big-Omega (Ω)** → Best Case

// 👉 In practice, **Big-O is most commonly used**.

// ---

// ## 6️⃣ Big-O Notation

// Big-O notation represents the **upper bound** of an algorithm’s running time.

// It focuses on:
// - Worst-case performance
// - Growth rate of function
// - Dominant term only

// ---

// ## 7️⃣ Common Time Complexities Table

// | Complexity | Name | Example |
// |---------|------|--------|
// | O(1) | Constant | Access array |
// | O(log n) | Logarithmic | Binary search |
// | O(√n) | Square Root | Prime check |
// | O(n) | Linear | Array traversal |
// | O(n log n) | Linearithmic | Merge sort |
// | O(n²) | Quadratic | Bubble sort |
// | O(n³) | Cubic | Matrix multiplication |
// | O(2ⁿ) | Exponential | Fibonacci |
// | O(n!) | Factorial | Permutations |

// ---

// ## 8️⃣ O(1) – Constant Time Complexity

// ### Definition:
// The algorithm takes the **same time**, regardless of input size.

// ### Characteristics:
// - Fastest possible complexity
// - No loops depending on input

// ### Example:
// ```cpp
// int x = arr[10];

console.log("Accessing an element in an array is O(1) time complexity.");
