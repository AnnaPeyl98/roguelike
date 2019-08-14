//
// Created by anna on 27.07.19.
//

#ifndef MYGAME_RECORDREADER_H
#define MYGAME_RECORDREADER_H
#include <fcntl.h>;
#include <unistd.h>
#include <cstring>
#include <fstream>
#include <map>
#include <string>
#include <utility>
#include <vector>
#include "Reader.h"
class RecordReader {
  std::map<int, std::string> record;
  bool IsEmptyOrWhitespace(std::string s) {
    int k = 0;
    if (s == "") return true;
    const char* str = s.c_str();
    for (int i = 0; i < strlen(str); i++) {
      if (str[i] == ' ') {
        k++;
      }
    }
    auto i = k;
    auto l = strlen(str);
    return k == strlen(str);
  }

 public:
  RecordReader() {}
  void Write(const char* name, std::__cxx11::wstring s, int steps) {
    FILE* file;
    file = fopen(name, "a");
    // std::__cxx11::wstring ws(s);
    std::string str(s.begin(), s.end());
    if (IsEmptyOrWhitespace(str)) {
      fprintf(file, "%s %d ", "no_name", steps);
    } else {
      const char* cstr = str.c_str();
      fprintf(file, "%s %d ", cstr, steps);
    }
    fclose(file);
  }
  void Read(const char* name) {
    FILE* file;
    file = fopen(name, "r");
    while (true) {
      if (feof(file)) break;
      char c[255];
      int steps;
      fscanf(file, "%s %d", c, &steps);
      record[steps] = c;
    }
    fclose(file);
  }
  std::map<int, std::string> GetMap() {
    return record;
  }
};
#endif  // MYGAME_RECORDREADER_H
