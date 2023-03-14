# cppc
A C++ Command Line (You heard me)

## Stuff you should know about
When you use `cout`, don't put `\n` at the end of it. Use `<< endl`.

```cpp
C++> cout << "Hello, World!" << endl;
```

You don't need to run `using namespace std`, because that's already in there. Only run stuff that's in here:
```cpp
#include <fstream>

using namespace std

int main() {
```
```cpp
  // Run only the code that would go here
```
```cpp
}
```
