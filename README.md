
 MicroLog 
=============
A basic Arduino library to help with logging through a `Stream` like `Serial`. The added beneficts of this library are:
1. You can deactivate all logging with one line of code.
2. You can print up to 9 values with the same function instead of calling multiple `print()`.


# Use

Add to your global space:
```cpp
#include <MicroLog.h>
```

By default, MicroLog will use `Serial`. You can change the `Stream` with :
```cpp
#include <MicroLog.h>
```

In `setup()` initialize the Stream (to Serial1 for example) with :
```cpp
#define MICRO_LOG_STREAM Serial
```

You can then log to the stream with `LOG()` like this :
```cpp
// THIS WILL LOG SOMETHING LIKE : "Millis : 3294"
LOG("Millis :", millis());
```

You can have up to 9 arguments with `LOG()`  :
```cpp
// THIS WILL LOG SOMETHING LIKE : "State of pin 3 is 0 and state of pon 2 is 1"
LOG("State of pin", 3 , "is" , digitalRead(3), "and", "state of pin", 2 , "is" , digitalRead(2));
```

# Changing the separator

By default, the separator is a space " ", but this can be changed to anything by adding before `#include <MicroLog.h>` :
```cpp
#define LOG_SEPARATOR "|"
#include <MicroLog.h>
```

# Deactivate the logging

To deactive the logging, add before `#include <MicroLog.h>` :
```cpp
#define LOG_DEACTIVATE
#include <MicroLog.h>
```
