    #include "scrabble_score.h"
    #include "algorithm"
    #include "list"
    #include <cctype>
    #include <list>
    #include <string>

    namespace scrabble_score {
    int score(std::string test) {
    int nilai{};
    std::string group[] = {{"AEIOULNRST"}, {"DG"}, {"BCMP"}, {"FHVWY"},
                            {"K"},          {"JX"}, {"QZ"}};
    std::transform(test.begin(), test.end(), test.begin(),
                    [](unsigned char c) { return std::toupper(c); });
    std::string word{};
    for (auto c : test) {
        if (std::isalpha(c))
        word.push_back(c);
    }
    for (auto s : word) {
        group[0].find(s) != std::string::npos ? nilai += 1 : 0;
        group[1].find(s) != std::string::npos ? nilai += 2 : 0;
        group[2].find(s) != std::string::npos ? nilai += 3 : 0;
        group[3].find(s) != std::string::npos ? nilai += 4 : 0;
        group[4].find(s) != std::string::npos ? nilai += 5 : 0;
        group[5].find(s) != std::string::npos ? nilai += 8 : 0;
        group[6].find(s) != std::string::npos ? nilai += 10 : 0;
    }

    return nilai;
    }
    } // namespace scrabble_score 