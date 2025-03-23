# cppc
A C++ Command Line

## Stuff you should know about
If you don't need to clear the buffer, use "\n" when terminating the line. Otherwise, endl should be used. The thing is that clearing the buffer also takes some time, which leads to a decrease in performance.

```cpp
for(int i = 0; i < 999; i++)
{
  cout << "Hello, World!" << "\n";
}
cout << "Bye Bye!" << endl;
```
