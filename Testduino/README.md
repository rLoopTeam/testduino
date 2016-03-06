You might be wondering why these files are in this subfolder.

Basically, this was the only way to be able to `#import "Testduino.h"`, and not
have the compiler error out. If you put the macros in the same header file as the
`Testduino` class definition, then the compiler freaks out. This way they can be
seperate. Maybe someone with more C++ knowledge than I could figure out a way to
do this properly.
