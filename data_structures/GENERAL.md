# Sequence containers

Sequence containers implement data structures that can be accessed sequentially. 

- array: Static contiguous array (class template)  
- vector: Dynamic contiguous array (class template)  
- deque: Double-ended queue (class template)  
- forward_list: Singly-linked list (class template)  
- list: Doubly-linked list (class template)  

# Associative containers

Associative containers implement sorted data structures that can be quickly searched (O(log n) complexity). 

- set: Collection of unique keys, sorted by keys  
- (class template)  
- map: Collection of key-value pairs, sorted by keys, keys are unique (class template).  
- multiset: Collection of keys, sorted by keys (class template)  
- multimap: Collection of key-value pairs, sorted by keys 
- (class template)  

# Unordered associative containers

Unordered associative containers implement unsorted (hashed) data structures that can be quickly searched (O(1) amortized, O(n) worst-case complexity). 

- unordered_set: Collection of unique keys, hashed by keys. (class template)  
- unordered_map: Collection of key-value pairs, hashed by keys, keys are unique. (class template)  
- unordered_multiset: Collection of keys, hashed by keys (class template)  
- unordered_multimap: Collection of key-value pairs, hashed by keys (class template)  

# Container adapters

Container adapters provide a different interface for sequential containers. 

- stack: Adapts a container to provide stack (LIFO data structure) (class template).  
- queue: Adapts a container to provide queue (FIFO data structure) (class template).  
- priority_queue: Adapts a container to provide priority queue (class template).  
