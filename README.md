
# MicroLog 
A basic Arduino library to help with logging through a `Stream` like `Serial`. The added benefits of this library are:
1. You can deactivate all logging with one line of code.
2. You can print up to 9 values with the same function instead of calling multiple `print()`.


## Setup

Add to your global space the following two lines, changing `Serial` to your own Stream output if requiered :
```cpp
#define MICRO_LOG_OUTPUT Serial
#include <MicroLog.h>
```

To deactivate, comment out `LOG_OUTPUT` :
```cpp
//#define MICRO_LOG_OUTPUT Serial
#include <MicroLog.h>
```


Do not forget to begin the Stream `setup()` if required :
```cpp
Serial.begin(115200)
```

## Use

You can then log to the stream with `LOG()` like this :
```cpp
// THIS WILL LOG SOMETHING LIKE : "Millis : 3294"
MICRO_LOG("Millis :", millis());
```

You can have up to 9 arguments with `LOG()`  :
```cpp
// THIS WILL LOG SOMETHING LIKE : "State of pin 3 is 0 and state of pon 2 is 1"
MICRO_LOG("State of pin", 3 , "is" , digitalRead(3), "and", "state of pin", 2 , "is" , digitalRead(2));
```

You can print out an array with `LOG_ARRAY()`  :
```cpp
int numbers[] = {10, 20, 30};
MICRO_LOG_ARRAY(numbers, 3); // Will output: numbers: [ 10, 20, 30 ]
```

## Changing the separator

By default, the separator is a space ` `, but this can be changed to anything by adding before `#include <MicroLog.h>` :
```cpp
#define MICRO_LOG_SEPARATOR "|"
#include <MicroLog.h>
```

## Disabling MICRO_LOG calls when the library is not included

If you are developing a library, you can include this code to not do any logging if the user's main code does not include `MICRO_LOG` :
```cpp
// DISABLE LOGGIGING IF MICRO_LOG NOT DEFINED ---|
#ifndef MICRO_LOG
#define MICRO_LOG(...)
#endif
// ----------------------------------------------|
```
