
# Unordered Set Vs Set

Unordered sets have to pay for their **O(1)** average access time in a few ways:

- **set** uses **less memory** than **unordered_set** to store the same number of elements.
 
- For a small number of elements, lookups in a **set** might be **faster** than lookups in an **unordered_set**.

- Even though many operations are faster in the average case for **unordered_set**, they are often guaranteed to have better worst case complexities for set (for example insert).

- That **set** sorts the elements is useful if you want to access them in order.

- You can lexicographically compare different sets with <, <=, > and >=. **unordered_sets** are not required to support these operations.

- When, for someone who wants to iterate over the items of the set, the order matters therefore uses set.

**Whenever you prefer a tree to a hash table.**

**For instance, hash tables are "O(n)" at worst case. O(1) is the average case. Trees are "O(log n)" at worst.**


### Use set when:

- We need ordered data(distinct elements).
- We would have to print/access the data (in sorted order).
- We need predecessor/successor of elements.

## Use unordered_set when:
- We need to keep a set of distinct elements and no ordering is required.
- We need single element access i.e. no traversal.

Examples:

**set:**

**Input : 1, 8, 2, 5, 3, 9**

**Output : 1, 2, 3, 5, 8, 9**

**Unordered_set:**

**Input : 1, 8, 2, 5, 3, 9**

**Output : 9 3 1 8 2 5 (maybe this order, influenced by hash function)**

Mainly difference :

enter image description here

![image](https://user-images.githubusercontent.com/76129377/152840083-7116ec2b-48a1-45be-bfed-9488bc243e47.png)


Note:(in some case set is more convenient) for example using vector as key


  set<vector<int>> s;
  s.insert({1, 2});
  s.insert({1, 3});
  s.insert({1, 2});

for(const auto& vec:s)
    cout<<vec<<endl;   // I have override << for vector
// 1 2
// 1 3 
  
The reason why vector<int> can be as key in set because vector override operator<.
                                                                                   

But if you use unordered_set<vector<int>> you have to create a hash function for vector<int>, because vector does't have a hash function, so you have to define one like:


  struct VectorHash {
    size_t operator()(const std::vector<int>& v) const {
        std::hash<int> hasher;
        size_t seed = 0;
        for (int i : v) {
            seed ^= hasher(i) + 0x9e3779b9 + (seed<<6) + (seed>>2);
        }
          return seed;
      }
  };

  vector<vector<int>> two(){
    //unordered_set<vector<int>> s; // error vector<int> doesn't  have hash function
    unordered_set<vector<int>, VectorHash> s;
    s.insert({1, 2});
    s.insert({1, 3});
    s.insert({1, 2});

    for(const auto& vec:s)
        cout<<vec<<endl;
    // 1 2
    // 1 3
}
you can see that in some case unordered_set is more complicated.

