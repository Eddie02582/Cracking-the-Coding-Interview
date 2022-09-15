# Bit Manipulation



## Common Bit Tasks


### setBit

```c++
int setBit(int n, int k)
{
    return (n | (1 << (k)));
}

```