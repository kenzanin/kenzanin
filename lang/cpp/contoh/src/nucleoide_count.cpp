#include "nucleotide_count.h"
#include <cctype>
#include <cstddef>
#include <stdexcept>
#include <string>

namespace nucleotide_count {
} // namespace nucleotide_count

nucleotide_count::counter::counter(const std::string &str)
    : tmp{{'A', 0}, {'T', 0}, {'C', 0}, {'G', 0}} {
for (auto &c : str) {
    if (tmp.find(c) == tmp.end())
    throw std::invalid_argument("salah argument:");
    tmp.at(c) += 1;
}
}

std::map<char, int> const nucleotide_count::counter::nucleotide_counts() const { return tmp; }

int nucleotide_count::counter::count(const char &c) const {
if (tmp.find(c) == tmp.end()) {
    throw std::invalid_argument("salah argument");
}
return tmp.at(c);
}