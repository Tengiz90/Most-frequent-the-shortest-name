# Most frequent the shortest name - a problem from SPOJ
Find the average age of all persons with the most frequent name among the shortest names. If there are a few names that are the most frequent (i.e., with the same number of occurences) from the shortest ones, calculate separately the average age of all persons with a given name, and write the results in separate lines.

## Input

There are given at most $1000$ records, where each record is written in a separate line ending with newline character (even after the last line). Each record consists of a name (of length at most $25$ characters) and age (the integer between $0$ and $150$), separated by whitespace and ending with a newline character.

## Output

In each line write the name and the average age (represented as a floating point number with the precision limited to two decimal points) for each most frequent name among the shortest names. If there are two or more most frequent names among the shortest names, write these names in the lexicographical order, e.g., Dalton before Joseph, as in the example below.

## Example 1

### Input:

```
Gilbert 35
Anna 35
Anna 15
Gilbert 20
Joseph 40
```

### Output:

```
Anna 25.00
```

## Example 2

### Input:

```
Annamarie 20
Joseph 40
Joseph 50
Annamarie 30
Dalton 30
Dalton 20
Annamarie 40
```

### Output:

```
Dalton 25.00
Joseph 45.00
```
