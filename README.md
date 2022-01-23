# ilu!
A stack-based programming language which compiles to assembly.

### quick start
Clone this repo and run:
```
./build.sh
```
There should be an executeable called `ilu` which you can run.

### examples
Hello World!
```python
@include "std/io.ilu"

def main in
    "Hello World!" println
end
```

Loop through numbers from 0-100 and print them:
```python
def main in
    0 while dup 100 < do
        dup dump
        1 +
    end
end
```

### inspiration and learning resources and stuff
Based off [https://gitlab.com/tsoding/porth/-/tree/master](Porth).
