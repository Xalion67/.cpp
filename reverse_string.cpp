#include <iostream>


std::string reverse_string(std::string string) {
  short buffer, start, end;

  for (start = 0, end = string.length() - 1; start < end; start++, end--) {
        buffer = string[start];
        string[start] = string[end];
        string[end] = buffer;
  }

 return string;
}
