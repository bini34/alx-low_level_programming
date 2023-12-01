# Hash Tables Project

## Project Overview

This project focuses on implementing and understanding hash tables in the C programming language. The main objectives are to create a hash table, implement a hash function, handle collisions, and perform various operations on the hash table.

## Project Details

### Learning Objectives

By completing this project, you are expected to achieve the following learning objectives:

#### General
- Understand what a hash function is and what makes a good hash function.
- Grasp the concepts of hash tables, their workings, and how to use them.
- Learn about collisions and various methods of dealing with them in the context of a hash table.
- Understand the advantages and drawbacks of using hash tables.
- Identify common use cases for hash tables.

#### Copyright - Plagiarism
- Develop solutions independently to meet the project's learning objectives.
- Strictly avoid plagiarism and refrain from publishing any project content.

### Requirements

#### General
- Use allowed editors: vi, vim, emacs.
- Compile all files on Ubuntu 20.04 LTS using `gcc` with specific options.
- Follow the Betty style for coding, checked with `betty-style.pl` and `betty-doc.pl`.
- Adhere to specified coding standards, including file ending with a new line and inclusion of header files.
- Create a `README.md` file at the root of the project folder.

### Data Structures

Use the following data structures for this project:

```c
/**
 * struct hash_node_s - Node of a hash table
 *
 * @key: The key, string
 * The key is unique in the HashTable
 * @value: The value corresponding to a key
 * @next: A pointer to the next node of the List
 */
typedef struct hash_node_s
{
    char *key;
    char *value;
    struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - Hash table data structure
 *
 * @size: The size of the array
 * @array: An array of size @size
 * Each cell of this array is a pointer to the first node of a linked list,
 * because we want our HashTable to use a Chaining collision handling
 */
typedef struct hash_table_s
{
    unsigned long int size;
    hash_node_t **array;
} hash_table_t;
```

### Tasks

1. **hash_table_create**: Write a function that creates a hash table.
    - Prototype: `hash_table_t *hash_table_create(unsigned long int size);`

2. **hash_djb2**: Implement the djb2 algorithm as a hash function.
    - Prototype: `unsigned long int hash_djb2(const unsigned char *str);`

3. **key_index**: Write a function that gives you the index of a key.
    - Prototype: `unsigned long int key_index(const unsigned char *key, unsigned long int size);`

4. **hash_table_set**: Write a function that adds an element to the hash table.
    - Prototype: `int hash_table_set(hash_table_t *ht, const char *key, const char *value);`

5. **hash_table_get**: Write a function that retrieves a value associated with a key.
    - Prototype: `char *hash_table_get(const hash_table_t *ht, const char *key);`

6. **hash_table_print**: Write a function that prints a hash table.
    - Prototype: `void hash_table_print(const hash_table_t *ht);`

7. **hash_table_delete**: Write a function that deletes a hash table.
    - Prototype: `void hash_table_delete(hash_table_t *ht);`

8. **Advanced - Sorted Hash Table**: Implement a sorted hash table with additional functions.
    - See the provided structures and prototypes in `100-sorted_hash_table.c`.

## Testing

To test the functions and ensure their correctness, run the provided test cases for each task. Additionally, you are encouraged to create your own tests to cover edge cases and scenarios not covered by the provided tests.

## Conclusion

Upon completing this project, you should have a solid understanding of hash tables, hash functions, collision handling, and the implementation of related operations. This knowledge is crucial for programming tasks that involve efficient data retrieval and storage.
