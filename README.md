#  Second and Third Largest Finder in C++

This program finds the **second** and **third** largest unique elements in an array using C++.

---

##  Features

- Handles arrays with duplicates.
- Works for any integer array of size ≥ 3.
- Uses linear time complexity: **O(n)**.
- Avoids sorting for better performance.

---

##  Algorithm

1. Initialize three variables `first`, `second`, and `third` to negative infinity.
2. Traverse the array:
   - If the current number is greater than `first`, update all three.
   - Else if it’s between `first` and `second`, update `second` and `third`.
   - Else if it’s between `second` and `third`, update `third`.
3. Skip duplicates when considering second and third.

---

##  Sample Output

```text
Second largest: 89
Third largest: 67
